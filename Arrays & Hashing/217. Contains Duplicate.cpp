class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;

        for(auto i : nums){
            if(st.find(i) != st.end()){
                return true;
            }
            st.insert(i);
        }

        return false;
    
    }
};
