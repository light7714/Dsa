// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
// also see for sol :
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/discuss/1148252/Short-and-Easy-Solutions-or-Multiple-Approaches-Explained-or-Beats-100

class Solution {
public:
    vector<string> res;
    string getLetters(char s){
        string ans;
        switch(s) {
            case '2':
                ans += "abc";
                return ans;
                break;
            case '3':
                ans += "def";
                return ans;
            case '4':
                ans += "ghi";
                return ans;
            case '5':
                ans += "jkl";
                return ans;
            case '6':
                ans += "mno";
                return ans;
            case '7':
                ans += "pqrs";
                return ans;
            case '8':
                ans += "tuv";
                return ans;
            case '9':
                ans += "wxyz";
                return ans;
            default:
                return ans;
        }
    }
    void recursion(string digits, int i, string comb) {
        if(i == digits.size()) {
            res.push_back(comb);
            // cout<<comb<<" ";
        }
            
        else {
            string letters = getLetters(digits[i]);
            // cout<<letters;
            for(int j=0; j<letters.size(); j++) {
                recursion(digits, i + 1, comb + letters[j]);
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0)
            return res;
        recursion(digits, 0, "");
        return res;
    }
};