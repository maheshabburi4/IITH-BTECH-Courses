lexer grammar CoolLexer;

tokens{
	ERROR,
	TYPEID,
	OBJECTID,
	BOOL_CONST,
	INT_CONST,
	STR_CONST,
	LPAREN,
	RPAREN,
	COLON,
	ATSYM,
	SEMICOLON,
	COMMA,
	PLUS,
	MINUS,
	STAR,
	SLASH,
	TILDE,
	LT,
	EQUALS,
	LBRACE,
	RBRACE,
	DOT,
	DARROW,
	LE,
	ASSIGN,
	CLASS,
	ELSE,
	FI,
	IF,
	IN,
	INHERITS,
	LET,
	LOOP,
	POOL,
	THEN,
	WHILE,
	CASE,
	ESAC,
	OF,
	NEW,
	ISVOID,
	NOT
}

/*
  DO NOT EDIT CODE ABOVE THIS LINE
*/

@members{

	/*
		YOU CAN ADD YOUR MEMBER VARIABLES AND METHODS HERE
	*/
	// function for checking invalid character
	public void invalidCharacter() {
		Token t = _factory.create(_tokenFactorySourcePair, _type, _text, _channel, _tokenStartCharIndex, getCharIndex()-1, _tokenStartLine, _tokenStartCharPositionInLine);
		String text = t.getText();

		// has to report error as string containing that character
		reportError(text);
	}

	/**
	* Function to report errors.
	* Use this function whenever your lexer encounters any erroneous input
	* DO NOT EDIT THIS FUNCTION
	*/
	public void reportError(String errorString){
		setText(errorString);
		setType(ERROR);
	}

	public void processString(){
		Token t = _factory.create(_tokenFactorySourcePair, _type, _text, _channel, _tokenStartCharIndex, getCharIndex()-1, _tokenStartLine, _tokenStartCharPositionInLine);
		String text = t.getText();

		//write your code to test strings here
		
		//declaring a string buffer to store the final characters
		//operations on stringbuffer objects are very simple
		StringBuffer buff_text = new StringBuffer();
		
		//variable to check last character is escaped or not.
		boolean unesc = true;

		// processing string
		for(int index = 0; index < text.length()-1;index++){
			// for null character
			if(text.charAt(index) == '\0'){
				reportError("String contains null character");
				return ;
			}
			// for escape characters in the strings
			else if(text.charAt(index) == '\\'){
				// for n,b,t,f we append with their escaped ascii value 
				if (text.charAt(index+1) == 'n'){
					buff_text.append('\n');
				}
				else if (text.charAt(index+1) == 'b'){
					buff_text.append('\b');
				}
				else if (text.charAt(index+1) == 't'){
					buff_text.append('\t');
				}
				else if (text.charAt(index+1) == 'f'){
					buff_text.append('\f');
				}
				// for escaped null character
				else if (text.charAt(index+1) == '\0'){			
					reportError("String contains escaped null character");
					return ;
				}
				else{
					// if the last character is escaped
					if(index == text.length()-2)
						unesc = false;
					//appending the character next to it
					buff_text.append(text.charAt(index+1));
				}
				// to skip the read of character next to it.
				// it helps in recognising escaped backslashes('\\\\')
				// and escaped doublequotes('\\\"')
				index++;
			}
			else{
				// just append the character to the buffer
				buff_text.append(text.charAt(index));
			}

			// if the string is too long
			if(buff_text.length()>1024){
				// exceptions shown by coolc compiler
				if(text.charAt(index+1)=='\0')
					reportError("String contains null character");
				else if (text.charAt(index+1)=='\\' && text.charAt(index+2)=='\0')
					reportError("String contains escaped null character");
				else
					reportError("String constant too long");
				return;
			}
		}

		// if terminated properly
		if(text.charAt(text.length()-1)=='\"' && unesc){
			setText(buff_text.toString());
			setType(STR_CONST);
			return;
		}
		// if unescaped newline occurs
		else if(text.charAt(text.length()-1)=='\n' && unesc){
			reportError("Unterminated string constant");
			return;
		}
		// if terminated with EOF
		else{
			//exception shown by coolc compiler
			if(text.charAt(text.length()-1)=='\\' && unesc)
				reportError("backslash at end of file");
			else 
			 	reportError("EOF in string constant");
			return;
		}
	}
}

