#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    int gameplay;
    std::string s_count;
    int count;
    std::string s_min;
    int minNumber;
    std::string s_max;
    int maxNumber;
    std::string s_guess;
    int guess;
    std::cout << "***NUMBER GUESSING GAME***" << std::endl;

    do
    {
        std::cout << "Enter the number of guesses: ";
        getline(std::cin, s_count);
        count = std::stoi(s_count);
        std::cout << "Enter the minimum number: ";
        getline(std::cin, s_min);
        minNumber = std::stoi(s_min);
        std::cout << "Enter the maximum number: ";
        getline(std::cin, s_max);
        maxNumber = std::stoi(s_max);

        int number;
        srand((unsigned)time(0));
        number = rand() % (maxNumber - minNumber + 1);

        for (int i = 0; i < count; i++)
        {
            std::cout << "Enter your guess: ";
            getline(std::cin, s_guess);
            guess = std::stoi(s_guess);

            if (guess == number)
            {
                std::cout << "Well done, you guessed the number!"<<std::endl;
                break;
            }
            else if (guess < number)
            {
                std::cout << "Your guess was too low. You have " << count-(i+1) << " guesses remaining."<<std::endl;
                continue;
            }
            else if (guess > number)
            {
                std::cout << "Your guess was too high. You have " << count-(i+1) << " guesses remaining."<<std::endl;
                continue;
            }
        }
        std::cout << "Enter 0 to exit, or any number to play again: ";
        std::cin >> gameplay;
    } while (gameplay);

    return 0;
}
