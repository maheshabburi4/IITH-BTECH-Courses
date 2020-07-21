## Compiling the Program
1. In terminal enter into Assignment_ 3/DFS directory using ```$cd``` command
2. Enter into swipl mode using  ```$swipl``` command.
3. Load the file ```queens_dfs.pl``` using ```?- ['queens_dfs.pl'].```
   
## Running the Program
1. run the main predicate using ```?- main.```
```
edith@edith-G7-7588:~$ cd Desktop/
edith@edith-G7-7588:~/Desktop$ cd Assignment_3/
edith@edith-G7-7588:~/Desktop/Assignment_3$ cd DFS/
edith@edith-G7-7588:~/Desktop/Assignment_3/DFS$ swipl
Welcome to SWI-Prolog (threaded, 64 bits, version 8.2.0)
SWI-Prolog comes with ABSOLUTELY NO WARRANTY. This is free software.
Please run ?- license. for legal details.

For online help and background, visit https://www.swi-prolog.org
For built-in help, use ?- help(Topic). or ?- apropos(Word).

?- ['queens_dfs.pl'].
true.

?- main.
true.

?- 

```
## Input Details 
1. You can change the value of N in the main predicate.

## Ouput Details
1. Output will be printed in ```Queens_DFS.txt```.
```
[1/1,2/5,3/8,4/6,5/3,6/7,7/2,8/4]
[1/1,2/6,3/8,4/3,5/7,6/4,7/2,8/5]
[1/1,2/7,3/4,4/6,5/8,6/2,7/5,8/3]
[1/1,2/7,3/5,4/8,5/2,6/4,7/6,8/3]
[1/2,2/4,3/6,4/8,5/3,6/1,7/7,8/5]
[1/2,2/5,3/7,4/1,5/3,6/8,7/6,8/4]
[1/2,2/5,3/7,4/4,5/1,6/8,7/6,8/3]
```