#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long size, desiredSum;
    cin >> size >> desiredSum;
    vector<long long> integerVector(size);

    for (int i = 0; i < size; i++)
    {
        cin >> integerVector[i];
    }

    long long firstTracker = 0;
    long long secondTracker = 0;
    long long answer = LLONG_MAX;
    long long sum = 0;

    while (secondTracker < size)
    {
        sum += integerVector[secondTracker];

        if (sum >= desiredSum)
        {
            answer = min(answer, (secondTracker - firstTracker + 1));

            while (sum >= desiredSum && secondTracker >= firstTracker)
            {
                sum -= integerVector[firstTracker];
                firstTracker++;

                if (sum >= desiredSum)
                {
                    answer = min(answer, (secondTracker - firstTracker + 1));
                }
            }
        }

        secondTracker++;
    }

    if (answer != LLONG_MAX)
    {
        cout << answer;
    }
    else
    {
        cout << -1;
    }

    return 0;
}