#include<iostream>
#include<cctype>

using namespace std;

int main(){
  string remix; cin >> remix;
  int b;
  while((b =remix.find("WUB")) != -1){
    cout << b << endl;
    remix.replace(b, 3, " ");
  }
  cout << remix << endl;
}
