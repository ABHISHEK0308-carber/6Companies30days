#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int sol=numsDivide[0];
    for(int i=1;i<numsDivide.size();i++)
    {
    sol= __gcd(sol,numsDivide[i]);
    }
    cout<<sol;
    sort(nums.begin(),nums.end());
    int count=0;
    for(int i=0;i<nums.size();i++)
{
        if(sol%nums[i]==0)
            break;
        else
            count++;
    }
    if(count==nums.size())
        return -1;
    else
        return count;

    }
};
