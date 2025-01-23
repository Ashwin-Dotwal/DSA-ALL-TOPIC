
class Solution {
public:
    string lowertoupercase(string s) {
        for(int i=0;i<s.length();i++)
        {
            s[i]=s[i]-'a'+'A';
        }
        
    }
};