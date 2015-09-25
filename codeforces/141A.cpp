#include<bits/stdc++.h>

using namespace std;

int main(){
  string a,b,c;
  cin >> a >> b >> c;
  a = a.append(b);
  int alpha[26]= {0};
  for(int i = 0; i < a.size(); i++){
    alpha[a[i] - 'A']++;
  }
  for(int i = 0; i < c.size(); i++){
    alpha[c[i] - 'A']--;
  }
  for(int i = 0; i < 26; i++){
    if(alpha[i]){
      cout << "NO" <<endl;
      return 0;
    }
  }
  cout << "YES" <<endl;
}

