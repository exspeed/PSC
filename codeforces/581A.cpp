#include<bits/stdc++.h>

using namespace std;

int main(){
  int a,b; cin >> a >> b;
  int mini = min(a, b);
  if(mini - a == 0){
    printf("%d %d\n", mini, (b-mini)/2);
  }else
    printf("%d %d\n", mini, (a-mini)/2);
  
  
  return 0;
}
