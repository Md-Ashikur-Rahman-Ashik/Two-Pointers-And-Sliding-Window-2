#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &arr, int k)
    {

        int n = arr.size();
        for (int i = 1; i < n; i++)
        {
            arr[i] = arr[i - 1] + arr[i];
        }

        int ans = 0;

        map<int, int> mp;
        mp[0] = -1;

        for (int i = 0; i < n; i++)
        {
            if (mp.count(arr[i] - k) > 0)
            {
                ans = max(ans, (i - mp[arr[i] - k]));
            }

            if (mp.count(arr[i]) == 0)
                mp[arr[i]] = i;
        }
        return ans;
    }
};