class Solution
{
public:
    bool isPalindrome(string &str)
    {
        if (str < 0)
        {
            return false;
        }

        int i = 0;
        int j = str.length() - 1;

        while (i <= j)
        {
            if (str[i] != str[j])
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};

class Solution
{
public:
    bool isAlphaNum(char ch)
    {
        return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }

    bool isPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;

        while (i < j)
        {
            while (i < j && !isAlphaNum(s[i]))
                i++; // Skip non-alphanumeric characters from the left
            while (i < j && !isAlphaNum(s[j]))
                j--; // Skip non-alphanumeric characters from the right

            if (tolower(s[i]) != tolower(s[j]))
            {
                return false; // If characters don't match, it's not a palindrome
            }
            i++;
            j--;
        }

        return true;
    }
};
