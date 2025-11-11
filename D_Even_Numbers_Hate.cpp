#include <bits/stdc++.h>
using namespace std;

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

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
        }

        sort(integerVector.begin(), integerVector.end());

        long long int sum = 0;

        int count = 0;

        for (int i = 0; i < vectorSize; i++)
        {
            sum = sum + integerVector[i];

            if (sum % 2 == 1)
            {
                count++;
            }
            else
            {
                sum = sum - integerVector[i];
            }
        }

        cout << count << "\n";
    }

    return 0;
}