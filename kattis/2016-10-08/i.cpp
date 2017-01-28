

#include<iostream>

using namespace std;

int rotate(int,int,int);

int main(){
  int n, m, k; cin >> n >> m >> k;
  rotate(n,m, k);
  /*
  char arr[n][n];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> arr[i][j];
    }
  }
  */

}

int rotate (int i, int j, int n){
  int m = n/2;
  int adj =  n % 2 == 0? 1 : 0;
  if (i < m && j < m){
    i = m- adj + (m-i);
  }
  else if(i >=m && j < m){
    j = (j -m) + m-adj ;
  }
  else if(i >= m && j >= m){
    i = (i- m) + m-adj;
  }
  else{
    j = m-adj + (m-j);
  }
  cout << i << ' ' << j << endl;
}
