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
        int vectorSize;
        cin >> vectorSize;
        vector<int> integerVector(vectorSize);
        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
        }

        long long answer = 0;
        pbds<int> p;

        for (int i = vectorSize - 1; i >= 0; i--)
        {
            answer += p.order_of_key(integerVector[i]);
            p.insert(integerVector[i]);
        }

        cout << answer << "\n";
    }

    return 0;
}