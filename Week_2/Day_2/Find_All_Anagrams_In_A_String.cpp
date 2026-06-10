class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.length();
        int m = p.length();
        if(m>n)
           return ans;
        vector<int> countP(26, 0);
        vector<int> countS(26, 0);
        for(int i = 0; i < m; i++) {
            countP[p[i] - 'a']++;
            countS[s[i] - 'a']++;
        }
        if (countP == countS)
            ans.push_back(0);
        for(int i = m; i < n; i++) {
            countS[s[i] - 'a']++;
            countS[s[i - m] - 'a']--;
            if (countP == countS)
                ans.push_back(i - m + 1);
        }
        return ans;
    }
};