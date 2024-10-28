
#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c,d,aa;
    cin>>a>>b>>c>>d;
   int min1=min(min(a,c),d);
   int x=a-min1;
   int min2=min(x,b);
   cout<<(256*min1)+(32*min2)<<endl;

    return 0;
}
