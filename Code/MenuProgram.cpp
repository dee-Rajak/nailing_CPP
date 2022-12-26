#include <iostream>
#include <string>

int main()
{
    bool menuIsRunning = true;
    while (menuIsRunning)
    {
        std::string input;
        int choice;

        std::cout
            << "1. Fries\n"
            << "2. Burger\n"
            << "3. Shakes" << std::endl;

        std::cout << "Enter your choice : ";
        getline(std::cin, input);
        choice = std::stoi(input);

        switch (choice)
        {
        case 1:
            std::cout << "Fries costs $5" << std::endl;
            break;
        case 2:
            std::cout << "Burger costs $15" << std::endl;
            break;
        case 3:
            std::cout << "Shake costs $10" << std::endl;
            break;
        default:
            std::cout << "Invalid Choice" << std::endl;
            break;
        }
    }

    return 0;
}