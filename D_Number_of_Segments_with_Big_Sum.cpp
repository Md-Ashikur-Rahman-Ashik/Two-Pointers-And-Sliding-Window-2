#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long size, desiredSum;
    cin >> size >> desiredSum;
    vector<int> integerVector(size);
    for (int i = 0; i < size; i++)
    {
        cin >> integerVector[i];
    }

    long long firstTracker = 0;
    long long secondTracker = 0;
    long long sum = 0;
    long long count = 0;

    while (secondTracker < size)
    {
        if (sum >= desiredSum)
        {
            while (sum >= desiredSum)
            {
                sum = sum - integerVector[firstTracker];
                firstTracker++;

                count = count + (secondTracker - firstTracker + 1);

                if (sum < desiredSum)
                {
                    sum = sum + integerVector[secondTracker];
                }
            }
        }
        else
        {
            sum = sum + integerVector[secondTracker];
        }

        secondTracker++;
    }

    cout << count;

    return 0;
}