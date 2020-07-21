% Map Coloring Problem
% Loads the maps present in the input_map.pl
% Performs main function passed with required map to be coloured
% Output is written on ColouredMap.txt
%
% Strategy:
% Traverse through
% For each state in the map, consider a color from colours List in input.pl 
% Checks whether it's safe to assign this color to the state
% it is safe when no neighbour of the considered state has same color
% if it is safe apply this colour to the state and proceed to next state in the map
% else consider next color in the color list


% predicates to be declared which will be read from input_map.pl
:- dynamic map/2.
:- dynamic colors/1.

% member function
% true if X is present in the list
% false if X is not present in the list
member(X,[X|_]).
member(X,[_|R]) :- member(X,R).

% color function
% find the colour of X in the list coloured till now
color(X,[X:Color|_],Color):- !,false.                       % if X's color is same as Color, exit backtracking and return false.
color(_,[],_).                                              % if X is not painted till now, return true.
color(X,[_:_|Z],Color):-                                    % if the head of list is not X
    color(X,Z,Color).                                       % process tail of list

% safe function
% checks whether if it is safe to assign Color to StateName
% true if safe
% false if not safe
isSafe(_,[],_,_).                                           % if there are no neighbours left
isSafe(StateName,[X|Y],Color,PresentColored):-
    (color(X,PresentColored,Color) ->                       % if X is not painted till now or color of X is different with Color 
        (isSafe(StateName,Y,Color,PresentColored)) ;        % check the next neighbour
            (!,false)                                       % else exit backtracking and return false
    ).
    
% paint function
% takes in the Map to be coloured and outputs the colored map
paint([],_,ColoredMap,ColoredMap).                          % if all the map is painted return the final map
paint([X:Y|Z],ColorNames,TempList,ColoredMap):-
    member(Color,ColorNames),                               % consider a color from colorset
    (isSafe(X,Y,Color,TempList) ->                          % if it is safe to assign Color to X
        (   append(TempList,[X:Color],AnotherList),         % append the configuration to a temporary list
            paint(Z,ColorNames,AnotherList,ColoredMap)      % paint next state
        ) ;
            (false)                                         % if it is not safe will backtrack and consider another possibility
    ).

% main function
% pass the name of the map to be colored present in the input_map.pl
main(MapName) :-
    ['input_map'],                                          % load input_map.pl
    map(MapName,Map),                                       % consider the required map defined in input_map.pl
    colors(ColorNames),                                     % consider the color's list defined in input_map.pl
    open('ColoredMap.txt',write, Stream),                   % create a file with name Colored map.txt and assign it a Stream
    (   paint(Map,ColorNames,[],ColoredMap),                % paint the required map
        writeln(Stream, ColoredMap), fail                   % print the map to the Stream. repeat until all solutions are printed
    ;   true                                                % exit when all solutions areprinted
    ),
    close(Stream).                                      % close the file using Stream assigned to it