#include <iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<long long ,long long >mp;
        long long n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            long long  x;
            cin>>x;
            mp[x]++;

        }
        for(auto it:mp)
        {
            cout<<it.first<<" ";
            mp[it.first]--;
        }
        for(auto it:mp)
        {
            for(int i=0;i<it.second;i++)
            {
                cout<<it.first<<" ";
            }
        }
        cout<<endl;


    }
    return 0;
}
