#ifndef TASK3_FUNCTIONS_H
#define TASK3_FUNCTIONS_H

/**
 * recursion function finding factorial of n number
 * I used unsigned int as type of function because results are only positive so the range is bigger
 * if n is equal to 0 or 1 function returns 1, else it computes factorial by using previous factorial - (n-1)!
 * @param n
 * @return factorial of number n
 */
unsigned long long int factorial(int n);

/**
 * recursion function finding value of n - element of fibonacci sequence
 * I used unsigned int as type of function because results are only positive so the range is bigger
 * if n is equal to 0 function returns 0
 * if n is equal to 1 function returns 1
 * else function computes value of n - element of fibonacci sequence
 * @param n
 * @return fibonacci value of n element of sequence
 */
unsigned long long int fibonacci(int n);

void findMaximum(int n);

#endif //TASK3_FUNCTIONS_H
