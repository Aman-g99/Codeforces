#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,a;
	cin>>n>>m>>a;
	long long sum=1;
	// if(n/m!=0) sum+=(n/m)+1;
	// else
	sum*=n%a!=0?(n/a)+1:n/a;
	// cout<<n/a;
	sum*=(m%a!=0)?(m/a)+1:m/a;
	cout<<sum;
	return 0;
}