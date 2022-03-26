//138 . Pascal's Triangle
// https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> res;
        int n=numRows;
        for(int j=0;j<n;j++){
            vector<int> ans(j+1,1);
            //ans.push_back({1});
            for(int i=1;i<j;i++){
                ans[i]=res[j-1][i-1]+res[j-1][i];
              
            }
           // ans.push_back({1});
            res.push_back({ans});
        }
        return res;
    }
};