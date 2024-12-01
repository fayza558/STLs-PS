#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare (const pair<string,int>& a ,const pair<string,int>&b)
{
    if(a.second!=b.second)
    {
        return a.second>b.second;
    }
    return a.first<b.first;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<string,int>>v;
    for(int i=0;i<n;i++)
    {
        string key;
        int value;
        cin>>key>>value;
        v.push_back({key,value});
    }
    sort(v.begin(),v.end(),compare);
    for(const auto& vec:v)
    {
        cout<<vec.first<<" "<<vec.second<<endl;
    }

    return 0;
}
