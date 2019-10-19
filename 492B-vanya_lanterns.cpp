#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double l;
	cin>>n>>l;
	double ln[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>ln[i];
	}

	sort(ln,ln+n);

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<ln[i]<<"*";
	// }

	double d = max(ln[0]-0,l-ln[n-1]);
	for (int i = 0; i < n-1; ++i)
	{
		d = max(d,((ln[i+1]-ln[i])/2.0));
	}
	cout.precision(10);

	cout<< fixed <<d;


}