struct Trie{
    bool isEnd;
    vector<Trie *>Children;
    Trie(){
        this->Children = vector<Trie *>(26,NULL);
        this->isEnd = false;
    }
};
class Solution {
public:
    Trie *trie = new Trie();
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
     vector<string> ans;
        sort(words.begin(), words.end(), [&](const string & a, const string & b){
            return a.size() < b.size(); 
        });
     for(int i = 0;i < words.size();i++){
         string word = words[i];
         if(word.size()==0)
         continue;
         if(dfs(word,0)){
             ans.emplace_back(word);
         }else{
             insert(word);
         }
     }
    return ans;
    }


    bool dfs(const string &word,int start){
        if(word.size()==start){
            return true;
        }
        Trie * node = trie;
        for(int i =start;i<word.size();i++){
            char ch = word[i];
            int index = ch - 'a';
            node = node->Children[index];
            if(node ==NULL){
                return false;
            }
            if(node->isEnd){
                if(dfs(word,i+1)){
                return true;
                }
            }

        }
        return false;
    }

    void insert(const string &word){
         Trie * node = trie;
         for(int i = 0;i<word.size();i++){
             char ch = word[i];
             int index = ch - 'a';
             if(node->Children[index]==NULL){
                 node->Children[index] = new Trie();
             }
             node = node->Children[index];
         }
         node->isEnd = true;
    }
    
};
