#include <iostream>
#include <string>
#include <ctime>
#include <random>


int main() {
    bool isRunning = true;
    std::string input = "";
    std::cout<<"***Random number generator***"<<std::endl;
    while (isRunning)
    {
        std::cout<<"Enter amount of no. to generate, or 0 to exit :";
        getline(std::cin, input);
        int val = std::stoi(input);

        if (val == 0)
        {
            break;
        } else
        {
            srand((unsigned)time(0));
            for (int i = 0; i < val; i++)
            {
                std::cout<<rand() % 10;
                if (i != val-1)
                {
                    std::cout<<", ";
                } else
                {
                    std::cout<<std::endl;
                }
            }
        }
    }
}