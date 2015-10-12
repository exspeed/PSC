#include<bits/stdc++.h>

using namespace std;

int main(){
  string a,b; cin >> b >> a;
  int alpha[26] = {0};
  for(int i = 0; i < a.size(); i++){
    char letter = (char)tolower(a[i]);
    alpha[letter-'a']++;
  }
  for(int i = 0; i< 26;i++){
    if(alpha[i] == 0){
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  
  return 0;
}
