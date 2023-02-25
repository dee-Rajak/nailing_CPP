#include <iostream>
#include <string>
using namespace std;

string encipher(string text, int x)
{
    string output="";
    for(int i = 0; i<text.length(); i++)
    {
        if (isupper(text[i]))
            output += char(int(text[i] + x - 65) % 26 + 65);
        else
            output += char(int(text[i] + x - 97) % 26 + 97);
    }

    return output;
}

bool check_string(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (isalpha(text[i]))
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string text;
    int ceasar_factor;

    cout<<"Enter text to encipher : ";
    cin>>text;
    cout<<"Enter Ceasar Factor value : ";
    cin>>ceasar_factor;

    if (check_string(text))
    {
        cout<<"Enciphered Output : " + encipher(text, ceasar_factor)<<endl;
    }
    else
    {
        cout<<"Provided Input String is Invalid."<<endl;
    }
}