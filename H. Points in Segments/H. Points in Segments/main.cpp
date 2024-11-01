#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<bool> covered(m + 1, false);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++)
        {
            covered[j] = true;
        }
    }
    vector<int> uncovered;
    for (int i = 1; i <= m; i++)
    {
        if (!covered[i])
        {
            uncovered.push_back(i);
        }
    }
    int k = uncovered.size();
    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << uncovered[i] << " ";
    }
    cout << endl;

    return 0;
}

