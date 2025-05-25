parent(john, mary).
parent(mary, tom).

% Define a predicate grandparent(X, Y) that is true if X is a grandparent of Y.
%John is grandparent, mary is parent, tom is son.
grandparent(X,Y):- parent(X,Z),parent(Z,Y).



connected(a, b).
connected(b, c).
connected(d, e).
connected(e, f).

%Define a predicate path(X, Y) that is true if there is a path between X and Y (directly or indirectly).
path(X,Y):- connected(X,Y);connected(X,Z),connected(Z,Y).


likes(john, books).
likes(mary, music).
likes(john, mary).

%Define a predicate common_interest(X, Y) that is true if X and Y like at least one common thing.