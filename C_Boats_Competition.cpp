#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int vectorSize;
        cin >> vectorSize;
        vector<int> integerVector(vectorSize);
        vector<bool> boolVector(vectorSize, false);

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
        }

        sort(integerVector.begin(), integerVector.end());

        int count = 0;
        int maxCount = 0;
        for (int i = 1; i <= 100; i++)
        {
            count = 0;

            for (int j = 0; j < vectorSize; j++)
            {
                boolVector[j] = false;
            }

            for (int j = 0; j < vectorSize; j++)
            {
                for (int k = j + 1; k < vectorSize; k++)
                {
                    if (integerVector[j] + integerVector[k] == i && boolVector[j] == false && boolVector[k] == false)
                    {
                        count++;
                        maxCount = max(count, maxCount);

                        boolVector[j] = true;
                        boolVector[k] = true;
                    }
                }
            }
        }

        cout << maxCount << "\n";
    }

    return 0;
}