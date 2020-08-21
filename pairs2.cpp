#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
vector<int> call(int *,int,int);

int main() {
  // cout << "Hello World!\n";
  int array[]= {10,20,30,40,50,60};
  int k=31;
  int size=6;
  vector<int >res = call(array,k,size);
  for(int x:res){
    cout<<x<<" "<<endl;
  }

}
vector<int> call(int  array[],int k,int size)
{
  vector<int> v;
  for(int i=0;i<size;i++)
  {
    if(array[i]<k){
      v.push_back(array[i]);
    }
  }
  return v;
}