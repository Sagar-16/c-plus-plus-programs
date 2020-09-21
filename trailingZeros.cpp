#include<iostream>
using namespace std;
int findTrail(int number){
  int result=0;
  for(int d=5;number/d>=1;d=d*5)
  {
    result += number/d;
  }
  return result;
}
int main()
{
  int n;
  cin>>n;
  cout<<findTrail(n);
  return 0;
}