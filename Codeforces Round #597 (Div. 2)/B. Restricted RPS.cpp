#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n; cin>>n;
		int a,b,c; cin>>a>>b>>c;
		map<char,int> mp;
		mp['R']=0;
		mp['P']=0;
		mp['S']=0;
		int l=0;
		string s,ans="";
		cin>>s;
		char f;
		for(int j=0;j<n;j++){
				mp[s[j]]++ ;
				if(mp['P']<b){
					mp['P']++;	
					ans+='P';
				}
				else l++;
				
			
			if(s[j]=='P'){ 
				if(mp['S']<c) {
					mp['S']++;
					ans+='S';
				}
				else l++;
				
			}
			if(s[j]=='S'){ 
				if(mp['R']<a) {
					mp['R']++;
					ans+='R';
				}
				else l++;
				
			}
		}
		if(l<=n-((n/2)+1)) {
			cout<<"Yes"<<"\n"<<ans<<"\n";
		}
		else cout<<"no"<<"\n";


	}

}