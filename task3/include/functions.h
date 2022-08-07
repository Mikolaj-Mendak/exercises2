#ifndef TASK3_FUNCTIONS_H
#define TASK3_FUNCTIONS_H
#include<iostream>

/**
 * recursion function finding factorial of n number
 * I used unsigned int as type of function because results are only positive so the range is bigger
 * if n is equal to 0 or 1 function returns 1, else it computes factorial by using previous factorial - (n-1)!
 * @param n
 * @return factorial of number n
 */
unsigned long long factorial(int n);

/**
 * recursion function finding value of n - element of fibonacci sequence
 * I used unsigned int as type of function because results are only positive so the range is bigger
 * if n is equal to 0 function returns 0
 * if n is equal to 1 function returns 1
 * else function computes value of n - element of fibonacci sequence
 * @param n
 * @return fibonacci value of n element of sequence
 */
unsigned long long fibonacci(int n);

/**
 * I used while loop to find fibonacci sequence for given range
 * I start to calculate sequence for zero element but only values in given range will be printed
 * loop is stopped when we went out of the range
 * @param start - the beggining of our range of ints values
 * @param stop - the end of our range of ints values
 * @param iterStart - the first element for which program will calculate sequence value
 */
void calculateFibonacci(int start, int stop, int iterStart = 0);

/**
 * I used while loop to find factorial value
 * I start to calculate factorial for zero element but only values in given range will be printed
 * loop is stopped when we went out of the range
 * @param start - the beggining of our range of ints values
 * @param stop - the end of our range of ints values
 * @param iterStart - the first element for which program will calculate factorial value
 */
void calculateFactorial(int start, int stop, int iterStart = 0);

/**
 * finding biggset element for the range using loop and if
 * @param start - the beggining of our range of ints values
 * @param stop - the end of our range of ints values
 * @param iterStart - the first element for which program will calculate factorial value
 */
void biggestFibonacci(int start, int stop, int iterStart = 0);

/**
 * finding biggset element for the range using loop and if
 * @param start - the beggining of our range of ints values
 * @param stop - the end of our range of ints values
 * @param iterStart - the first element for which program will calculate factorial value
 */
void biggestFactorial(int start, int stop, int iterStart = 0);


#endif //TASK3_FUNCTIONS_H
