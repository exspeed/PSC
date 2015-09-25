#include<iostream>
#include<stdio.h>
#include<cctype>
#include<cstring>
using namespace std;

int main(){

  char word[1200];
  memset(word, '\0', sizeof(word));
  scanf("%s", word);
  printf("%c%s\n",(char)toupper(word[0]),word+1);
    
}
