#include <iostream>
#include <string>
using namespace std;

string encipher(string text, int x)
{
    string output="";
    for(int i = 0; i<text.length(); i++)
    {
        if (int(text[i] >= 48 && text[i] <= 57))
            output += char(int(text[i] + x - 65) % 26 + 65);
        else
            return "Invalid Input String.";
    }
    return output;
}

int main()
{
    string text;
    int ceasar_factor;

    cout<<"Enter text to encipher : ";
    cin>>text;
    cout<<"Enter Ceasar Factor value : ";
    cin>>ceasar_factor;
    cout<<"Enciphered Output : " + encipher(text, ceasar_factor)<<endl;
}