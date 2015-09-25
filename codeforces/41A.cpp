#include<iostream>

using namespace std;

int main(){
  string a,b; cin >> a >> b;
  for(string::iterator it  = a.begin(), bit = b.end()-1;
      it != a.end(); it++, bit--){
    if(*it != *bit){
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
}
