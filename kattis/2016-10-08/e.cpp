#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,m,s,t; cin >> n>> m>> s >> t;

  int graph[n][n];
  for(int i =0; i < n; i++){
    for(int j =0; j < n; j++){
      graph[i][j] = 0;
    }
  }
  for(int i = 0; i< m; i++){
    int x, y; cin >> x >> y;
    graph[x][y] = 1;
    graph[y][x] = 1;
  }
  
  long long squack[t][n];
  
  for(int i =0; i< t; i++){
    for(int j = 0; j < n; j++){
      squack[t][n] =0;
    }
  }
  cout << s << "lool";
  squack[s][0] = 1;

  for(int i =1; i< t; i++){
    for(int j = 0; j < n; j++){
      if(squack[i-1][j] > 0){
	for(int k = 0; k < n; k++){
	  if(graph[j][k]){
	    squack[t][k] += squack[t-1][k];
	  }
	}
      }
    }
  }
  long long total = 0;
  for(int i=0; i < n; i++){
    total += squack[i][t];
  }

  cout << total << endl;
}
