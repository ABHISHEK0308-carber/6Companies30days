#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> points = {p1, p2, p3, p4};
        
        unordered_map<int, int> m;
        
        int mini = INT_MAX;
        
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                int x = points[i][0] - points[j][0]; 
                int y = points[i][1] - points[j][1];
            
                int ans = x * x + y * y;                 
                mini = min (mini, ans);
                
                m[ans]++;
            }
        }
        
        return m[mini] == 4 && m[2 * mini] == 2; 
    }
};
