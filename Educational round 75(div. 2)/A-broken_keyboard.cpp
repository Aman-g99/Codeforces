#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		int k=0;
		string temp;
		cin>>temp;
		map<char,int> mp;

		int l= temp.length();
		if(l==1){
			cout<<temp<<"\n";
			continue;
		}
		// for(int j=0;j<26;j++){

		// }
		for(int j=0;j<l;j++){
			if(temp[j]==temp[j+1]){
				if(mp[temp[j]]!=1){
					mp[temp[j]]=2;
					j++;
				}
			}
			else mp[temp[j]]=1;
		}
		for(auto it:mp){
			if(it.second==1){
				cout<<it.first;
				k=1;
			}
		}
		if(k==0) cout<<"";
		cout<<"\n";


	}
}