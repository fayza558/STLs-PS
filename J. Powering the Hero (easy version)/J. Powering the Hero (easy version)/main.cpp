#include <iostream>
#include<queue>
using namespace std;

int main()
{
    int t;
    cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         priority_queue<long long >pq;
         long long  sum=0;
         for(int i=0;i<n;i++)
         {
             int x;
             cin>>x;
             if(x==0&&pq.empty())
             {
                 continue;
             }else if(x==0&&!pq.empty())
             {
                 sum+=pq.top();
                 pq.pop();

             }
             else
             {
                 pq.push(x);
             }
         }
         cout<<sum<<endl;
     }
    return 0;
}

#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<long long > pq;
        long long  sum = 0;

        for (int i = 0; i < n; i++) {
            long long  x;
            cin >> x;

            if (x == 0) {

                if (!pq.empty()) {
                    sum += pq.top();
                    pq.pop();
                }
            } else {
                pq.push(x);
            }
        }

        cout << sum << endl;
    }
    return 0;
}
