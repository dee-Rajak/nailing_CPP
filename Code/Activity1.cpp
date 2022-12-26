#include <iostream>
#include <string>

#define GROUP_A 10
#define GROUP_B 25
#define GROUP_C 45
#define GROUP_D 60

int main() {
    std::string name;
    int age;
    std::cout<<"Enter your name : ";
    getline(std::cin, name);
    std::cout<<"Enter your age : ";
    std::cin>>age;

    std::cout<<"Welcome "<<name<<". ";
    // Assigning Groups
    if (age <= GROUP_A) {
        std::cout<<"You are in Group A.";
    } else if (age <= GROUP_B) {
        std::cout<<"You are in Group B.";
    } else if (age <= GROUP_C) {
        std::cout<<"You are in Group C.";
    } else {
        std::cout<<"You are in Group D.";
    }

    return 0;
}