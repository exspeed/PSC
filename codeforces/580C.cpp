#include<bits/stdc++.h>

using namespace std;
vector<bool> visited(100200,0);
int N,M, ans;
int cats[100200];
vector<vector<int> > tree(100200);


void dfs(int s, int kitty){
  visited[s] = 1;
  if(cats[s]){
    kitty++;
    if(kitty > M){
      return; 
    }
  }else{
    kitty = 0;
  }
  if(tree[s].size() == 1 && s){
    ans++;
    return;
  }

  for(int t: tree[s]){
    if(visited[t] == 0)
      dfs(t, kitty);
  }
    
}

int main(){
  cin >> N >> M;

  for(int i = 0; i < N; i++){
    cin >> cats[i];
  }
  for(int i = 0; i < N-1; i++){
    int a,b; cin >> a >> b;
    a--;
    b--;
    
    tree[a].push_back(b);
    tree[b].push_back(a);
  }

  //dfs
  dfs(0,0);
  cout << ans<< endl;
}
