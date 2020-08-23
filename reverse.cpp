#include<iostream>
#include<stack>
using namespace std;
int main()
{
  string name;//taking input
  cin>>name;
  stack<char> s;//stack created
  for(int i=0;i<name.size();i++)
  {
    s.push(name[i]);
  }
  while(!s.empty())
  {
    cout<<s.top();//printing reverse
    s.pop();
  }
  return 0; 
}