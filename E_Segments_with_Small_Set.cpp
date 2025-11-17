#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long size, desiredUnique;
    cin >> size >> desiredUnique;

    vector<int> integerVector(size);
    for (int i = 0; i < size; i++)
    {
        cin >> integerVector[i];
    }

    map<int, int> integerMap;
    long long sum = 0, answer = 0, firstTracker = 0, secondTracker = 0;

    while (secondTracker < size)
    {
        if (integerMap[integerVector[secondTracker]] == 0)
        {
            sum++;
        }

        integerMap[integerVector[secondTracker]]++;

        if (sum > desiredUnique)
        {
            while (sum > desiredUnique)
            {
                integerMap[integerVector[firstTracker]]--;
                if (integerMap[integerVector[firstTracker]] == 0)
                {
                    sum--;
                }

                firstTracker++;
            }
        }

        answer += secondTracker - firstTracker + 1;
        secondTracker++;
    }

    cout << answer;

    return 0;
}