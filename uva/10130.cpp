#include <bits/stdc++.h>
using namespace std;
int main(){
  int tc; cin >> tc;
  while(tc--){
    int N; cin >> N;
    int Parr[N], Warr[N];
    for(int i = 0; i< N; i++){
      cin >> Parr[i] >> Warr[i];
    }
    int G; cin >> G;
    int fam[G], maxi= 0;
    
    for(int i = 0; i < G; i++){
      cin >>fam[i];
      maxi = max(maxi, fam[i]);
    }
    ///   #items #weight = value
    int dp[N+1][maxi+1];
    memset(dp, 0, sizeof(dp));
    
    for(int i = 1; i <= N; i++ ){
      for(int j= 1; j <= maxi; j++){
	if(Warr[i-1] <= j && i == 1){
	  dp[i][j] = Parr[i-1];
	  continue;
	}else if(i == 1 && Warr[i-1] > j){
	  continue;
	}
	if( Warr[i-1] <= j){
	  dp[i][j] = max(Parr[i-1]+ dp[i-1][j-Warr[i-1]], dp[i-1][j]);
	}else{
	  dp[i][j] = dp[i-1][j];
	}
      }
    }

    int sum = 0;
    for(int i = 0; i < G;i++){
      sum +=dp[N][fam[i]];
    }
    cout << sum<<endl;
  }
  
}
