#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
     int i = 0;
        int j = 0;
        int count = 0;
        unordered_map<int,int> m;
        while(j < s.size()){
            m[s[j]]++;
            if(m.size() == 3){
                while(m.size() == 3){
                    count += s.size()-j;
                    m[s[i]]--;
                    if(m[s[i]] == 0){
                        m.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;      
        }
        return count;
    }
};
