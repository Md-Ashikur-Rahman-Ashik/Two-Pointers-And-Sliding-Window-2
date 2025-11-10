#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        map<char, int> characterMap;
        int stringSize = s.length();

        int firstTracker = 0;
        int secondTracker = 0;
        int count = 0;

        while (secondTracker < stringSize)
        {
            characterMap[s[secondTracker]]++;

            int mapSize = characterMap.size();
            if (mapSize == k)
            {
                count = max(count, (secondTracker - firstTracker + 1));
            }
            else
            {
                mapSize = characterMap.size();
                while (mapSize > k)
                {
                    characterMap[s[firstTracker]]--;
                    if (characterMap[s[firstTracker]] == 0)
                    {
                        characterMap.erase(s[firstTracker]);
                    }

                    firstTracker++;
                    mapSize = characterMap.size();
                }

                mapSize = characterMap.size();
                if (mapSize == k)
                {
                    count = max(count, (secondTracker - firstTracker + 1));
                }
            }

            secondTracker++;
        }

        if (count == 0)
        {
            return -1;
        }
        else
        {
            return count;
        }
    }
};