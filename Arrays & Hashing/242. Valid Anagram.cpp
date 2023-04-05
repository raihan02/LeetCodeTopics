class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()){
            return false;
        }
        map < char, int > mp1;
        map <char, int> mp2;

        for(int i = 0; i < s.size(); i++){
            if(mp1.count(s[i]) == 0){
                mp1[s[i]] = 1;
            }
            else{
                mp1[s[i]] = mp1[s[i]] + 1; 
            }

            if(mp2.count(t[i]) == 0){
                mp2[t[i]] = 1;
            }
            else{
                mp2[t[i]] = mp2[t[i]] + 1; 
            }
        } 

        if(mp1 == mp2){
            return true;
        }
        return false;
    }
};
