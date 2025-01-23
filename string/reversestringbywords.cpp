#include<string>

class Solution {
public:
    string reverseWords(string s) {
      
        int n=s.size(),i=0;
        string ans="";
        while(i<n)
        {
           string tm="" ;
           while( s[i]==' '&& i<n)
              i++;
           while( s[i]!=' '&& i<n)
           {
          tm+=s[i];
              i++;
           }
           if(tm.size()>0){
               if(ans.size()==0)
               ans=tm;
               else
               ans= tm+" "+ans;
           }
        }
        return ans;
    }
};

class solution{
  public:
  string reverseWords(string s) {
    stringstream st(s);
    string word;
    vector<string> ans;

    while (st >> word) {
        ans.emplace_back(word);
    }

    int n = ans.size();
    for (int i = 0; i < n / 2; ++i) {
        swap(ans[i], ans[n - 1 - i]);
    }

    string result = "";
    for (int i = 0; i < ans.size(); ++i) {
        result += ans[i] + " ";
    }

    result.pop_back(); // Remove the trailing space
    return result;
}
}