#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        deque<int> dq;
        dq.push_back(v[0]);

        for (int i = 1; i < n; i++) {
            if (v[i] < dq.front()) {
                dq.push_front(v[i]);
            } else {
                dq.push_back(v[i]);
            }
        }

        for (int q : dq) {
            cout << q << " ";
        }
        cout << endl;
    }

    return 0;
}
