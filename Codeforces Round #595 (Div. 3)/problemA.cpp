#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		int n;
		cin>>n;
		int arr[n];
		int tms=1;
		for(int j=0; j<n;j++){
			cin>>arr[j];
		}
		sort(arr,arr+n);
		for(int j=0;j<n-1;j++){
			if(arr[j+1]-arr[j]<=1){
				tms=2;
				break;
			}
		}
		cout<<tms<<"\n";
	}
}