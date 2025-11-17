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
        vector<int> integerVector(vectorSize);
        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
        }

        int minValue = integerVector[0];
        int count = 0;
        for (int i = 0; i < vectorSize; i++)
        {
            if (integerVector[i] >= minValue)
            {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}