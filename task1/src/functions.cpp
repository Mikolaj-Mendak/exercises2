#include<iostream>
#include "../include/functions.h"

std::string checkChar(char c){
    if(c>=48 && c<=57)
        return "digit";
    else if(c>=65 && c<=90)
        return "upper";
    else if(c>=97 && c<=122)
        return "lower";
    else return "other";
}