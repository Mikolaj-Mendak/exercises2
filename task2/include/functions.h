#ifndef TASK2_FUNCTIONS_H
#define TASK2_FUNCTIONS_H

/**
 * function compute binomial coefficient B(N, K)
 * it returns -1 if the result exceed 1e9 or the given numbers are incompatible with the assumptions
 * else it returns the result
 * I used more efficient algorithm, it is enough to compute only one factorial and part of second factorial
 * @param N
 * @param K
 * @return int -  binomial coefficient B(N, K) or -1
 */
int solution(int N, int K);

#endif //TASK2_FUNCTIONS_H
