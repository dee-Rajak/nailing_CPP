#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Write program to find the following:
 * - A union B
 * - A intersection B
 * - A difference B
 */

// void do_union(vector<int> a, vector<int> b)
// {
//     vector<int> temp;
//     for (int i = 0; i < a.size(); i++)
//     {
//         for (int i = 0; i < b.size(); i++)
//         {

//         }

//     }

// }

void make_set(vector<int>& x)
{
    int count = x.size();
    vector<int> temp;
    for (int i = 0; i < count; ++i)
        for (int j = i + 1; j < count;)
        {
            if (x[i] == x[j])
            {
                for (int k = j; k < count - 1; ++k)
                    x[k] = x[k + 1];
                --count;
            }
            else
                ++j;
        }
}

void print_vector(vector<int> x)
{
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << endl;
    }
}

int main()
{
    vector<int> a{1, 1, 3, 4, 6, 6};
    make_set(a);
    print_vector(a);
}

/*
for (int i = 0; i < x.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < x.size(); j++)
        {
            if (x[i] == x[j])
            {
                count++;
            }
        }
        if (count <= 1)
        {
            temp.push_back(x[i]);
        }
    }
*/