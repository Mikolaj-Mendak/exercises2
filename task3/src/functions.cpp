#include "../include/functions.h"


using namespace std;


unsigned long long factorial(int n){
    if(n<=1) return 1;
    return n * factorial(n-1);
}

unsigned long long fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

void calculateFibonacci(int start, int stop,int iterStart) {

    unsigned long long temp = 0;

    cout << endl << "Calculated Fibonacci sequence for input range: ";
    while (1) {
        temp = fibonacci(iterStart);
        if (temp > stop)
            break;
        if (temp >= (unsigned long long) start && temp <= (unsigned long long) stop)
            cout << temp << ", ";
        iterStart++;
    }
}

void calculateFactorial(int start, int stop, int iterStart){

    unsigned long long temp = 0;

    cout<<endl<<"Calculated factorials set for input range: ";
    while(1) {
        temp = factorial(iterStart);
        if(temp>stop)
            break;
        if (temp >= (unsigned long long)start && temp <= (unsigned long long)stop)
            cout<<temp<<", ";
        iterStart++;
    }
}

void biggestFibonacci(int start, int stop, int iterStart){
    cout<<"\nMaximum value of fibonacci for range <"<<start<<","<<stop<<">:  ";

    while(1){
        if(fibonacci(iterStart+1)>stop) {
            cout << fibonacci(iterStart);
            break;
        }
        iterStart++;
    }
}

void biggestFactorial(int start, int stop, int iterStart){
    cout<<"\nMaximum value of factorial for range <"<<start<<","<<stop<<">:  ";

    while(1){
        if(factorial(iterStart+1)>stop) {
            cout << factorial(iterStart);
            break;
        }
        iterStart++;
    }
}



