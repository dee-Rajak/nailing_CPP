#include <iostream>
#include <string>

#define NAME_COUNT 5

int main()
{
    std::string names[NAME_COUNT];
    std::cout << "Please input usernames:" << std::endl;
    for (int i = 0; i < NAME_COUNT; i++)
    {
        std::cout << "User " << i + 1 << ": ";
        std::getline(std::cin, names[i]);
    }

    bool isRunning = true;
    while (isRunning)
    {
        int userIndex = 0;
        std::string inputString = "";
        std::cout << "ENter user-id of user to fetch or -1 to quit: ";
        std::getline(std::cin, inputString);
        userIndex = std::stoi(inputString);
        if (userIndex == -1)
        {
            isRunning = false;
        }
        else
        {
            if (userIndex >= 1 && userIndex <= NAME_COUNT)
            {
                std::cout << "User " << userIndex << " = " << names[userIndex-1] << std::endl;
            }
            else
            {
                std::cout << "Invalid user index." << std::endl;
            }
        }
    }

    return 0;
}