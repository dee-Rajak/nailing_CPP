#include <iostream>
#include <string>

#define G_1 12
#define G_2 23
#define G_3 45
#define G_4 65

std::string get_age_group(int age_group) {
    if (age_group < G_1)
    {
        return "Very Young.";
    } else if (age_group < G_2)
    {
        return "Teen.";
    } else if (age_group < G_3)
    {
        return "Middle ageed.";
    } else if (age_group < G_4)
    {
        return "Old.";
    } else
    {
        return "Very Old.";
    }
}

int main() {
    std::string s_age;
    int age;
    std::cout<<"Please enter the age : ";
    getline(std::cin, s_age);
    age = std::stoi(s_age);
    
    std::cout<<get_age_group(age);
    return 0;
}