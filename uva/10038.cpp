#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n){
    int arr[n];
    bool jolly[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    for(int i = 1; i < n; i++ ){
      int diff = abs(arr[i]- arr[i-1]);
      if(diff < n){
	jolly[diff] = true;
      }
    }
    bool jol = true;
    for(int e = 1; e < n;e++){
      if(jolly[e] == false){
	jol = false;
	break;
      }
    }
    if(jol && n != 1){
      cout << "Jolly" << endl;
    }else{
      cout << "Not Jolly" << endl;
    }
  
  }
    
}
