class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        sumOfCombination(res,cur,candidates,0,target,0);
        return res;
    }

private:
    void sumOfCombination(vector<vector<int>>& res, vector<int> &cur, vector<int> &nums, int start, int target, int sum){
         //bool f = sumofArray(cur,target);
        if(sum > target){
            return;
        }
        if(sum == target){
            res.push_back(cur);
            return;
        }
       
        for(int i = start; i < nums.size(); i++){
            cur.push_back(nums[i]);
            sumOfCombination(res,cur,nums,i,target, sum + nums[i]);
            cur.pop_back();
        }
    }

    bool sumofArray(vector<int>& cur, int target){
        int sum = 0;
        for(auto item : cur){
            cout<<item << " ";
            sum += item;
        }
        cout<< endl;
        return (sum == target);
    }
};
