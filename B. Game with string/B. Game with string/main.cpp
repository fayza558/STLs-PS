#include <iostream>
#include<stack>
using namespace std;

int main()
{
     string s;
     cin>>s;
     int cntr=0;
     stack<char>st;
     for(int i=0;i<s.size();i++)
     {
         if(st.empty())
         {
             st.push(s[i]);
         }
         else
         {
             if(st.top()==s[i])
             {
                 st.pop();
                 cntr++;
             }else
             {
                 st.push(s[i]);
             }
         }
     }
     if(cntr%2)
     {
         cout<<"Yes"<<endl;
     }else{
         cout<<"No"<<endl;
     }
    return 0;
}
