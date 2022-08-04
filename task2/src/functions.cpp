#include"../include/functions.h"


int solution(int N, int K){

    /*
     * first assumptions for correct computation of binomial coefficient
     * if N is lower than K or numbers are negative function returns -1
     * if N and K are equal function returns 1
     */
    if(K > N || K<0 || N<0) return -1;
    if(K==N) return 1;

    /*
     * I made simpler algorithm to be more efficient, we do not need to compute 3 factories
     * it is enough to compute one which is in divider (N-K)! and second partial factory in dividend
     * now I have less computations of factories
     */
    long long int dividend = N, divider = N - K;
    for(int i = N-1; i > 1; i--){
        if(i > K)
            dividend *= i;
        if(i<=N-K-1)
            divider *= i;
        if(int(dividend / divider) > 1e9){
            return -1;
            }
    }
    return int(dividend / divider);
}




