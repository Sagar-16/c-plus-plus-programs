#include <iostream>
#include <utility>
#include<algorithm>
using namespace std;
void solve(int *,char *,int);

int main() {
  int a[]={4,2,1,0};
  char b[]={'A','B','C','D'};
  int n=4;
  solve(a,b,n);
}

void solve(int *a,char *b,int n)
{
  pair<int,char> pa[n];
  for(int i=0;i<n;i++)
  {
    pa[i]={a[i],b[i]};
  }
  sort(pa,pa+n);
  for(int i=0;i<n;i++)
  {
    cout<<pa[i].second<<" ";
  }  

}