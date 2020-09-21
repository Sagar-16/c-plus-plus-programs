#include <iostream>
using namespace std;

int main() {
  int number,prec;
  cout<<"Enter number :";
  cin>>number;
  cout<<"Enter precison ";
  cin>>prec;
  float ans=0;
  float inc=1;
  for(int i=0;i<=prec;i++)
  {
  while(ans*ans<=number){
    ans += inc;
  }
  ans = ans-inc;
  inc = inc/10;
  }
  cout<<ans;

  return 0;
}