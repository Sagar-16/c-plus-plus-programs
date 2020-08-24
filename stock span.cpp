#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
  int array[10]={15,13,12,14,16,8,6,4,10,30}; //input array
  stack<int>s;  //stack created
  s.push(0);
  for(int i=0;i<=9;i++){
    while(s.empty()==false && array[s.top()]<=array[i]){
      s.pop();
    }
    int span = (s.empty())?(i+1):(i-s.top()); // calculating span
    cout<<span<<" ";
    s.push(i); //pushing into the stack 
  }
  return 0;
}