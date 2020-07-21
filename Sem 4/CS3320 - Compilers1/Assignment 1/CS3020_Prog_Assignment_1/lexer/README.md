# COOL Compiler #

## CORRECTNESS: ## 
The order followed in code is :
1. Possible ERRORS(edge cases)
2. Operators
3. Fragments for case insensitive alphabets
4. Keywords
5. Boolean, Integer, String Constants
6. Identifiers
7. Comments
8. Whitespace
9. Invalid characters
10. String and comment modes
    
* I used another section Possible ERRORS to handle the errors that can't be handled by other sections.
* As fragments will not be counted as token the matched words are safely tokenised as keywords.
* As keywords are placed before identifiers the words recognised as both(keyword and identifier) have same length but are recognised as keywords only.
* As I used modes for defining string constants and Comments. It is very safe and can be identifed clearly.
* As whitespace and Invalid characters are placed at the end there is not problem in determining other tokens.

As all the ways of mistakes has been identified and handled as explained above, my code is correct

## DESIGN: ##
#### TOKENS ####
All the tokens that to be identified are specifically declared under tokens section. Finally the output should be the stream of these tokens only. These tokens are given already with the skeleton code. The tokens will be identified using longest match and the order in which the rules are placed.

#### reportError(message): ####
This can be used when lexer encounters any erroneous input and this passes the message given as argument to this function to the parser as an error. As warned I haven't changed any code for this function.

