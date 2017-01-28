#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int dog;
    int bun;
    cin >> dog;
    int dog_packs[dog];

    for(int i = 0; i < dog; i++){
        cin >> dog_packs[i];
    }

    cin >> bun;
    int bun_packs[bun];
    for(int i = 0; i < bun; i++){
        cin >>bun_packs[i]; 
    }


    int INF = 102;
    int cost[100001];
    int cost2[100001];
    for(int i = 1; i < 100001;i++){
        cost[i]= INF; 
        cost2[i]= INF; 
    }

    cost[0]=0;
    cost2[0]=0;
    for(int j = 0; j < dog; j++){
     for(int i = 100000; i >=0; i--){
          if(i-dog_packs[j] >= 0){
              cost[i]= min(cost[i], cost[i -dog_packs[j]] + 1);
          }
      }
    }

    
    for(int j = 0; j < bun; j++){
     for(int i = 100000; i >=0; i--){
          if(i-bun_packs[j] >= 0){
              cost2[i]= min(cost2[i], cost2[i -bun_packs[j]] + 1);
          }
      }
    }

    int ans = INF * 2;
    for(int i = 1; i < 100001; i++){
        if(cost[i] != INF && cost2[i] != INF){
            ans = min(ans, cost[i]+ cost2[i]);
        }
    }
    if(ans == INF*2){
        cout << "impossible\n";
    }
    else{
        cout << ans << "\n";
    }
   
}
