#include<bits/stdc++.h>
using namespace std;


int main(){
  string letter;

  int index = 0; 
  while(cin >> letter){
    list <char> link;
    list<char>::iterator it = link.begin();
    for(int i = 0; i < letter.length(); i++){
      if(letter[i] == ']'){
	it = link.end();
      }else if(letter[i] == '['){
	it = link.begin();
      }
      else{
	link.insert(it, letter[i]);
      }

    }
    int size = link.size();
    for(int i = 0; i < size;i++){
      cout << link.front();
      link.pop_front();
    }
    cout << endl;
    
  }
}

