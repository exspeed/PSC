#include <string.h>
#include <iostream>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0 ; i < tc; i++){
        string cost;
        cin >> cost; 
        cout << cost.size()<< '\n';
    }
}

