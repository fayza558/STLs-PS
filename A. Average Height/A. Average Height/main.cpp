#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;

    vector <int>v(n);
    vector <int>v1;
    vector <int>v2;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            v1.push_back(v[i]);
        }
        else
        {
            v2.push_back(v[i]);
        }
    }
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }

     for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
