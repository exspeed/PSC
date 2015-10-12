#include<iostream>
#include<bitset>
#include<cstring>
using namespace std;

int main(){


  char lucky[40];
  memset(lucky, '\0', sizeof(lucky));
  cin >> lucky;
  int b =1;
  for(int i =0; lucky[i] != '\0'; i++){
    b = b << 1;
    if(lucky[i] != '4'){
      b = b | 1;
    }
  }

  cout << b-1 << endl;
}
