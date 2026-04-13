class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.length();
        int tl = t.length();
        if(sl != tl) return false;
        unordered_map<char,int> sll;
        unordered_map<char,int> tll;
        for(int i=0;i<sl;i++){
            sll[s[i]]++;
            tll[t[i]]++;
        }
        if(sll == tll) return true;
        return false;
    }
};
