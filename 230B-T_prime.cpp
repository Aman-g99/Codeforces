#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[1000024];

bool isprime(ll a){

}

int main(){
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll no;
		cin>>no;

		ll sq = sqrt(no);
		if(sq*sq!=no){
			cout<<"NO"<<"\n";
			continue;
		}

		if(isprime(sq)){
			cout<<" YES"<<"\n";
			continue;
		}
		else{
			cout<<"NO"<<"\n";
		}


	}
}