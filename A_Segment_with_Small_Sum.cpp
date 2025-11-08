#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int vectorSize, desiredSum;
    cin >> vectorSize >> desiredSum;
    vector<int> integerVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    int firstTracker = 0;
    int secondTracker = 0;
    long long int sum = 0;
    int count = 0;

    while (secondTracker < vectorSize)
    {
        sum = sum + integerVector[secondTracker];
        if (sum <= desiredSum)
        {
            count = max(count, secondTracker - firstTracker + 1);
        }
        else
        {
            sum = sum - integerVector[firstTracker];
            firstTracker++;
        }

        secondTracker++;
    }

    cout << count;

    return 0;
}