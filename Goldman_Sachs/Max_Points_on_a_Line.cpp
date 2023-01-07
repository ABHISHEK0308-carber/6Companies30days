#include<bits/stdc++.h>
using  namespace std;
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int dupli =1;
        int ans =0;
        for(int i=0; i<n; i++){
            unordered_map<string , int>m;
            for(int j=i+1; j<n; j++){
                if(points[j][0]==points[i][0] && points[j][1]==points[i][1])
                {
                    dupli++;

                }
                else
                {
                    int x = points[j][0]-points[i][0];
                    int y = points[j][1]-points[i][1];
                    int gcd =__gcd(x, y);
                    x/=gcd;
                    y/= gcd;
                    m[to_string(x)+' '+to_string(y)]++;

                }
            }
                    ans = max(ans, dupli);
                    for(auto it:m)
                    {
                        ans = max(ans, it.second+dupli);
                    }
        }
        return ans;
    }
};