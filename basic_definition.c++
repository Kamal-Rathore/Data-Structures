// data structure is the way to manage the data in the efficient mannner.
// algorithms is the way to the step by step procedure of solving the problems

// asympotic notations-> Asymptotic notation gives us an idea about how good a given algorithm is compared to some other algorithm

// Big oh-> a function is said to be the O(g(n)) iff there exits a constant c and n(input data) such that
// 0 ≤ f(n) ≤ c g(n)        for all n ≥ n°. where g(n) is the complexity function and it gives the upper bound notation

// Big omega-> a function is said to be the O(g(n)) iff there exits a constant c and n(input data) such that
// 0 ≤ c g(n) ≤ f(n)        for all n ≥ n°. it gives the lower bound notation

// big theta->a function is said to be the theta(g(n)) iff there exits a constant c and n(input data) such that
//  0  ≤ c2 g(n)  ≤  f(n) ≤ c1 g(n)      ∀    n ≥ no.  

//Big theta provides a better picture of a given algorithm's run time and Big theta, is already a Big oh and a Big omega. 

// better ------> worse
// 1 > logn > n > nlogn > n^2 > n^3 > 2^x > n^x

/*
time complexity
suppose an array [1,5,7,9,14]
so the it find the element which is not in the array like a = 26 so time complexity is 0.

best case is like it finds that element which is first in the array like a=1 so time complexity is
O(1). because it done only one iteration

worst case is that suppose it finds an element which is last in the array so TC is nk .(k is const and n is the number of iterations)
 avergae case is (sum of all runtimes/ no. of runtimes) 

 space complxity:- if a function calls recursive;y for the n times then its space complexity is O(n). 

 why we cant measure the space complexity in the seconds?
 -> becauuse every computer is not powerful if in your pc it runs in 2 sec and in the someone else it runs in 5 sec.
 that's why asymptotic notatations measure how the time grows with the input.
  
 */