/*
	WRITE ALL LEXER RULES BELOW
*/

// Possible ERRORS
UNMATCHED			: '*)' {reportError("Unmatched *)");};
EOF_STR				: '"'(EOF){reportError("EOF in string constant");};
EOF_COMMENT_START 	: '(*'(EOF){reportError("EOF in comment");};

// Operators
DARROW      : '=>';
LPAREN		: '(';
RPAREN		: ')';
COLON		: ':';
ATSYM		: '@';
SEMICOLON   : ';';
COMMA		: ',';
PLUS		: '+';
MINUS		: '-';
STAR		: '*';
SLASH		: '/';
TILDE		: '~';
ASSIGN		: '<-';
EQUALS		: '=';
LBRACE		: '{';
RBRACE		: '}';
LT			: '<';
LE			: '<=';
DOT			: '.';

//Fragments for case insensitive alphabets
fragment A : [aA]; // match either an 'a' or 'A'
fragment B : [bB];
fragment C : [cC];
fragment D : [dD];
fragment E : [eE];
fragment F : [fF];
fragment G : [gG];
fragment H : [hH];
fragment I : [iI];
fragment J : [jJ];
fragment K : [kK];
fragment L : [lL];
fragment M : [mM];
fragment N : [nN];
fragment O : [oO];
fragment P : [pP];
fragment Q : [qQ];
fragment R : [rR];
fragment S : [sS];
fragment T : [tT];
fragment U : [uU];
fragment V : [vV];
fragment W : [wW];
fragment X : [xX];
fragment Y : [yY];
fragment Z : [zZ];

// Keywords
CLASS		: C L A S S;
ELSE 		: E L S E;
FI			: F I;
IF			: I F;
IN			: I N;
INHERITS	: I N H E R I T S;
LET			: L E T;
LOOP		: L O O P;
POOL		: P O O L;
THEN		: T H E N;
WHILE		: W H I L E;
CASE		: C A S E;
ESAC		: E S A C;
OF			: O F;
NEW			: N E W;
ISVOID		: I S V O I D;
NOT			: N O T;
fragment TRUE 	: 't' R U E;
fragment FALSE	: 'f' A L S E;

// Constants
BOOL_CONST	: TRUE | FALSE;
INT_CONST	: [0-9]+;
STR_CONST	: '"' -> skip, pushMode(STR_MODE);

// Identifiers
TYPEID		: [A-Z][A-Za-z0-9_]*;
OBJECTID	: [a-z][A-Za-z0-9_]*;

// Comments
LINE_COMMENT
	: '--' ~[\n]* -> skip
	;
BLOCK_COMMENT
	: '(*' -> skip, pushMode(COMMENT_MODE)
	;

//Whitespace
WS			: ([ \t\n\r\f] | '\u000b')+ -> skip;

//Invalid Characters
INCORRECT_CHARACTERS	: . {invalidCharacter();};

// String mode
mode STR_MODE;
STR_END			: '"' {processString();} -> popMode;
STR_EOF			: (EOF|'\\'EOF) {processString();} -> mode(DEFAULT_MODE);
STR_NEWLINE		: '\n'{processString();} -> mode(DEFAULT_MODE);
STR_BODY		: ( ~( '\n' | '"' | '\\' ) | ('\\'). )+ -> more;

// Comment mode
mode COMMENT_MODE;
NESTED_EOF_COMMENT_START 			: '(*'(EOF){reportError("EOF in comment");};
NESTED_COMMENT_START				: '(*' -> skip, pushMode(NESTED_COMMENT_MODE);
COMMENT_END							: '*)' -> skip, popMode;
COMMENT_EOF							: .(EOF){reportError("EOF in comment");};
COMMENT_BODY						: .	-> skip;

// mode to check EOF in nested comments
mode NESTED_COMMENT_MODE;
ANOTHER_NESTED_EOF_COMMENT_START 	: '(*'(EOF){reportError("EOF in comment");};
ANOTHER_NESTED_COMMENT_START		: '(*' -> skip, pushMode(NESTED_COMMENT_MODE);
NESTED_COMMENT_END_EOF				: '*)'(EOF) {reportError("EOF in comment");};				
NESTED_COMMENT_END					: '*)' -> skip, popMode;
NESTED_COMMENT_EOF					: .(EOF){reportError("EOF in comment");};
NESTED_COMMENT_BODY					: .	-> skip;