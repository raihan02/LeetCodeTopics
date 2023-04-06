class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>res;
      vector<int>cur;
       uniqueSubset(nums,res,cur,0);
       return res;
    }
private:
    void uniqueSubset(vector<int> &nums,vector<vector<int>>&res, vector<int>&cur,int start){
        res.push_back(cur);
        for(int i = start; i < nums.size(); i++){
            cur.push_back(nums[i]);
            uniqueSubset(nums,res,cur,i+1);
            cur.pop_back();
        }
    }
};
