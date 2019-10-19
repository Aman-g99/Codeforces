// MY SOLUTION
// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// int main(){
// 	ll n;
// 	cin>>n;

// 	ll arr[n],ans[n],sum=0;

// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>arr[i];
// 			ans[i]=arr[i]/2;
// 			sum+=ans[i];	
// 	}


// 	if(sum==0){
// 	}
// 	else if (sum<0){ 
// 			int a = abs(sum);
// 			int count=0;
// 			for (int i = 0; i < n; ++i)
// 			{
				
// 				if(count<a){
// 					if(ans[i]>=0 && (arr[i]%2)!=0 && arr[i]>0){
// 						ans[i]++;
// 						count++;
// 					}
// 				}
// 				else break;
// 			}
			
// 	}
// 	else if (sum>0){
// 			int a = abs(sum);
// 			int count=0;
// 			for (int i = 0; i < n; ++i)
// 			{
				
// 				if(count<a){
// 					if(ans[i]<=0 && (arr[i]%2)!=0 && arr[i]<0){
// 						ans[i]--;
// 						count++;
// 					}
// 				}
// 				else break;
// 			}
			
// 	}

// 	for (int i = 0; i < n; ++i)
// 		{
// 			cout<<ans[i]<<"\n";
// 		}

// }



// TOURIST'S SOLUTION
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int flag = 1;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      cout << x / 2 << '\n';
    } else {
      cout << (x + flag) / 2 << '\n';
      flag *= -1;
    }
  }
  return 0;
}
