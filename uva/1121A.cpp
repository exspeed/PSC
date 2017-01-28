#include<bits/stdc++.h>

using namespace std;

int main(){
  long N, S;
  while(scanf("%ld %ld\n", &N,&S) == 2){
    queue<int> seq;
    int csum = 0;
    int ans = 0x7fffffff;

    for(int i = 0; i < N; i++){
      int a; cin >> a;
      seq.push(a);
      csum += a;
      while(csum >= S){
	ans = min(ans, (int)seq.size());
	csum -= seq.front();
	seq.pop();
      }
    }
    ans= ans== 0x7fffffff ? 0 : ans;
    cout << ans << endl;
  }
}
