
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> sett;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                sett.insert(-x);
            }
        }
        int cntr = 0;
        for (auto it =sett.begin();it!=sett.end();it++)
        {
            if((*it/2)% 2 == 0)
            {
                sett.insert((*it)/2);
            }
            cntr++;
        }
        cout << cntr << endl;
    }

    return 0;
}

//another solution
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cntr=0;
        map<int,bool>mp;
        while(n--)
        {
            int x;
            cin>>x;
            while(x%2==0&&mp[x]==0)
            {
                mp[x]=1;
                cntr++;
                x/=2;
            }
        }
        cout<<cntr<<endl;
    }

    return 0;
}

