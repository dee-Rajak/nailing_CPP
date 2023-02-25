#include <iostream>
#include <string>

class MyClass
{
    int myInt = 0;
    public:
    void IncrementInt()
    {
        myInt++;
        std::cout<<"Myclass::Increment Int: "<<myInt;
    };
};

int main()
{
    MyClass classObj;
    classObj.IncrementInt();
    classObj.IncrementInt();
}