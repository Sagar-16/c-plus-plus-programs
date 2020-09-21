#include <iostream>
using namespace std;
void findPosition(char s[],int x,int y){
  int length=0;
  int i=0;
  while(s[i]!='\0'){
    length += 1;
    i+=1;
  }
  for(int i=0;i<length;i++)
  {
    if(s[i]=='n'){
      y+=1;
    }
    else if(s[i]=='e'){
      x+=1;
    }
    else if(s[i]=='s'){
      y -=1;
    }
    else{
      x -=1;
    }
  }
  cout<<x<<" "<<y;

}
int main() {
  int x=0,y=0;
  char s[]="nnnsseewe";
  findPosition(s,x,y);
  return 0;
}