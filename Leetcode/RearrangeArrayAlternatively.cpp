#include <iostream>
using namespace std;

int main()
{
    int arr[] {10,20,30,40,50,60,70,80,90,100,110};
    int len = sizeof(arr)/sizeof(*arr);
    // cout<<len;
    for (int i = 0, j = len-1; i < j; i++, j--)
    {
        cout<<arr[j]<<" "<<arr[i]<<" ";
    }
    
}