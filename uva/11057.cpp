#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> c, int M){
  int lb = -1, ub = c.size()-1, md = (ub + lb)/2;
  while(lb+1 < ub){
    if(M < c[md]){
      ub = md -1;
    }else if(M > c[md]){
      lb = md;
    }else{
      return md;
    }
    md = (ub+lb)/2;
  }
  if(c[ub] == M){
    return ub;
  }
  return -1;
}

void print(vector<int> C){
  for(int i: C){
    cout << i ;
  }cout << endl;
}
int main(){
  int N;
  while(cin >> N){
    vector<int> cost;
    for(int i = 0; i < N; i++){
      int b; cin >> b;
      cost.push_back(b);
    }
    sort(cost.begin(), cost.end());
    int M; cin >> M;
    int a = -1, b1=-1, b2=-1;

    for(int i = M/2; i > 0;i--){
      if((a =bs(cost, i)) > -1){
	b1 = cost[a];
	cost.erase(cost.begin() +a);
	if((a = bs(cost,M-i)) > -1){
	  b2 = cost[a];
	  break;
	}
      }
    }
    printf("Peter should buy books whose prices are %d and %d.\n\n", b1, b2);
  }
}
