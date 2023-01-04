#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>index(numCourses, 0);
     vector<vector<int>>v(numCourses);
     vector<int>sol;
     for(auto it:prerequisites)
     {
index[it[0]]++;
v[it[1]].push_back(it[0]);
     }
     queue<int>q;
     for(int i=0; i<numCourses; i++){
         cout<<index[i]<<" ";
         if(index[i]==0)
         q.push(i);
     }
     while(!q.empty())
     {
         int a = q.front();
         q.pop();
         sol.push_back(a);
         for(auto i:v[a])
         {
             if((--index[i])==0)
             q.push(i);

         }
     }
     return sol.size()==numCourses;
    }
};
