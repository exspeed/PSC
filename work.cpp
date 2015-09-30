#include<iostream>
#include<stdio.h>
using namespace std;


int getTime(int shr, int smin, int ehr, int emin){
  int min;
  if(emin >= smin){
    min  = emin - smin;
  }else{
    min = (60 -smin) + emin;
    shr++;
  }
  int hr = shr > ehr ? (12 - shr) + ehr : ehr -shr;

  return (min + 60*hr);
}

// format: start time (hr:min) end time (hr:min)
int main(){
  printf("number of guards: ");
  int N; cin >> N;
  printf("rotation time: ");
  int rotation; cin >> rotation;
  int time[N][4];
  int totalTime[N];

  for(int i = 0; i < N; i++){
    scanf("%d:%d %d:%d",&time[i][0], &time[i][1], &time[i][2],&time[i][3]);
    totalTime[i] = getTime(time[i][0], time[i][1], time[i][2],time[i][3]);
  }

  
  cout << totalTime[0]<< endl;

  // works every 30 m  int rotations = 60;ins
  int possible = totalTime[0] % rotation;
  if(possible == 0){
    cout << "YES\n";
  }
  
  

  return 0;

}
