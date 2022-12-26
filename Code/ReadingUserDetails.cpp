#include <iostream>
#include <string>

int main () {
    std::string firstName;
    std::string lasstName;
    int age;

    std::cout<<"Enter your first name : ";
    getline(std::cin, firstName);
    std::cout<<"Enter your last name : ";
    getline(std::cin, lasstName);
    std::cout<<"Enter your age : ";
    std::cin>>age;

    std::cout<<"\nHey "<<firstName<<" "<<lasstName<<std::endl;
    std::cout<<"You are "<<age<<" year old."<<std::endl;

    return 0;
}