#include<iostream>
using namespace std;

int main(){
  string hi = "hello";
  string message; cin >> message;
  int i = 0, j =0;
  while(message[i]){
    if(message[i] == hi[j]){
      j++;
    }
    if(hi[j] == '\0'){
      cout << "YES\n";
      return 0;
    }
    i++;
  }

  cout << "NO\n";
  return 0;
}