#### POSSIBLE ERRORS ####
1. In case if any unmatched '\*)' is scanned, instead of tokensing it as two operators (STAR,RPAREN) it performs an action which reports error. This is due to the longest match rule of the lexical analysis used by ANTLR. It is also safe to write it on the top.
2. If the string contain EOF at start(i.e., "(EOF)) it should report Error as "EOF in string constant". As it cannot be handled in the STR_MODE I declared it individually.
3. If the comment contain EOF at start(i.e., (*(EOF)) it should report Error as "EOF in comment". As it cannot be handled in the COMMENT_MODE I declared it individually.

#### --------------------------  OPERATORS RULES  ---------------------------- ####
The operators are identified simply by assigning each operator to their respective tokens
```
Eg :   LE       :   '<=' ;
       LPAREN   :   '('  ;
```
If there is only one character as the operator(Eg : LPAREN) the ANTLR displays it as the character instead of token name(do not worry of that).

#### --------------------------  KEYWORDS RULES  ----------------------------- ####
Other than 'true' and 'false' all keywords are ___case insensitive___.\
I declared a fragment for each alphabet matching both lowercase and uppercase. Then I assigned each keyword to match their letters according to fragments.
```
Eg :    fragment I  :   [iI]    ;
        fragment F  :   [fF]    ;
        IF          :   I F     ;
```
The first letter in the keywords 'true' and 'false' are ___case sensitive___.\
I simply declared fragment with first letter as lowercase and remaining letters as alphabet fragments.
```
Eg  :   fragment TRUE  :   't' R U E ;
```
> __Note:__ 
> 1. As fragments will never be counted as a token, there is no need to worry that the analyser would token it wrongly.
> 2. Space must be maintained between aplhabet fragment elements else the ANTLR understands it as a new fragment.

#### --------------------------  BOOL_CONST RULES  ----------------------------- ####
These are simply to be matched with TRUE or FALSE fragments.
```
BOOL_CONST  :   TRUE    |   FALSE   ;
```
As there is a chance for these BOOL_CONST to have same length as an Identifier, these should be present in higher order(declared before identifier).

#### --------------------------  INT_CONST RULES  ----------------------------- ####
As these are simple digit(0-9) strings, this can be defined as
```
INT_CONST   :   [0-9]+  ;
```

#### --------------------------  IDENTIFIER RULES  ----------------------------- ####
Identifiers are simple strings of lowercase, uppercase letters and underscore character.

As __Type Identifiers__ must start with uppercase letter, we first check for uppercase letter and then proceed for other optional letters
```
TYPE_ID     :   [A-Z][a-zA-Z0-9_]*;
```

As __Object Identifiers__ must start with lowercase letter, we first check for lowercase letter and then proceed for other optional letters
```
OBJECT_ID     :   [a-z][a-zA-Z0-9_]*;
```

#### --------------------------  WHITESPACE AND INVALID CHARACTER RULES  ----------------------------- ####
__White space__ consists of any sequence of the characters: blank(' '), newline('\n'), formfeed('\f'), carriage return('\r'), tab('\t'), vertical tab('\v').

But the '\v' character cannot be recognised by ANTLR. So I have used unicode character of '\u000b'.\
We just have to ignore this white space. So if these characters are found we skip this using skip lexer command.
```
WS      :   [ \n\t\r\f'\u000b']+  ->  skip;
```
When a character doesn't match with any of the defined tokens we match it with __INVALID_CHARACTER__ token using the dot operator(matches any character other than newline) in lexical analysis and include an action which performs invalidCharacter() function.
```
INVALID_CHARACTER   :   .   {invalidCharacter();}   ;
```
#### invalidCharacter(): ####
In this function we get the token using factory create method and report error with a string that is obtained from getText() method of token class. This string contains the single unmatched character.

>__Note:__ sometimes the white space and these characters may be included in other token. we shouldn't skip or report error there. Even though the longest match rule tokenise it as other token it's safer to write this rules near the end of the all rules.

#### --------------------------  COMMENT RULES  ----------------------------- ####
__Line comments__ should start with '--' and end when a newline or EOF is encountered.\
When an '--' is encountered, as we have to ignore these comments we use skip command and skip the characters until a newline character or an EOF appears.
```
LINE_COMMENT    :   '--' ~[\n]* -> skip ;
```

__Block comments__ start with '(\*'. When this is scanned we skip it and enter into COMMENT_MODE using pushMode() command.

_COMMENT_MODE:_ 
1. If the nested comment contain EOF at the starting(i.e., (*(*(EOF)) it should report Error as "EOF in comment". 
2. If the nested comment is not started with EOF then goto NESTED_COMMENT_MODE.
3. If the comment is ended simply pop the mode. 
4. If the comment contains EOF report Error.
5. Skip the body of the comment.
   
_NESTED_COMMENT_MODE:_  
It has all the tokens same as COMMENT_MODE with an additional token that can handle if the nested comment end with an EOF.
It can be identified with below token.
```
NESTED_COMMENT_END_EOF	: '*)'(EOF) {reportError("EOF in comment");};				
```

#### --------------------------  STR_CONST RULES  ----------------------------- ####
When a doublequote('"') is encountered we just skip it and enter STR_MODE using pushMode() command.

_STR_MODE:_
1. The string body cannot contain an unescaped newline, doublequotes, EOF. So we use a negation for these characters(it is necessary because the analysis will be based on longest match). There is no need to include EOF in the negation as the string ends when EOF encounters.
2. The string can contain any escaped characters(like escaped newline('\\\\\n') and escaped doublequotes('\\\\\\"')), for doing this I have included the backslash in the negation part and backslash+next character included expicitly. So that it includes all the escaped characters as evaluation is done using longest match.
3. When a doublequotes or unescaped newline or EOF is encounter we process the string using processString() function.

After a number of tests done with the original coolc compiler I have noticed the following results :
1. For an unterminated long string/long string containing EOF the ERROR is reported as "String constant too long" instead of "Unterminated string constant"/"EOF in string constant".
2. For an unterminated string/string containing EOF and containing null/escaped null character the ERROR is reported as "String contains null/escaped null character" instead of "Unterminated string constant"/"EOF in string constant".
3. For a long string containing null/escaped null character the ERROR is reported as "String contains null/escaped null character" instead of "String constant too long".

From these results I have came to a conclusion that STR_CONST is reporting it's first encountered error. I was intended to have the same functionality as of original coolc compiler. But when multiple ERRORS occured, i have identified that the last error is rewriting the before ERROR. So to report the first encountered error I have exited the processString() function(after reporting ERROR) using return. 

#### ProcessString(): ####
In this function we get the token using factory create method and report error with a string that is obtained from getText() method of token class.\
Consider a String buffer object(as operations on String buffer objects are very simple) to store the final resulting string.\
Consider a variable to check whether the last character is escaped or not.
```
loop until text.length()-1:
    if the character is a null
        report error as null character and return
    else if the character is a backslash(escape character handling)
        if the next character is n/b/t/f 
            append respective control charcter to the buffer string.
        if the next character is null character 
            report error as escaped null character and return.
        if the next character is just a normal character
            if the index is the length()-2
                change value of unesc 
            append this to the buffer string.
        increase index by one 
    else the character is a normal character
        append this to buffer string.

    if buffer string length is more than 1024 characters
        if the next character is null
            report error as null character
        else if the next character is escaped null
            report error as escaped null character
        else
            report error as long string
        return
```
After completion of this traversing consider the last character of string:
```
if it is a doublequotes(read as '\"') and not escaped(unesc==true)
    set type to STR_CONST
    convert bufferstring to string using toString() function
    set text to this converted string and return.
if it is an newline(read as '\n') and not escaped(unesc==true)
    report error as unterminated string constant and return.
else it would be an EOF 
    if before character is backslash and not escaped(unesc==true)
        report error as backslash in end of file
    else 
        report error as EOF in string and return.
```
By using return after reporting each error we can ensure that the errors are not rewritten and the first encountered error is reported.

## TEST CASES: ## 
1. I have written the testcases to identify all tokens.
2. For each token I have considered different posibilities to be recognised as another token.
3. My testcases has reported all the possible ERRORS that can be encountered.
4. I have done many test cases on strings to ensure all the possible combination of errors.
5. In case of Multiple Erros in strings I included almost all combination of errors in the test cases.
6. I have compared my errors in testfiles with the lex and parse errors generated by coolc compiler.
7. In the test cases I have also tested by including some unicode characters(like null character, zero width space) using an extension in VSCode.
8. I have included many test cases for checking the multiple escapes and unescapes for the unterminated string constant. 
9. After seeing the results I can confirm that my grammer is correct and my testfiles are adequate in recognising all possible tokens and errors.