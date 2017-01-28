#include<vector>
#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
  string tcstr;
  getline(cin,tcstr);
  int tc = atoi(tcstr.c_str());
  cout << tc;
  while(tc){
    string a; getline(cin,a);
    vector<string> sound;
    string b;
    while(true){
      getline(cin,b);
      cout << b;
      if(b== "what does the fox say?")break;
      
    }  
    tc--;
  }
  return 0;
}
