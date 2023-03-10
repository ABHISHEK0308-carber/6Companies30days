#inlcude<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
    set<int> s;
    int m = size(grid), n = size(grid[0]), MAX_SIZE = (min(m, n) >> 1) + 1;
    for(auto row : grid) 
        for(auto el : row) {
            s.insert(el);
            if(size(s) > 3) s.erase(begin(s));
        }
    for(int Len = 1; Len < MAX_SIZE; Len++) 
        for(int row = Len; row < m - Len; row++) 
            for(int col = Len; col < n - Len; col++) {                     
                int i = row, j = col - Len, sum = 0;
                while(j <= col)  
                    sum += grid[i][j], i--, j++;
                i = row, j = col + Len;
                while(j >= col)
                    sum += grid[i][j],  i++, j--;
                i = row - Len + 1, j = col + 1;
                while(i < row)   
                    sum += grid[i][j],  i++, j++;
                i = row + Len - 1, j = col - 1;
                while(i > row)
                    sum += grid[i][j],  i--, j--;
                s.insert(sum);
                if(size(s) > 3) s.erase(begin(s));
            }
    return vector<int>(rbegin(s), rend(s));
}
};
