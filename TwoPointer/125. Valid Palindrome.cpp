class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while(l < r){
         while((l < r) && !isAlpha(s[l])){
             l+=1;
         }
         while((r > l) && !isAlpha(s[r])){
             r-=1;
         }

      //   cout<<tolower(s[l]) << " " << tolower(s[r]) << endl;

           if(tolower(s[l]) != tolower(s[r])){
               //cout<<l << " " << r << " " << s[l] << " " <<s[r] << endl;
               return false;
           }
           l++;
           r--;
        }

        return true;
    }

    bool isAlpha(char ch){
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' &&          ch <= '9')){
            return true;
        } 
        return false;
    }
};
