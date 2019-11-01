#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int q;
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		int n;
		ll d=1;
		cin>>n;
		int arr[n+1];
		arr[0]=-1;
		for(int j=1; j<n+1;j++){
			cin>>arr[j];
		}
		for(int j=1; j<n+1;j++){
			int temp = arr[j];
			while(temp!=j){
				d++;
				temp=arr[temp];
			}
			cout<<d<<" ";
			d=1;
		}
		cout<<"\n";
	}
}