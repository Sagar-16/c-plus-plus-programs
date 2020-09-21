#include <iostream>
using namespace std;
int findOdd(int numbers[],int n){
int ans=0;
for(int i=0;i<n;i++){
  ans ^= numbers[i];
}
return ans;
}
int main() {
  int n;
  cin>>n;
  int numbers[100];
  for(int i=0;i<n;i++)
  {
    cin>>numbers[i];
  }
  cout<<findOdd(numbers,n);
  return 0;
}