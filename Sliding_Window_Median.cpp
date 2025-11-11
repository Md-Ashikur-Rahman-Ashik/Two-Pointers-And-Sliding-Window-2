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

    int size, windowSize;
    cin >> size >> windowSize;
    vector<int> integerVector(size);
    pbds<pair<int, int>> p;

    for (int i = 0; i < size; i++)
    {
        cin >> integerVector[i];
    }

    int firstTracker = 0;
    int secondTracker = 0;

    while (secondTracker < size)
    {
        p.insert({integerVector[secondTracker], secondTracker});
        if ((secondTracker - firstTracker + 1) == windowSize)
        {
            int index = windowSize / 2;
            if (windowSize % 2 == 0)
            {
                index--;
            }

            auto it = p.find_by_order(index);
            cout << it->first << " ";
            p.erase({integerVector[firstTracker], firstTracker});
            firstTracker++;
        }

        secondTracker++;
    }

    return 0;
}