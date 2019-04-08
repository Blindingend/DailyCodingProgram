/**
 * Given an integer k and a string s, find the length of the longest substring 
 * that contains at most k distinct characters.
 * For example, given s = "abcba" and k = 2, the longest substring with k distinct
 *  characters is "bcb".
**/

#include <set>
#include <algorithm>

class Solution
{
private:
    
public:
    int subdistinct(string s, int k)
    {
        int result = 0;
        for(size_t i = 0; i < s.size() - result; ++i)
        {
            set<char> cset;
            int temp = 0;
            for(size_t j = 0; j < s.size(); ++j)
            {
                if(cset.count(s[j]))
                {
                    ++temp;
                    continue;
                }
                if(cset.count(s[j]) == 0 && cset.size() < 2)
                {
                    cset.insert(s[j]);
                    ++temp;
                    continue;
                }
                else
                    break;
            }
            result = max(temp, result);
        }
        return result;
    }
};

int main()
{

    return 0;
}
