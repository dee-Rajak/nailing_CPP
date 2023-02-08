#include <iostream>

int main() {
    int myInt = 10;
    bool myBool = true;
    char myChar = 'a';
    float myFloat = 4.9f;
    double myDouble = 6.543;
    char32_t myWchar = 'G';

    std::cout<<"Int : \t"<<sizeof(myInt)<<std::endl;
    std::cout<<"Bool : \t"<<sizeof(myBool)<<std::endl;
    std::cout<<"Char : \t"<<sizeof(myChar)<<std::endl;
    std::cout<<"Float : \t"<<sizeof(myFloat)<<std::endl;
    std::cout<<"Double : \t"<<sizeof(myDouble)<<std::endl;
    std::cout<<"w-Char : \t"<<sizeof(myWchar)<<std::endl;
    return 0;
}