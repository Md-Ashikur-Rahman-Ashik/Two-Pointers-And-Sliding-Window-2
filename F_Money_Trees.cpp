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
    int vectorSize, desiredAmount;
    cin >> vectorSize >> desiredAmount;
    vector<int> integerVector(vectorSize), secondaryVector(vectorSize);

    for (int i = 0; i < vectorSize; i++)
    {
      cin >> integerVector[i];
    }

    for (int i = 0; i < vectorSize; i++)
    {
      cin >> secondaryVector[i];
    }

    long long sum = 0, answer = 0;
    long long firstTracker = 0, secondTracker = 0;

    while (secondTracker < vectorSize)
    {
      sum += integerVector[secondTracker];

      if ((secondTracker + 1 < vectorSize) && (sum <= desiredAmount) && (secondaryVector[secondTracker] % secondaryVector[secondTracker + 1] == 0))
      {
        answer = max(answer, secondTracker - firstTracker + 1);
      }
      else
      {
        if (secondTracker + 1 < vectorSize && (secondaryVector[secondTracker] % secondaryVector[secondTracker + 1] != 0))
        {
          if (sum <= desiredAmount)
          {
            answer = max(answer, secondTracker - firstTracker + 1);
          }

          firstTracker = secondTracker + 1;
          sum = 0;
        }
        else
        {
          if (sum <= desiredAmount)
          {
            answer = max(answer, secondTracker - firstTracker + 1);
          }

          sum -= integerVector[firstTracker];
          firstTracker++;
        }
      }

      secondTracker++;
    }

    cout << answer << '\n';
  }

  return 0;
}