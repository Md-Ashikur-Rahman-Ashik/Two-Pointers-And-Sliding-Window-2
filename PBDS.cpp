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

    int size;
    cin >> size;
    pbds<pair<int, int>> p;

    for (int i = 1; i <= size; i++)
    {
        int integerValue;
        cin >> integerValue;
        p.insert({integerValue, i});
    }

    p.erase({3, 6});

    for (auto [x, y] : p)
    {
        cout << x << " " << y << "\n";
    }

    cout << "\n";

    return 0;
}