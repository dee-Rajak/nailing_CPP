#include <iostream>
#include <vector>
using namespace std;

int fact(int n)
{
    if (n > 1)
        return n * fact(n - 1);
    else
        return 1;
}

int main()
{
    int x;
    int a[x]{0};

    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < x; i++)
    {
        a[i] = fact(a[i]);
    }
    for (int i = 0; i < x; i++)
    {
        cout << a[i];
    }

    return 0;
}