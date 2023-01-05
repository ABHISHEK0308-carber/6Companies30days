#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        map<pair<int, int>, int> m;
        for(vector<int>& x:rectangles){
            m[{x[0], x[1]}]++;
            m[{x[0], x[3]}]--;
            m[{x[2], x[1]}]--;
            m[{x[2], x[3]}]++;
        }
        int n_mark=0;
        for(auto p=m.begin();p!=m.end();p++)
            if(p->second!=0){
                if(abs(p->second)!=1) 
                return false;
                n_mark++;
            }
        return n_mark==4;
    }
};
