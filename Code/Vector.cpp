#include <iostream>
#include <string>
#include <vector>

std::vector <int> myVector {1,2,3,4,5};
void PrintVector()
{
    for (int i = 0; i < myVector.size(); i++)
    {
        std::cout<<myVector[i];
    }
    std::cout<<"\n\n";
}

int main()
{
    myVector.pop_back();
    myVector.push_back(6);
    PrintVector();
    myVector.erase(myVector.begin() +1);
    myVector.insert(myVector.begin()+2, 8);
    PrintVector();
    // myVector.erase(myVector.);
    // PrintVector();
    std::cout<<myVector.size();
    
}