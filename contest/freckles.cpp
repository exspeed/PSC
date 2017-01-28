#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
typedef pair<double, double> dd;
typedef pair<int,int> ii;
typedef pair<double,ii> edge;
vector<int> ds, dr;
int findSet(int i) {return ds[i] == i ? i : (ds[i] = findSet(ds[i]));}
void unionSet(int i, int j) {
  int x = findSet(i), y = findSet(j);
  if (dr[x] < dr[y]) ds[x] = y;
  else if (dr[x] > dr[y]) ds[y] = x;
  else {ds[x] = y; dr[y]++;}
}
bool sameSet(int i, int j) {return findSet(i) == findSet(j);}



int main(){
  int tc; cin >> tc;
  while(tc--){
    int p; cin >> p;
    vector<dd> point;
    for(int i = 0; i < p; i++){

      dd dot;
      cin >>dot.first >> dot.second;
      point.push_back(dot);
    }

    //create a complete graph with weight
    vector <edge> graph;
    for(int i = 0; i < p; i++){
      for(int j = 0; j < i; j++){
	double x1 =point[i].first;
	double y1 = point[i].second;
	double x2 = point[j].first;
	double y2 = point[j].second;
	double w = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	edge e(w,ii(i,j));
	graph.push_back(e);
      }
    }

    // sort this shit
    sort(graph.begin(), graph.end());

    // pick them sexy edges @#$%^&!
    double ans =0;
    dr.assign(p, 0);
    ds.resize(p);
    iota(begin(ds), end(ds), 0);
    
    for(int i = 0; i <graph.size(); i++){
      if(!sameSet(graph[i].second.first,graph[i].second.second )){
	ans += graph[i].first;
	unionSet(graph[i].second.first,graph[i].second.second);
      }
    }


    printf("%.2f\n",ans);
    
    
    
    
  }
  return 0;
}
