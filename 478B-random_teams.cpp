#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll nc2(ll n){
	if(n>1) return ((n*(n-1))/2);
	else return 0;
}

int main(){
	ll tm,mem,mn,mx;
	cin>>mem>>tm;
	
	// for max
	mx = nc2(mem - (tm-1));

	// for min
	ll q = mem/tm;
	ll  r = mem%tm;
	mn = r*nc2(q+1);
	mn+= (tm-r)*nc2(q);

	cout<<mn<<" "<<mx;

}