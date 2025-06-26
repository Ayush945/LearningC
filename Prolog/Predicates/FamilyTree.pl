% parent(Parent, Child)
parent(john, mary).
parent(john, tom).
parent(susan, mary).
parent(susan, tom).


female(susan).
female(mary).
female(alice).

parent(mary, alice).
parent(mary, bob).
parent(michael, alice).
parent(michael, bob).

male(john).
male(michael).
male(tom).
male(tom).

sibling(X,Y):- parent(Z,X),parent(Z,Y).

grandParent(X,Y):- parent(X,Z), parent(Z,Y).

father(X,Y):-male(X), parent(X,Y).

mother(X,Y):-female(X), parent(X,Y).