class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> freq;
        for(int i = 0; i < s.length(); i++){
            char c = s[i];
            if( freq.find(c) == freq.end() ){
                freq[c] = 1;
            }
            else{
                freq[c]++;
            }
        }
        for(int i = 0; i < t.length(); i++){
        char c = t[i];
        if(freq.find(c) ==freq.end()){
            return false;
        }
        freq[c]--;
        if(freq[c]<0){
            return false;
        }
        }
        return true;
        } 
    };
