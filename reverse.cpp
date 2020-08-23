#include<iostream>
#include<stack>
using namespace std;
int main()
{
  string name;
  cin>>name;
  stack<char> s;
  for(int i=0;i<name.size();i++)
  {
    s.push(name[i]);
  }
  while(!s.empty())
  {
    cout<<s.top();
    s.pop();
  }
  return 0; 
}