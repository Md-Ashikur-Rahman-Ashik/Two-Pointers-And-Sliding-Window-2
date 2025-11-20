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
        int x;
        cin >> x;

        if (x % 2 == 1)
        {
            cout << 0 << '\n';
            continue;
        }

        if (x < 4)
        {
            cout << 1 << '\n';
            continue;
        }

        int count = 1;

        while (x >= 4)
        {
            x = x - 4;
            count++;
        }

        cout << count << '\n';
    }

    return 0;
}