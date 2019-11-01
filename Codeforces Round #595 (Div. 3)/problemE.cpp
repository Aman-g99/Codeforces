#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
	ll n,c;
	cin>>n>>c;
	vector<ll> a,b;
	for (int i = 0; i < n-1; ++i)
		{	int temp;
			cin>>temp;
			a.push_back(temp);
		}
	for (int i = 0; i < n-1; ++i)
		{	int temp;
			cin>>temp;
			b.push_back(temp);
		}	
	ll mn=0,temp=c;
	int k=0;
	cout<<mn<<" ";
	for(int j=0;j<n-1;j++){
		if(k==1) temp=0;
		else temp =c;
		if(mn+a[j]<mn+b[j]+temp){
			mn+=a[j];
			k=0;
		}
		else{
			mn+=(b[j]+temp);
			k=1;
		}
		cout<<mn<<" ";
	}
}	