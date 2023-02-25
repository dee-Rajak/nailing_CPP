// Problem : 1480

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            temp.push_back(nums[i]);
        }
        else
        {
            temp.push_back(nums[i] + temp[i-1]);
        }

        cout<<nums[i]<<endl;
    }

    return temp;
    
    // for (auto &&i : nums.)
    // {
    //     cout<<i<<endl;
    // }
}

int main() {
    vector<int> nums {1,2,3,4};
    vector<int> out;
    out = runningSum(nums);
    for (int i = 0; i < out.size(); i++)
    {
        cout<<out[i]<<endl;
    }
    
    return 0;
}