class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int pos = s.find(part);
        while (pos != string::npos)
        {
            s.erase(pos, part.length());
            pos = s.find(part);
        }
        return s;
    }
};

// easy code
class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() > 0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};