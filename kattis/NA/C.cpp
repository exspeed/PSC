#include<iostream>
#include<vector>
#include<utility>

#define FOR(i,a,b) for(int i = int(a); i < int(b); i++)

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main(){
    int vertex;
    cin >> vertex; 
   
    vi points;
    FOR(i, 0, vertex){
        int val; 
        cin >> val;
        points.push_back(val);
    }
    
    int edge; cin >> edge;
    vii edges;
    FOR(i, 0; edge){
    }
   
    FOR(i, 0, vertex){
        cout  << points[i] << " ";
    }



}









