#include <string.h>
#include <map>
#include <iostream>
using namespace std;

typedef map<char, string> mcs;

int main(){
    string line;
    getline(cin, line);

    mcs map;
    map['a'] = "@";
    map['b'] = "8";
    map['c'] = "(";
    map['d'] = "|)";
    map['e'] = "3";
    map['f'] = "#";
    map['g'] = "6";
    map['h'] = "[-]";
    map['i'] = "|";
    map['j'] = "_|";
    map['k'] = "|<";
    map['l'] = "1";
    map['m'] = "[]\\/[]";
    map['n'] = "[]\\[]";
    map['o'] = "0";
    map['p'] = "|D";
    map['q'] = "(,)";
    map['r'] = "|Z";
    map['s'] = "$";
    map['t'] = "']['";
    map['u'] = "|_|";
    map['v'] = "\\/";
    map['w'] = "\\/\\/";
    map['x'] = "}{";
    map['y'] = "`/";
    map['z'] = "2";


    for(int i = 0; i < line.size() ; i++){
        char letter = tolower(line[i]);
        //cout << letter;

        if( map.count(letter)){
            cout << map[letter];
        }
        else {
            cout << letter;
        }

        
    }
}


