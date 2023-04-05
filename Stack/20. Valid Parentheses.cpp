class Solution {
public:
    bool isValid(string s) {
        
        stack < char > st;
        map < char , char > hashMap;
        hashMap.insert(make_pair(')', '('));
        hashMap.insert(make_pair(']', '['));
        hashMap.insert(make_pair('}', '{'));
        
        for (auto item : s){
            if (hashMap.find(item) != hashMap.end()){
                if(st.size() > 0 && st.top() == hashMap[item]){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(item);
            }
        }

        return (st.size() == 0);
    }
};
