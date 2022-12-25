#include <iostream>

int addNums(int a, int b) {
    return a + b;
}

int main() {
    int x = addNums(10, 20);
    std::cout << "Sum is : " << x;
    return 0;
}