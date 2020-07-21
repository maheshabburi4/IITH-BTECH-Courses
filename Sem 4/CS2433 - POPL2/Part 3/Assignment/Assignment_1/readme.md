## Compiling the Program
1. In terminal enter into Assignment_ 1 directory using ```$cd``` command
2. Enter into swipl mode using  ```$swipl``` command.
3. Load the file ```map_colouring.pl``` using ```?- ['map_colouring.pl'].```
   
## Running the Program
1. Before running the program first enter your map to ```input_map.pl``` in the format specified in the file.
2. provide the map name as an argument to the main predicate and run using ```?- main('Australia').```
```
edith@edith-G7-7588:~$ cd Desktop
edith@edith-G7-7588:~/Desktop$ cd Assignment_1/
edith@edith-G7-7588:~/Desktop/Assignment_1$ swipl
Welcome to SWI-Prolog (threaded, 64 bits, version 8.2.0)
SWI-Prolog comes with ABSOLUTELY NO WARRANTY. This is free software.
Please run ?- license. for legal details.

For online help and background, visit https://www.swi-prolog.org
For built-in help, use ?- help(Topic). or ?- apropos(Word).

?- ['map_colouring.pl'].
true.

?- main('Australia').
true.

?- 
```

## Input Details
1. The map must be give nto the input_map.pl which is submitted along with this file.
```
map('Australia',
	[wa: [nt,sa], nt: [wa,sa,qld], qld:[nt,sa,nsw],
	nsw: [qld,sa,vic], vic: [sa,nsw], tas:[], 
	sa: [wa,nt,qld,nsw,vic]]).
```

## Output Details
1. The Output will be seen in ```ColoredMap.txt```
```
[wa:red,nt:green,qld:red,nsw:green,vic:red,tas:red,sa:blue]
[wa:red,nt:green,qld:red,nsw:green,vic:red,tas:red,sa:purple]
[wa:red,nt:green,qld:red,nsw:green,vic:red,tas:green,sa:blue]
[wa:red,nt:green,qld:red,nsw:green,vic:red,tas:green,sa:purple]
[wa:red,nt:green,qld:red,nsw:green,vic:red,tas:blue,sa:blue]
[wa:red,nt:green,qld:red,nsw:green,vic:red,tas:blue,sa:purple]
[wa:red,nt:green,qld:red,nsw:green,vic:red,tas:purple,sa:blue]
[wa:red,nt:green,qld:red,nsw:green,vic:red,tas:purple,sa:purple]
[wa:red,nt:green,qld:red,nsw:green,vic:blue,tas:red,sa:purple]
```