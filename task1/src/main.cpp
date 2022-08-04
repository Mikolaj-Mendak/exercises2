#include <iostream>
#include "../include/functions.h"

int main() {
    char c;
    std::cout<<"Input char:";
    std::cin>>c;
    std::cout<<checkChar(c);
    return 0;
}