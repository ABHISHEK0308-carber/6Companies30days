#include<bits/stdc++.h>
using namespace std;
class Solution {
    public: 
    int rev(int n){
  int res=0;
  while(n>0)
  
    {  res = res*10 + (n%10);
      n/=10;}
  
  return res;
    }
public:
    int countNicePairs(vector<int>& nums) {
     unordered_map<int, int> m;
    int mod = (int)1e9 + 7;
    int res = 0;
    for (auto n : nums)
     res = (res + m[n - rev(n)]++) % mod;
    return res;
    }
};
