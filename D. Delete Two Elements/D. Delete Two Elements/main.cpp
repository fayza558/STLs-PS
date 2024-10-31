
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+10;
int a[N];
void fayza(){
	map<int,int> mp;
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i]*2;
	}
	if(sum%n!=0){
		cout<<0<<endl;;
		return;
	}
	sum/=n;
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=mp[sum-a[i]];
		mp[a[i]]++;
	}
	cout<<ans<<endl;

}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		fayza();
	}


	return 0;
}

