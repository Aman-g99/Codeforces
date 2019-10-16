#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a;
	cin>>n>>m;
	long long t=0,in=1;
	for (int i = 0; i < m; ++i)
	{
		cin>>a;
		if(a>=in) {
			t+=a-in;
			in=a;
		}
		else{
			t+=(n-in)+a;
			in=a;
		} 
	}
	cout<<t;
}