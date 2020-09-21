#include<iostream>
using namespace std;
void printPattern(int number){
  for(int i=0;i<=number;i++)
  {
    char value = 65;
    for(int j =0;j<number-i;j++)
    {
      cout<<value;
      value +=1;
    }
    cout<<endl;
  }
}
int main()
{
  int n;
  cin>>n;
  printPattern(n);
  return 0;
}