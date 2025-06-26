female(sita).
sister(sita,geetha).
parent(geetha,mohan).
sister(geetha, sita).
sister_both(X, Y) :- sister(X, Y).
sister_both(X, Y) :- sister(Y, X).

aunt(X, Y) :- female(X), sister_both(X, Z), parent(Z, Y).
