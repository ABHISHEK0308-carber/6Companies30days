#include<bits/stdc++.h>
using namespace std;
static int MOD=1e9+7;
class Solution {
public:
    int delay,forget;
    vector<long> v;
    long dp(int n) {
        if(!n)
            return 0;
        if(v[n]!=-1)
            return v[n];
        long result=1;
        for(int i=delay;i<forget;i++) 
            if(n-i>=0)
                result=(result+dp(n-i))%MOD;
        return v[n]=result;
    }
    int peopleAwareOfSecret(int n, int delay, int forget) {
        this->delay=delay;
        this->forget=forget;
        v.resize(n+1,-1);
        return (dp(n)-dp(n-forget)+MOD)%MOD;
    }
};
