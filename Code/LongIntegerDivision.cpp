#include <iostream>
#include <vector>
using namespace std;

// void print_array (vector <int> x)
// {
//     cout<<"| ";
//     for (int i = 0; i < x.size(); i++)
//     {
//         cout<<x[i] + " | ";
//     }
//     cout<<endl;
// }

int main()
{
    vector <int> A1;
    vector <int> A2;
    long long int x;
    cout<<"Enter a large number : ";
    cin>>x;

    for (int i = 2; i <= 15; i++)
    {
        if (x % i == 0)
            A1.push_back(i);
        else
            A2.push_back(i);
    }

    cout<<"Given number is divisible by :"<<endl;
    for (int i = 0; i < A1.size(); i++)
    {
        cout<<A1[i]<<" | ";
    }
    cout<<endl;
    cout<<"Given number is not divisible by :"<<endl;
    for (int i = 0; i < A2.size(); i++)
    {
        cout<<A2[i]<<" | ";
    }

    return 0;
}