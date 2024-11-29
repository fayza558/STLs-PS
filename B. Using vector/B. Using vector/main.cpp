#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    string s;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        cin>>s;
        if(s=="pop_back")
        {
            v.pop_back();
        }else if(s=="front")
        {
            cout<<v.front()<<endl;
        }else if(s=="back")
        {
            cout<<v.back()<<endl;
        }
        else if(s=="sort")
        {
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            sort(v.begin()+l,v.begin()+r+1);
        }
        else if(s=="print")
        {
            int indx;
            cin>>indx;
            cout<<v[indx-1];
        }
        else if(s=="back")
        {
            cout<<v.back()<<endl;
        }
          else if(s=="reverse")
        {
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            reverse(v.begin()+l,v.begin()+r+1);
        }
        else if(s=="push_back")
        {
            int num;
            cin>>num;
            v.push_back(num);
        }

    }
    return 0;
}
