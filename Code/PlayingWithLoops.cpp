#include <iostream>

int main() {
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout<<i;
    // }

    int myVector[] {1, 2, 3, 4, 5};
    // for (int i = 0; i < myVector.size(); i++)
    // {
    //     std::cout << myVector[i]<<std::endl;
    // }
    for (int i : myVector)
    {
        std::cout<<i<<std::endl;
    }
    
    
    return 0;
}