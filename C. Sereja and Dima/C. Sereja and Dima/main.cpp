#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> dq;
    vector<int> v(n);


    for (int i = 0; i < n; i++) {
        cin >> v[i];
        dq.push_back(v[i]);
    }

    int s = 0, d = 0;
    bool turnS = true;

    while (!dq.empty()) {
        if (dq.front() >= dq.back()) {
            if (turnS) {
                s += dq.front();
            } else {
                d += dq.front();
            }
            dq.pop_front();
        } else {
            if (turnS) {
                s += dq.back();
            } else {
                d += dq.back();
            }
            dq.pop_back();
        }

        turnS = !turnS;
    }

    cout << s << " " << d << endl;
    return 0;
}
