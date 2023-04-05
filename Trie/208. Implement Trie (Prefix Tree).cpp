class Root{
public:
    Root* children[26];
    bool isEnd;

    Root(){
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        isEnd = false;
    }

};
class Trie {
public:
    Trie() {
        root = new Root();
    }
    
    void insert(string word) {
        Root* currentRoot = root;
        int cur = 0;
        for(int i = 0; i < word.size(); i++){
            cur = word[i] - 'a';
            if(currentRoot->children[cur] == NULL){
                currentRoot->children[cur] = new Root();
            }
            currentRoot = currentRoot->children[cur];
        }
        currentRoot->isEnd = true;
    }
    
    bool search(string word) {

        Root* currentRoot = root;
        int cur = 0;
        for(int i = 0; i < word.size(); i++){
            cur = word[i] - 'a';
            if(currentRoot->children[cur] == NULL){
                return false;
            }
            currentRoot = currentRoot->children[cur];
        }

     return currentRoot->isEnd;   
    }
    
    bool startsWith(string prefix) {
        
        Root* currentRoot = root;
        int cur = 0;
        for(int i = 0; i < prefix.size(); i++){
            cur = prefix[i] - 'a';
            if(currentRoot->children[cur] == NULL){
                return false;
            }
            currentRoot = currentRoot->children[cur];
        }
        return true;
    }

    private:
    Root* root;
};

