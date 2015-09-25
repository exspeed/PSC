#include<bits/stdc++.h>

using namespace std;

int main(){
  string s; cin >>s;
  int upper =0, lower = 0, i =0;
  while(s[i]!= '\0'){
    if(s[i] < 'a')
      upper++;
    else
      lower++;
    i++;
  }

  i = 0;
  while(s[i]!='\0'){
    if(upper > lower){
      cout << (char)toupper(s[i]);
    }
    else
      cout << (char)tolower(s[i]);
    i++;
  }
  cout << endl;
  return 0;
}
