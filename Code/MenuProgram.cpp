#include <iostream>

int main() {
    std::cout<<"1. Fries\n"\
    <<"2. Burger\n"\
    <<"3. Shakes"<<std::endl;

    int choice;

    std::cout<<"Enter your choice : ";
    std::cin>>choice;

    switch (choice)
    {
    case 1:
        std::cout<<"Fries costs $5"<<std::endl;
        break;
    case 2:
        std::cout<<"Burger costs $15"<<std::endl;
        break;
    case 3:
        std::cout<<"Shake costs $10"<<std::endl;
        break;
    default:
        std::cout<<"Invalid Choice"<<std::endl;
        break;
    }
    return 0;
}