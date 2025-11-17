#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int vectorSize, desiredSum;
    cin >> vectorSize >> desiredSum;
    vector<pair<long long int, long long int>> pairVector;
    pairVector.push_back({0, 0});
    for (int i = 1; i <= vectorSize; i++)
    {
        long long int integerValue;
        cin >> integerValue;
        pairVector.push_back({integerValue, i});
    }

    sort(pairVector.begin(), pairVector.end());

    vector<long long int> finalVector;

    bool flag = false;

    for (int i = 1; i <= vectorSize; i++)
    {
        long long int sumOfThree = 0;
        if (i + 1 <= vectorSize && i + 2 <= vectorSize)
        {
            sumOfThree = pairVector[i].first + pairVector[i + 1].first + pairVector[i + 2].first;
        }

        for (int j = i + 3; j <= vectorSize; j++)
        {
            long long int finalSum = sumOfThree + pairVector[j].first;
            if (finalSum == desiredSum)
            {
                flag = true;
                finalVector.push_back(pairVector[i].second);
                finalVector.push_back(pairVector[i + 1].second);
                finalVector.push_back(pairVector[i + 2].second);
                finalVector.push_back(pairVector[j].second);
                break;
            }
        }

        if (flag)
        {
            break;
        }
    }

    if (flag)
    {
        sort(finalVector.begin(), finalVector.end());

        for (auto integerValue : finalVector)
        {
            cout << integerValue << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}