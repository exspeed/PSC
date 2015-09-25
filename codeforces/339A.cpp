#include<iostream>
#include<cstring>
using namespace std;

int main(){
  string s; cin >> s;
  int i = 0;
  int one,two,three; one = two = three =0;
  while(s[i]){
    switch (s[i]){
    case '1':
      one++;break;
    case '2':
      two++;break;
    case '3':
      three++;break;
    }
    i++;
  }
  char sum[120];
  memset(sum,'\0', sizeof(sum));
  i = 0;
  while(one > 0 || two >0 || three > 0){
    if(one > 0){
      sum[i] = '1'; 
      one--;
    }
    else if (two > 0){
      sum[i] = '2';
      two--;
    }
    else if (three > 0){
      sum[i] = '3';
      three--;
    }
    i++;
    sum[i] = '+';
    i++;
  }
  sum[i-1] = '\0';
  cout << sum << endl;
}
