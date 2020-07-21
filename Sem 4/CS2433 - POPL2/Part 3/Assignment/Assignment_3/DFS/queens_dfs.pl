% N Queens Problem
% run main predicate
% N is declared in the main, change it for which value you want
% Output will be seen in Queens_DFS.txt
% 
% Strategy:
% The columns are chosen iteratively from available columns held in a
% list, reduced with each allocation, so we need never check verticals.
% For diagonals, we check prior to allocation whether each newly placed
% queen will clash with any of the prior placements. This prevents
% most invalid permutations from ever being attempted.
% Depth First Search (DFS) algorithm traverses a graph in a depthward motion 
% and uses a stack to remember to get the next vertex to start a search when 
% a dead end occurs in any iteration.
% As prolog is based on the same backtracking logic we have no need to maintain stack explicitly

% member function
member(X,[X|_]).
member(X,[_|R]) :- member(X,R).

% takeout function
takeout(X,[X|R],R).
takeout(X,[F|R],[F|S]) :- takeout(X,R,S).

% to create a list from 1 to N([1...N])    
makeList(0,FinalList,FinalList):- !.
makeList(N,TempList,FinalList):-
    Y is N-1,
    makeList(Y,[N|TempList],FinalList).

% to check all the elements in the list are different
all_different(L) :- \+ (append(_,[X|R],L), memberchk(X,R)).

% to find sum and differences in the positions
combine([],[],[]).
combine([X/Y|P],[S1|S],[D1|D]):-
    S1 is X+Y,
    D1 is X-Y,
    combine(P,S,D).

% to check whether present configuration is safe or not
isSafe([]).                                                 % empty list is always safe
isSafe(P):-                                                       
    combine(P,Sum,Diff),                                    % find the sum and differences of the present queen poeitions
    all_different(Sum),                                     % check if there are no (/) diagonal elements
    all_different(Diff).                                    % check if there are no (\) diagonal elements

% dfs implementation
dfs([],[],FinalList,FinalList).                             % if all the positions are completed return the final configuration
dfs([A|B],C,TempList,FinalList):-
    member(X, C),                                           % consider a column from available columns(C)
    isSafe([A/X|TempList]),                                 % if it is safe to put queen in A roe and X column then it proceeds further else it backtracks
    append(TempList,[A/X],AddedList),                       % add position A row and X coloumn to the list
    takeout(X,C,D),                                         % remove position X from the available column list
    dfs(B,D,AddedList,FinalList).                           % proceed with remaining available rows

% main function
main :-
    N is 8,                                                 % change this variable if you want to change the N value
    makeList(N,[],List),                                    % making a list from 1 to N([1...N])
    open('Queens_DFS.txt',write, Stream),                   % creating a file Queens_DFS.txt and assigning it a Stream
    (   dfs(List,List,[],X),                                % performing dfs with all rows and columns are available
        writeln(Stream, X), fail                            % printing output to the Stream
    ;   true                                                % if all solutions are completed
    ),
    close(Stream).                                          % close the file using stream