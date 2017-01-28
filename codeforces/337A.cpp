#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, m; cin >> n >> m;
  int f[m];
  for(int i = 0; i < m; i++){
    cin >> f[i];
  }

  sort(f, f+m);
  int mini = 100000;
  for(int i = 0 ; i < m-(n-1); i++){
    mini = min(f[i+(n-1)] - f[i], mini);
  }

  cout << mini << endl;
}
