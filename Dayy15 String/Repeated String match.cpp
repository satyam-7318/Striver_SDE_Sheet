https://leetcode.com/problems/repeated-string-match/



class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        
        
       string s = "";
            int count = 0;
            while (s.size() < b.size())
            {
                s += a;
                count++;
            }
            if (s.find(b) != string::npos)//to check whether string b is in our newly created string s
                return count;
            s += a;
            count++;
            if (s.find(b) != string::npos)
                return count;

            return -1;
        
    }
};
