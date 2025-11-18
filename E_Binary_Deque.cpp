#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int vectorSize, desiredSum;
        cin >> vectorSize >> desiredSum;
        vector<int> binaryVector(vectorSize);
        for (int i = 0; i < vectorSize; i++)
        {
            cin >> binaryVector[i];
        }

        long long int firstTracker = 0, secondTracker = 0;
        long long int answer = LLONG_MIN;
        long long int sum = 0;

        while (secondTracker < vectorSize)
        {
            sum += binaryVector[secondTracker];
            if (sum == desiredSum)
            {
                answer = max(answer, secondTracker - firstTracker + 1);
            }

            while (sum > desiredSum && firstTracker < secondTracker)
            {
                sum -= binaryVector[firstTracker];
                firstTracker++;
            }

            secondTracker++;
        }

        if (answer == LLONG_MIN)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << vectorSize - answer << "\n";
        }
    }
}