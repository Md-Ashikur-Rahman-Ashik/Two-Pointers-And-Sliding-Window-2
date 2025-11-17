#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int vectorSize;
        cin >> vectorSize;
        vector<int> integerVector(vectorSize + 1);
        for (int i = 1; i <= vectorSize; i++)
        {
            cin >> integerVector[i];
        }

        long long int evenCount = 0;
        long long int oddCount = 0;

        for (int i = 1; i <= vectorSize; i++)
        {
            if (i % 2 == 0)
            {
                evenCount += integerVector[i];
            }
            else
            {
                oddCount += integerVector[i];
            }
        }

        if (evenCount > oddCount)
        {
            cout << evenCount << "\n";
        }
        else
        {
            cout << oddCount << "\n";
        }
    }

    return 0;
}