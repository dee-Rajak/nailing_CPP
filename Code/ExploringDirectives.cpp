#include <iostream>
#include <string>

// #define HELLO "Hello World" // define macro variable
// #define Multiply(a, b) (a * b) // define macro function
#define LEVEL 3

int main()
{
    #if LEVEL == 0
        #define SCORE 0
    #else
    #if LEVEL == 1
        #define SCORE 10
    #endif
    #endif

    #if LEVEL == 2
        #define SCORE 20
    #elif LEVEL == 3
        #define SCORE 30
    #endif

    #ifdef SCORE
        std::cout << SCORE;
    #ifndef SCORE
        std::cout << "Score not defined yet.";
    #endif
    #endif
    std::string name;
    std::string temp;
    char nameA[] = {'H','E','L','L','O'};
    getline(std::cin, name);
    // getline(nameA, temp);
    std::cout<<name;
    std::cout<<temp;

    
    // std::cout << HELLO;
    // std::cout << Multiply(4, 3);
    // // #undef Multiply
    // // std::cout << Multiply(2, 8);
    // #ifdef Multiply
    //     std::cout << Multiply(3, 3);
    // #endif
}