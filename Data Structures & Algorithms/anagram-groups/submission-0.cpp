class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_map;

        for(const string&word:strs ){
            string key = word;
            sort(key.begin(), key.end());
            anagram_map[key].push_back(word);

        }
        vector<vector<string>> result;
        for(auto const& [key,group]:anagram_map){
            result.push_back(group);
        }
        return result;
    }
};
