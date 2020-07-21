## Compiling the Program
1. In terminal enter into Assignment_ 2 directory using ```$cd``` command
2. Enter into swipl mode using  ```$swipl``` command.
3. Load the file ```language_processing.pl``` using ```?- ['language_prossesing.pl'].```
   
## Running the Program
1. run the main predicate using ```?- main.```

## Input Details
1. Enter facts and querys in the format given below.
2. Ensure a blank space before full stop.
3. Press ```Ctrl + Z``` to exit the program

## Output Details
1. If the fact was already proved before it will report with ```Already related in knowledge base.```
2. If the fact is not proved before it will output as ```Added Fact to knowledge.```
3. If the query is true it prints ```Yes``` else it prints ```No```.
```
edith@edith-G7-7588:~$ cd Desktop/
edith@edith-G7-7588:~/Desktop$ cd Assignment_2/
edith@edith-G7-7588:~/Desktop/Assignment_2$ swipl
Welcome to SWI-Prolog (threaded, 64 bits, version 8.2.0)
SWI-Prolog comes with ABSOLUTELY NO WARRANTY. This is free software.
Please run ?- license. for legal details.

For online help and background, visit https://www.swi-prolog.org
For built-in help, use ?- help(Topic). or ?- apropos(Word).

?- ['language_processing.pl'].
true.

?- main.
|: George is a man .
Added Fact to knowledge.
|: A man is a person .
Added Fact to knowledge.
|: Is George a person ?
Yes
|: Is person a man ?
No
|: George is a person .
Already related in knowledge base.
|: 
[1]+  Stopped                 swipl
edith@edith-G7-7588:~/Desktop/Assignment_2$
```