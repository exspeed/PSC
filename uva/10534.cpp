#include<bits/stdc++.h>

using namespace std;

void print(vector<int> v){
  for(int i = 0 ; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){
  int len;
  while(cin>>len){
    int arr[len], inc_dp[len], dec_dp[len];
    vector<int> inc, dec;
    cin >> arr[0];
    inc.push_back(arr[0]);
    inc_dp[0] = 1;
    for(int i =1; i < len; i++){
      cin >> arr[i];
      if(inc.back() < arr[i]){
	inc.push_back(arr[i]);
      }
      else if(inc.back() > arr[i] && inc[inc.size()-2] < arr[i]){
	inc.pop_back();
	inc.push_back(arr[i]);
      }
      inc_dp[i] = inc.size();
    }

    dec.push_back(arr[len-1]);
    dec_dp[0] = 1;
    for(int i = len-1, j = 0; i >= 0; i--, j++){
      if(dec.back() < arr[i])
	dec.push_back(arr[i]);
      else if(dec.back() > arr[i] && dec[dec.size()-2] < arr[i]){
	dec.pop_back();
	dec.push_back(arr[i]);
      }
      dec_dp[j] = dec.size();
    }

    int ans = 0;
    for(int i = 0; i < len; i++){
      ans = max(ans, min (inc_dp[i], dec_dp[len-1-i]));
    }
    cout << ans* 2 -1 << endl;
    /*
    for(int i = 0; i < len; i++){
      cout << inc_dp[i] << " ";
      }cout << endl;
    for(int i = 0; i < len; i++){
      cout << dec_dp[i] << " ";
    }cout << endl;

    */
  }
  return 0;
}
