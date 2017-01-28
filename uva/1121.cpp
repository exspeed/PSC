#include<bits/stdc++.h>

using namespace std;
int find(vector<long> seq, long N, long S){
  for(int i = 1; i < N; i++){
    for(int j = i; j < N;j++){
      if(seq[j]-seq[j-i] >= S){
	return i;
      }
    }
  }
}

void print(vector<int> a){
  for(int i:a ){
    cout << i << " ";
  }cout << endl;
}

int main(){
  long N, S;
  while(scanf("%ld %ld\n", &N,&S) == 2){
    vector<long> seq(N);
    seq.push_back(0);
    for(int i = 1; i <= N; i++){
      long a; cin >> a;
      seq[i] = seq[i-1] + a;
    }
    cout << find(seq, N+1, S)<< endl;
  }
}
