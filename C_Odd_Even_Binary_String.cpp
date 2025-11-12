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

        bool flag = true;

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];

            if (integerVector[i] == 0)
            {
                if (i + 1 < vectorSize && integerVector[i + 1] != 1)
                {
                    flag = false;
                    break;
                }
                else if (integerVector[i] == 0 && i + 1 > vectorSize)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}