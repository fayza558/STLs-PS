#include <iostream>
#include<set>
using namespace std;

int main()
{
    int q;
    cin>>q;
    set<int>sett;
    while(q--)
    {
        int x;
        string s;
        cin>>s>>x;
        if(s=="insert")
        {
            sett.insert(x);
        }else if(s=="find")
        {
            if(sett.find(x)!=sett.end())
            {
                cout<<"found"<<endl;
            }else
            {
                cout<<"not found"<<endl;
            }
        }else if(s=="lower_bound")
        {
            auto it=sett.lower_bound(x);
            if(it!=sett.end())
            {
                cout<<*it<<endl;
            }else cout<<-1<<endl;

        }
        else if(s=="upper_bound")
        {
            auto it=sett.upper_bound(x);
            if(it!=sett.end())
            {
                cout<<*it<<endl;
            }else cout<<-1<<endl;
        }

    }
    return 0;
}
