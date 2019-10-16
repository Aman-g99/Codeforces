#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k,temp,fedor,ans,count=0;
	cin>>n>>m>>k;
	vector<int> arr ;
	for(int i=0;i<m;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	cin>>fedor;

	for (int i = 0; i < m; ++i)
	{
		ans= fedor^arr[i];
		int a1 = __builtin_popcount (ans);

		if(a1<=k) count++;
	}

	cout<<count;
	

}