// 10034: freckles 

#include<math.h>
#include<vector>
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>

using namespace std;

double x[150], y[150];
bool taken[150] = {false};

double dist(int i, int j){
  double a = x[i]-x[j], b = y[i]-y[j];
  return sqrt(a*a + b*b);
}

double visit(int size, double total){
  double slength = 0xefffffff;
  int closest = 0;
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      if(!taken[i]){
	if(taken[j]){
	  double length = dist(j, i);
	  if(slength > length){
	    slength = length;
	    closest = i;
	  }
	}
      }
    }
  }

  taken[closest] = true;
  total += slength;

  for(int i = 0; i < size; i++){
    if(!taken[i]){
      total = visit(size, total);
      break;
    }
  }

  return total;
}

int main(){

  int TC; scanf("%d\n",&TC);

  while(TC--){
    int n; cin >> n;

    for(int i = 0; i < n; i++){
      scanf("%lf %lf", &x[i] ,&y[i]);
    }
    taken[0] = true;
    double total = visit(n,0);
    printf("%.2lf\n", round(total*100)/100);
    memset(taken, false, sizeof(taken));
  }
  return 0;
}
