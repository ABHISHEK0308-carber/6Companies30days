#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(), v.end());
        int start=0, end=v.size()-1;
        while(start<=v.size()-1 && v[start]==nums[start]){
            start++;
        }
        while(end>=0 && v[end]==nums[end]){
            end--;
        }
        if(end<0 || start>v.size()-1){return 0;}
        return end-start+1;
    }
};
