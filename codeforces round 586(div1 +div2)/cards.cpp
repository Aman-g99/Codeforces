#include<bits/stdc++.h>
using namespace std;

int main(){
	char n ='n',z='z',t;
	int ans=0,k,zero=0,one=0;
	cin>>k;
	for (int i = 0; i < k; ++i)
	{
		cin>>t;
		if(t==z) zero++;
		if(t==n) one++;
	}
	if(one>0){
		while(one>0){
			cout<<1<<" ";
			one--;
		}
	}
	if(zero>0){
		while(zero>0) {
		    cout<<0<<" ";
		    zero--;
		}
	}
	return 0;
}