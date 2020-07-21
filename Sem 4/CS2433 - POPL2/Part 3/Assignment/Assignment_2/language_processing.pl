% run main function and enter facts and queries.
% Answer will be given Accordingly
% Press ctrl+Z to exit the program
%
% Strategy:
% read the entered line and convert it to string using read_line_to_string predicate
% divide the string into words considering spaces using atomic_list_concat.
% use phrase predicate and process the string and find X,Y
% handle the given string with handle function
% related predicate returns true if X is somehow related to Y
% If a fact X is related to Y is given and if they are already related before, 
% I just report they are already related instead of adding them to the knowledge base
% 
% Note: please maintain a space between last word and fullstop/question mark while entering a string
% Eg : George is a person .
%      Is George a person ?


:- dynamic isa/2.

% function to find whether X,Y are related or not
related(X,X).                                                               % every element is related to it's self
related(X,Y):-                                                              % if there is a direct relation between X,Y
    isa(X,Y).
related(X,Y):-                                                              % if X is not realated to Y but
    isa(X,Z),                                                               % is direct related to Z
    related(Z,Y).                                                           % and Z is related to Y

% function to check the entered sentence
handle(fact(X)) :-                                                          % if entered string is a fact
    X = isa(Y,Z),                                                           % find Y,Z from the fact
    (related(Y,Z) -> write('Already related in knowledge base.'), nl;        % if Y,Z are already related
                    assertz(X), write('Added Fact to knowledge.'), nl        % else assert(enter) that Y,Z are related to the knowledge base
    ). 
handle(query(X)) :-                                                         % if entered string is a query
    X = isa(Y,Z),                                                           % find Y,Z from the fact
    (related(Y,Z) -> write('Yes'), nl;                                      % if Y,Z are related print Yes
                     write('No'), nl                                        % else print no
    ).

% Defining Grammar
% if Y is a consonant
s(fact(isa(X,Y))) --> [X, is, a, Y, '.'].
s(fact(isa(X,Y))) --> ['A', X, is, a, Y, '.'].
s(query(isa(X,Y))) --> ['Is', X, a, Y, '?'].
% if Y is a vowel
s(fact(isa(X,Y))) --> [X, is, an, Y, '.'].
s(fact(isa(X,Y))) --> ['A', X, is, an, Y, '.'].
s(query(isa(X,Y))) --> ['Is', X, an, Y, '?'].
% if X is vowel and Y is consonant
s(fact(isa(X,Y))) --> ['An', X, is, a, Y, '.'].
% if X & Y are a vowel
s(fact(isa(X,Y))) --> ['An', X, is, an, Y, '.'].

% main function
main :-
    repeat,                                                                 % for multiple queries
    read_line_to_string(user_input,X),                                      % take input as a string
    (   atomic_list_concat(P, ' ', X),                                      % divide string with respect to spaces
        phrase(s(Z),P),                                                     % check the string with it's format
        handle(Z),                                                          % handle the string
        fail                                                                % repeat continously
    ). 