#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int number;
  int max = INT32_MIN;
  int min = INT32_MAX;
  while(n>0)
  {
    cin>>number;
    if (number < min)
    {
      min = number;
    }
    if (number > max)
    {
      max = number;
    }
    n = n-1;
  }
  cout<<"Minimum number is "<<min<<endl;
  cout<<"Maximum number is "<<max<<endl;
  return 0;
}