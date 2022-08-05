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

void calculateFibonacci(int start, int stop, int iterator = 0){
    vector<unsigned long long> vect;
    unsigned long long temp = 0;

    while(1) {
        temp = fibonacci(iterator);
        if(temp>stop)
            break;
        if (temp >= (unsigned long long)start && temp <= (unsigned long long)stop)
            vect.push_back(temp);
        iterator++;
    }

    cout<<"Calculated Fibonacci sequence for input range: ";
    for(auto i: vect)
        cout<<i<<", ";
    cout<<"\nMaximum value of fibonacci sequence for this range: "<<*max_element(vect.begin(), vect.end())<<endl;

}

void calculateFactorial(int start, int stop, int iterator = 0){
    vector<unsigned long long> vect;
    unsigned long long temp = 0;

    while(1) {
        temp = factorial(iterator);
        if(temp>stop)
            break;
        if (temp >= (unsigned long long)start && temp <= (unsigned long long)stop)
            vect.push_back(temp);
        iterator++;
    }

    cout<<"Calculated factorials set for input range: ";
    for(auto i: vect)
        cout<<i<<", ";
    cout<<"\nMaximum value of factorial for this range: "<<*max_element(vect.begin(), vect.end())<<endl;

}

