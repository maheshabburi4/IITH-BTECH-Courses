% N Queens Problem
% run main predicate
% N is declared in the main, change it for which value you want
% Output will be seen in Queens_BFS.txt
% 
% Strategy:
% Breadth First Search (BFS) algorithm traverses a graph in a breadthward motion 
% and uses a queue to remember to get the next vertex to start a search when a dead end occurs in any iteration.
% make a Queue for each queen with 1st row and Xth column as possiblity.
% proceed to next position and pop these positions to their respective queues until a nonsafer point is found.
% Now proceed to the next prossiblity present in the Queue

% member function
member(X,[X|_]).
member(X,[_|R]) :- member(X,R).

% to create a list from 1 to N([1...N])    
makeList(0,FinalList,FinalList):- !.
makeList(N,TempList,FinalList):-
    Y is N-1,
    makeList(Y,[N|TempList],FinalList).

% to check all the elements in the list are different
all_different(L) :- \+ (append(_,[X|R],L), memberchk(X,R)).

% make a list fot starting from first position each time.
% the list will be of form [[1/1],[1/2],[1/3],[1/4].....[1/N]]
makeListWithPosition(0,FinalList,FinalList):- !.
makeListWithPosition(N,TempList,FinalList):-
    Y is N-1,
    makeListWithPosition(Y,[[1/N]|TempList],FinalList).

% will return sum and differences in the positions
combine([],[],[]).
combine([X/Y|P],[S1|S],[D1|D]):-
    S1 is X+Y,
    D1 is X-Y,
    combine(P,S,D).

% generate the Queue for the possible Positions
generate(_,A,A,[],_).
generate(F,A,O,[B|C],M):-
    append(F,[M/B],X),
    (isSafe(X) ->
        generate(F,[X|A],O,C,M);
        generate(F,A,O,C,M)
    ).

% check whether the possibilty is safe or not
isSafe(P):-
    columnCheck(P,[]),                                          % column check is also requires as we are not iterating in a sequence as in dfs               
    combine(P, S, D),                                           % find the sum and differences of the present queen poeitions
    all_different(S),                                           % check if there are no (/) diagonal elements
    all_different(D).                                           % check if there are no (\) diagonal elements

% column check 
% check if all the queens are in differnet columns
columnCheck([],C):-
    all_different(C).
columnCheck([_/Y|R],C):-
    columnCheck(R,[Y|C]).

bfs([],P,N):-
    makeListWithPosition(N,[],Q),                               % create Queue with starting row positions
    bfs(Q,P,N).                                                 % apply bfs starting with created Queue
bfs([F|C],P,N):-
    length(F, L),                                               % find the length of first queue 
    (L \= N ->                                                  % if length is not equal to N
        (   succ(L,M),                                          % consider the next queen
            makeList(N,[],O),                                   % make a list of available positions([1...N])
            generate(F,[],K,O,M),                               % generate Queue K
            append(C,K,Y),                                      % append C to K
            bfs(Y,P,N)                                          % bfs for the new Queue 
        );
        member(P, [F|C])                                        % if all the possibilities are considered return if P is a mem of Queue are not
    ).  

main:-
    N is 8,                                                     % change this variable if you want to change the N value
    open('Queens_BFS.txt',write, Stream),                       % creating a file Queens_DFS.txt and assigning it a Stream
    (   bfs([],P,N),                                            % performing bfs function with empty queue
        writeln(Stream, P), fail                                % writing each possibility to Stream
    ;   true                                                    % if all solutions are completed
    ),
    close(Stream).                                              % close the file using stream   