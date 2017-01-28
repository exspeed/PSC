#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){

  int tc; cin >> tc;
  for(int a = 1; a <= tc; a++){
    ll ans = 0, L, M, N; cin >> L >> M >> N;
    L= L*L;
    ll mult =1;
   
    for(int i = N, j =1; i >= 1; i--, j++){
      mult = (mult *L) %10000000000007;
      L--;
      if(j >= M){
	ans += mult;
	ans = ans %  10000000000007;
      }
    }

    printf("Case %d: %ld\n", a, ans);
  }
  
}
