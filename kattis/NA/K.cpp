#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int tc; 
    cin >> tc;

    for (int i = 0; i < tc; i++){
        int l1, a1, l2, a2, lt, at;
        cin << l1 << a1 << l2 << a2 << lt << at;
            
        int leg = lt / min(l1 , l2); 
        int arm = at / min (a1, a2);

        int r;
        if (min (l1, l2) == l1){
            r = l1
        }else{
            r = l2
        }
        int c;
        if (min (l1, l2) == l1){
            c = a1
        }else{
            c = a2
        }

        int arr[r][c];
        for(int j = 0; j < r; j++){
            for(int k = 0; k < c; k++){
                }
        }
        

    }

}
