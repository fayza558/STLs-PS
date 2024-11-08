#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<tuple<int, int, int>> operations;

        for (int i = 0; i < n; i++)
        {
            int minIndex = i;
            for (int j = i; j < n; j++)
            {
                if (v[j] < v[minIndex])
                {
                    minIndex = j;
                }
            }
            if (minIndex != i)
            {
                int d = minIndex - i;
                operations.push_back({i + 1, minIndex + 1, d});
                rotate(v.begin() + i, v.begin() + minIndex, v.begin() + minIndex + 1);
            }
        }

        cout << operations.size() << endl;
        for (const auto& op : operations)
        {
            int l, r, d;
            tie(l, r, d) = op;
            cout << l << " " << r << " " << d << endl;
        }
    }

    return 0;
}
