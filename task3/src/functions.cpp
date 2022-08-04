#include "../include/functions.h"
#include<iostream>


unsigned long long int factorial(int n){
    if(n==0 || n==1) return 1;
    return n * factorial(n-1);
}

unsigned long long int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

void findMaximum(int n){
    std::cout<<"Find maximum value of factorial and fibonacci element"<<std::endl;
    unsigned long long int maximumFibonacci = 0, maximumFactorial = 0;
    int iter = n;

    for(;;){
        //fibonacci
        if(fibonacci(iter)<0)
            break;
        if(fibonacci(iter)>)
        if(fibonacci(iter)>maximumFibonacci)
            maximumFibonacci = fibonacci(iter);



        //factorial



    }
}