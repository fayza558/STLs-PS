#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map<int,int>mp;
        long long cntr=0;
        for(int i=0;i<n;i++)
        {
            int b=v[i]-i;

            if(mp.find(b)!=mp.end())
            {
                cntr+=mp[b];
            }
            mp[b]++;

        }
       cout<<cntr<<endl;
    }

    return 0;
}
