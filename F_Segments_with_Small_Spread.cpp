#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int vectorSize, desiredDifference;
    cin >> vectorSize >> desiredDifference;
    vector<long long int> integerVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    multiset<long long int> integerSet;

    int firstTracker = 0;
    int secondTracker = 0;
    long long int count = 0;

    while (secondTracker < vectorSize)
    {
        integerSet.insert(integerVector[secondTracker]);
        long long int minElement = *integerSet.begin();
        long long int maxElement = *--integerSet.end();

        if (maxElement - minElement <= desiredDifference)
        {
            count = count + (secondTracker - firstTracker + 1);
        }
        else
        {
            while (maxElement - minElement > desiredDifference && firstTracker <= secondTracker)
            {
                auto it = integerSet.find(integerVector[firstTracker]);
                if (it != integerSet.end())
                {
                    integerSet.erase(it);
                    if (!integerSet.empty())
                    {
                        minElement = *integerSet.begin();
                        maxElement = *--integerSet.end();
                    }
                }

                firstTracker++;
            }

            if (!integerSet.empty())
            {
                minElement = *integerSet.begin();
                maxElement = *--integerSet.end();

                if (maxElement - minElement <= desiredDifference)
                {
                    count = count + (secondTracker - firstTracker + 1);
                }
            }
        }

        secondTracker++;
    }

    cout << count;

    return 0;
}