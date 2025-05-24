instructor(chan, math273).
enrolled(kevin, math273).
teaches(P, S) :- instructor(P, C), enrolled(S, C).
