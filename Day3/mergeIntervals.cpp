//prblm 58 Merge Intervals
//https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intv) {
     sort(intv.begin(),intv.end());
    
        vector<int> temp;
        int n=intv.size();
        vector<vector<int>> ans;
        temp= intv[0];
        int i=1;
        while(i<n){
            if(temp[1]>=intv[i][0]){
                temp[1]=max(temp[1],intv[i][1]);
                i++;     
                
            }
            else
            {
            ans.push_back(temp);
            temp.clear();
            temp = intv[i++];
            }
        }
        ans.push_back(temp);
            return ans;
    }
};