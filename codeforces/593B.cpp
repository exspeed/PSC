#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
struct pairy{
    ll y1, y2;
    pairy(ll a, ll b){
        y1 = a;
        y2 = b;
    }
};

bool sorty(pairy a, pairy b)
{
    if(a.y1 < b.y1)
        return true;
    else if (a.y1 > b.y1)
        return false;
    else{
        if(a.y2 < b.y2)
            return true;
        else 
            return false;
    }
}

int main(){
    int n; cin >> n;
    ll x1, x2; cin >> x1 >> x2;
      
    vector<pairy> list;
    while(n--){
       ll k, b; cin >> k >> b; 
       ll y1 = x1 * k + b;
       ll y2 = x2 * k + b;
       pairy y(y1,y2);
       list.push_back(y);
    }

    sort(list.begin(), list.end(), sorty);

    ll below = list[0].y2;
     for(int i = 1; i < list.size(); i++) 
  {
      if(list[i].y2 >= below)
          below = list[i].y2;
       else{
           //cout << list[i].y2 << " " << below << endl;
           cout << "YES" << endl;
           return 0;
       }
  }
  cout << "NO" << endl;
  return 0;
}
