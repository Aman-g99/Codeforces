#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n+1];
	arr[0]=INT_MAX;
	for (int i = 1; i <= n; ++i)
	{
		cin>>arr[i];
	}

	int mx=INT_MIN,mn=INT_MAX,f=0,l=1,r=1,k=1,b=0,idx;

	for (int i = 1; i <=n; ++i)
	{
		if(k==0 && arr[i]>arr[i-1]){
			if((l==1 || mn>=arr[l-1]) && mx<=arr[i]){
				f=1;
				idx=i;
			}
			else{
				f=0;
			}
			break;
		}
		if(mx<arr[i]){
			mx=arr[i];
			l=i;
			k=1;
		}
		else k=0;
		if(mn>=arr[i] || k==0){
		 	mn=arr[i];
		 	r=i;	
		}

	}



	if(f==1){
		mn=arr[idx];
		for(int j=idx+1; j<=n; j++){
			if(arr[j]>=mn){
				mn= arr[j];
			}
			else {cout<<"no";
				b=1;
			}
		}
	}
	// else if(k==0)cout<<"no";
	else if(k==1){
		 cout<<"yes"<<"\n"<<1<<" "<<1;
		 b=1;
	}
	else if(mn<arr[l-1] && l!=1){
		cout<<"no";
		b=1;
	} 
	
	if(b==0){
		if(mn==arr[n]) cout<<"yes"<<"\n"<<l<<" "<<r;
		else cout<<"no";
	}
}