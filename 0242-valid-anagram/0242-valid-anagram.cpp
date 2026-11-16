class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        for (char c: s){
            if (s_map.contains(c)){
                s_map[c]++;
            } else {
                s_map[c] = 1;
            }
        }

        for (char c: t){
            if (t_map.contains(c)){
                t_map[c]++;
            } else {
                t_map[c] = 1;
            }
        }

        if (s_map == t_map){
            return true;
        } else {
            return false;
        }

    }
};