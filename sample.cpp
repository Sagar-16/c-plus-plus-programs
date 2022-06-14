#include<bits/stdc++.h>
#include<cstring>
using namespace std;

bool isSubsetWithSumK(vector<int> v,int k,int n)
{
  if(n==0)
  {
  	return false;
  }
  if(k==0)
  {
  	return true;
  }
  return isSubsetWithSumK(v,k-v[n-1],n-1) || isSubsetWithSumK(v,k,n-1);
 
}

void printArray(int numbers[],int n)
{
 
  for (int i = 0; i < n; ++i)
  {
     cout<<numbers[i]<<" ";
  }
  cout<<endl;
}


bool linearSearch(int array[], int n , int key)
{
  for (int i = 0; i < n; ++i)
  {
    if(key==array[i])
    {
      return true;
    }
  }
  return false;
}


bool binarySearch(int numbers[],int n,int key)
{
  int i =0;
  int j= n-1;
  while(i<=j)
  {
    int mid = (i + j)/2;
    if(numbers[mid] == key)
    {
      return true;
    }
    else if(numbers[mid]<key)
    {
      i = mid +1;
    }
    else
    {
      j = mid-1;
    }
  }
  return false;
}

void reverseArray(int numbers[] , int n)
{
  int i=0;
  int j = n-1;
  while(i<j)
  {
    swap(numbers[i],numbers[j]);
    i++;
    j--;
  }
}


void subsets(string input , string output , int i)
{
  if(i==input.length()){ cout<<output<<endl; return;}

  subsets(input,output,i+1);
  
  subsets(input,output+input[i],i+1);
}



printPairs(int arr[],int n)
{
  for (int i = 0; i < n-1; ++i)
  {
    for (int j = i+1; j < n; ++j)
    {
      cout<<arr[i]<<" "<<arr[j]<<endl;
    }
    
  }
}

void printIt(int arr[],int i , int j)
{
  for (int k = i; k <=j; ++k)
  {
    cout<<arr[k]<<" ";

  }
cout<<endl;
  
}

void printSubArrays(int arr[],int n)
{
  for (int i = 0; i < n; ++i)
  {
    for (int j = i; j <n; ++j)
    {
      printIt(arr,i,j);
    }
     
  }
}


int sumIt(int arr[],int i,int j)
{
  int sum =0;
  for (int n = i; n <=j; ++n)
  {
    sum += arr[n];
  }
  return sum;
}

void maxSumSubArrayBruteForce(int arr[],int n)
{
  int max_sum = INT_MIN;
  for (int i = 0; i < n; ++i)
  {
    for (int j = i; j <n; ++j)
    {
      int sum = sumIt(arr,i,j);
      
      max_sum = max_sum>sum?max_sum:sum;
    }
     
  }
  cout<<max_sum<<endl;
}

void maxSumSubArrayUsingPrefixSum(int arr[],int n)
{

  int prefixsum[n];
  prefixsum[0]=arr[0];
  for (int i = 1; i < n; ++i)
  {
    prefixsum[i]=arr[i]+prefixsum[i-1];
  }
  int maxSum =INT_MIN;

  for (int i = 0; i < n; ++i)
  {
    for (int j = i; j < n; ++j)
    {
     int sum = i>0? prefixsum[j]-prefixsum[i-1]:prefixsum[j];
     maxSum = maxSum>sum?maxSum:sum;
    }
  }
  cout<<maxSum<<endl;
}

void max_sum_subarray_kadanes(int arr[],int n)
{
  int cs=0;
  int ms = INT_MIN;
  for (int i = 0; i < n; ++i)
  {
        cs+= arr[i];
        if(cs<0){cs=0;}  
        ms= max(ms,cs);
  }
  cout<<ms<<endl;
}
 

//comparator

bool compare(int num1 , int num2)
{
  return num1>num2;
}


void count_sort(int arr[] , int n)
{
  int largest = INT_MIN;
  for (int i = 0; i < n; ++i)
  {
    largest = max(largest,arr[i]);
  }
  int frequency[largest+1]={0};
  for (int i = 0; i < n; ++i)
  {
    /* code */
    frequency[arr[i]]++;
  }

  int j=0;
  for (int i = 0; i < largest+1; ++i)
  {
    /* code */
    while(frequency[i]>0)
    {
      arr[j]=i;
      frequency[i]--;
      j++;
    }
  }
}


void bubble_sort_recursion(int a[],int n)
{
  if(n==1)
  {
    return;
  }

  for (int i = 0; i < n-1; ++i)
  {
    if(a[i]>a[i+1])
    {
      swap(a[i],a[i+1]);
    }
  }
  bubble_sort_recursion(a,n-1);
}


void bubble_sort_full_recursion(int arr[],int j, int n)
{
  if(n==1)
  {
    return;
  }
  if(j==n-1)
  {
   return  bubble_sort_full_recursion(arr,0,n-1);
  }

  if(arr[j]>arr[j+1])
  {
    swap(arr[j],arr[j+1]);
  }
  bubble_sort_full_recursion(arr,j+1,n);

}

int  string_to_integer(string str, int n)
{
  if(n==0)
  {
    return 0;
  }

  int small_answer = string_to_integer(str,n-1);
  int digit = str[n-1]-'0';
  return small_answer*10 + digit;

}


string replace_pi(string str , int n)
{
  if(n==0)
  {
    string t = "";
    t+= str[0];
    return t;
  }
   
  if(str[n]=='i' and str[n-1]=='p')
  {
    return replace_pi(str,n-2)+"3.14";
  }
  else
  {
    return replace_pi(str,n-1)+str[n];
  }
}


int tilling(int n)
{
  if(n<=2)
  {
    return n;
  }

  return tilling(n-1)+tilling(n-2);
}


int countWaysLadder(int n)
{
 if(n==0)
 {
  return 1;
 }
 if(n<0){return 0;}

  return countWaysLadder(n-1)+countWaysLadder(n-2)+countWaysLadder(n-3);
}




void generate_balanced_brackets(char *ar, int idx ,int n , int open , int close)
{
  if(idx==2*n)
  {
    ar[2*n]='\0';
    cout<<ar<<endl;
    return;
  }
  if(open<n)
  {
    ar[idx]='(';
    generate_balanced_brackets(ar,idx+1,n,open+1,close);
  }

  if(close<open)
  {
    ar[idx]=')';
    generate_balanced_brackets(ar,idx+1,n,open,close+1);
  }
  return;
}


int knapsack(int *w , int * p , int n , int c)
{
  if(n==0 || c==0)
  {
    return 0;
  }

  int inc = INT_MIN;
  int exc = INT_MIN;
  int ans = 0;

  if(w[n-1]<=c)
  {
    inc = p[n-1]+ knapsack(w,p,n-1,c-w[n-1]);
  }
  exc = knapsack(w,p,n-1,c);
  ans = max(inc,exc);
  return  ans;

}


string keypad[]={"","","abc","def","ghi","jkl","mno","pqr","pqrs","tuv","wxyz"};


void generate_keypad_combinations(char * input , char * output, int i , int j)
{
  if(input[i]=='\0')
  {
    output[j]='\0';
    cout<<output<<endl;
    return;
  }

   int digit = input[i]-'0';
   if(digit==1 || digit ==0)
   {
     generate_keypad_combinations(input,output,i+1,j);
   }

  for(int k=0;k<keypad[digit].length();k++)
  {
    output[j]=keypad[digit][k];
    generate_keypad_combinations(input,output,i+1,j+1);
  }
  return;

}



void generate_strings(char *map ,char * input , char * out ,int i, int n , int j)
{
  if(input[i]=='\0')
  {
    out[j]='\0';
    cout<<out<<endl;
    return;
  }
  
  int ch1 = input[i]-'0';
  out[j]=map[ch1];
  generate_strings(map,input,out,i+1,n,j+1);
  if(i+1<n)
  {
    int ch2 = input[i+1]-'0';
    out[j]=map[(ch1*10+ch2)];
    generate_strings(map,input,out,i+2,n,j+1);

  }
  return;
}


// void combination_sum(vector<vector<int>> &ans,vector<int > &subset,int n,int k,int i)
// {
//   if(i>n)
//   {
//     return;
//   }

//   if(k==0)
//   {
//     ans.push_back(subset);
//     return;
//   }

//   if(n-i+1<k)
//   {
//     return;
//   }
 
//  subset.push_back(i);
//  return combination_sum(ans,subset,n, k-1, i+1);
//  subset.pop_back();
//   return  combination_sum(ans,subset,n,k,i+1);

// return;

// }





// void help(int i, int n, int k, vector<int> &subSet, vector<vector<int>> &ans)
// {
//     if (k == 0)
//     {
//         ans.push_back(subSet);
//         return;
//     }
//     if (k > n - i + 1)
//         return;
//     if (i > n)
//         return;
//     // take the ith ele
//     subSet.push_back(i);
//     help(i + 1, n, k - 1, subSet, ans);
//     // skip the ith ele
//     subSet.pop_back();
//     help(i + 1, n, k, subSet, ans);
// }

// vector<vector<int>> combinations(int n, int k)
// {
//     vector<int> subSet;
//     vector<vector<int>> ans;
//     help(1, n, k, subSet, ans);
//     return ans;
// }



// void help_sum(vector<vector<int>> &ans, vector<int> &subset , int n , int sum, int i)
// {

//   if(i>n)
//   {
//     return;
//   }
//   if(sum==0)
//   {
//     ans.push_back(subset);
//     return;
//   }
   
//   subset.push_back(i);
//   help_sum(ans,subset,n,sum-i,i+1);
//   subset.pop_back();
//   help_sum(ans,subset,n,sum,i+1);
//   return;

// }




// vector<vector<int>> combinations_sum(int n , int sum)
// {

//   vector<vector<int>> ans;
//   vector<int> subset;
//   help_sum(ans,subset,n,sum,1);

//   return ans;
// }




void help_sum_k(int i,vector<vector<int>> &ans,vector<int> &subset, int current_sum,int required_sum,int k)
{

  if(current_sum>required_sum)
  {
    return;
  }

   

   if(k==0)
   {
    if(current_sum==required_sum)
    {
      ans.push_back(subset);
    }
    return;
   }

   if(i==10)
   {
    return;
   }
  


   subset.push_back(i);
   current_sum+=i;
   help_sum_k(i+1,ans,subset,current_sum,required_sum,k-1);

   subset.pop_back();
   current_sum-=i;
   help_sum_k(i+1,ans,subset,current_sum,required_sum,k);


}









vector<vector<int>>  combination_sum_k(int required_sum,int k)
{
 vector<vector<int>> ans;
 vector<int> subset;
 int i=1;
 int current_sum=0;
 help_sum_k(i,ans,subset,current_sum,required_sum, k);


  return ans;

}



void help_subsequnce(string &str,int i,string &ans,vector<string> &result)
{

  if(i==str.length())
  {
    result.push_back(ans);
    return;
  }

  ans.push_back(str[i]);
  help_subsequnce(str,i+1,ans,result);

  ans.pop_back();
  help_subsequnce(str,i+1,ans,result);

  return;
}




vector<string> subsequences(string str)
{
 string ans ="";
 vector<string> result;
 help_subsequnce(str,0,ans,result);
 return result;
}

void help_subset_sum_to_k(int current_sum,int i,vector<int> &arr,vector<int> subset,vector<vector<int>> &ans,int n , int k)
{

   if(current_sum==k)
   {
    ans.push_back(subset);
    return;
   }
  if(i==n)
  {
    return;
  }

   //include
   current_sum+= arr[i];
   subset.push_back(arr[i]);
   help_subset_sum_to_k(current_sum,i+1,arr,subset,ans,n,k);
   current_sum-=arr[i];
   subset.pop_back();

   //exclude
   help_subset_sum_to_k(current_sum,i+1,arr,subset,ans,n,k);

   return;


}

vector<vector<int>>  find_subset_sum_to_k(vector<int> arr,int n, int k)
{

 vector<int> subset;
 vector<vector<int>> ans;
 help_subset_sum_to_k(0,0,arr,subset,ans,n,k);

 return ans;
}


void help_generate_concat(vector<string> &arr,vector<string> &ans,string &current,int n, int i)
{
  if(i==n)
  {
    ans.push_back(current);
    return;
  }
  string temp = current+ arr[i];
   help_generate_concat(arr,ans,temp,n,i+1);
   help_generate_concat(arr,ans,current,n,i+1);
 return;

}




vector<string> generate_all_concatinated_strings(vector<string> arr)
{

 vector<string> ans;
 string current;
 int n = arr.size();
 help_generate_concat(arr,ans,current,n,0);

 return ans;

}


void help_flood_fill(vector<vector<int>>&image,int x,int y,int m,int n,int new_color,int old_color)
{


 if(x<0 || x==m || y<0 || y==n || image[x][y]!=old_color)
 {
  return;
 }
 image[x][y]=new_color;
 help_flood_fill(image,x+1,y,m,n,new_color,old_color);
 help_flood_fill(image,x-1,y,m,n,new_color,old_color);
 help_flood_fill(image,x,y+1,m,n,new_color,old_color);
 help_flood_fill(image,x,y-1,m,n,new_color,old_color);
 return;

}



vector<vector<int>> flood_fill(vector<vector<int>>& image, int x , int y, int new_color)
{
  int old_color = image[x][y];
  int m = image.size();
  int n = image[0].size();
  if(new_color==old_color)
  {
    return image;
  }

  help_flood_fill(image,x,y,m,n,new_color,old_color);
  return image;
}



 bool is_path_available(char maze[][4],int i,int j ,int m, int n)
 {
    if(i==m-1 && j==n-1)
    {
      return true;
    }
   
    if(i<0 || j<0 || i>=m ||j >=n)
   {
    return false;
   }

   if(maze[i][j]=='x')
   {
    return false;
   }




  //right side call laga
   bool right_side_call = is_path_available(maze,i,j+1,m,n);
   
  //downside call laga

  bool down_side_call = is_path_available(maze,i+1,j,m,n);

  return right_side_call || down_side_call;

 }

void print_all_paths(char maze[][4],string path,int m,int n,int i,int j)
{
  if(i==m-1 && j==n-1)
  {
    cout<<path<<endl;
    return;
  }
  if(i<0 || i>=m || j<0 || j>=n)
  {
    return;
  }

  if(maze[i][j]=='x')
  {
    return;
  }

   
  print_all_paths(maze,path+"r",m,n,i,j+1);
  print_all_paths(maze,path+"d",m,n,i+1,j);
}






using lli = long long int;



lli fast_exponentiation(lli num1,lli num2,lli mod)
{
  lli result=1;

  while(num2>0)
  {

   if(num2%2 == 1)
   {
    result = (result *num1) % mod;
   }
  num1=(num1 * num1)%mod ;
   num2=num2/2;

  }
  return result;

}


int main(int argc, char const *argv[])
{

	// vector<int> v={1,2,4,3,6,5};
	// int k=6;
	// int n= 6;
	// cout<<printSubset(v,k,n);
  // int array[100]={1,2,3};
  // for (int i = 0; i < 100; ++i)
  // {
  //   cout<<array[i]<<" ";
  // }

  // string array[5]={"sagar","akash","mahesh"};
  // for (int i = 0; i < 5; ++i)
  // {
  //   /* code */
  //   cout<<array[i]<<" ";
  // }
  // int n;
  // cin>>n;
  // string names[n];
  // for (int i = 0; i < n; ++i)
  // {
  //   cin>>names[i];
  //   cout<<names[i]<<endl;
  // }

  // int numbers[] = {0,2,8,11,6,9,13,2};
  // int n = sizeof(numbers)/sizeof(int);
 
  // bool ans = binarySearch(numbers,n,0);
  // cout<<ans<<endl;
  // reverseArray(numbers,n);
  // printArray(numbers,n);
  // printPairs(numbers,n);
  // printSubArrays(numbers,n);
  // maxSumSubArrayBruteForce(numbers,n);
  // maxSumSubArrayUsingPrefixSum(numbers,n);
  // max_sum_subarray_kadanes(numbers,n);
   // sort(numbers,numbers+n,compare);
   // for(int x: numbers)
   // {
   //  cout<<x<<" ";
   // }

  // count_sort(numbers,n);
  // for(int num:numbers)
  // {
  //   cout<<num<<" ";
  // }

  // char arr[100]={'a','b','c','d','e','f','g'};
  // char arr[] ="abcdef";
  // char arr[5]={'a','b','c','d','\0'};

   // char arr[100];
   // char temp = cin.get();
   // int length =0;
   // while(temp!='\n')
   // {
   //  arr[length++]=temp;
   //  temp = cin.get();

   // }
   // arr[length]='\0';
   // cout<<arr<<endl;

  
  // vector<string > v;
  // string str;
  // while(cin>>str)
  // {
  //   v.push_back(str);
  // }
  
  // for(string str:v)
  // {
  //   cout<<str<<endl;
  // }
   
  // int num;
  // cin>>num;
  // char arr[1000];
  // int max_length=INT_MIN;
  // while(num>0)
  // {
  //   cin>>arr;
  //   int len = strlen(arr);
  //   max_length = max(max_length,len);
  //   num--;
  // }
  // cout<<" max length is : "<<max_length<<endl;


  // int n;
  // cin>>n;
  // int arr[n];
  // for(int i=0;i<n;i++)
  // {
  //   cin>>arr[i];
  // }
  // bubble_sort_full_recursion(arr,0,n);
  // for(int num: arr)
  // {
  //   cout<<num<<" ";
  // }
  // string str= "26543";
  // int ans = string_to_integer(str,str.length());
  // cout<<ans<<endl;
  // string str ="abcpiabpicdfpipigf";
  // string ans = replace_pi(str,str.length()-1);
  // cout<<ans<<endl;

  // cout<<tilling(4);

  // cout<<countWaysLadder(4);
  // subsets("abc","",0);
  // char ar[1000];
  // int n=5;
  // generate_balanced_brackets(ar,0,n,0,0);
   

   // int weight[]={1,2,3,5};
   // int c= 7;
   // int n = sizeof(weight)/sizeof(int);
   // int profit[]={40,20,30,100};
   // cout<<knapsack(weight,profit,n,c);

  // char input[100];
  // cin>>input;

  // char output[100];
  // char map[27];
  // char ch ='A';
  // for(int i=1;i<27;i++)
  // {
  //   map[i]=ch;
  //   ch = ch+ 1;
  // }
  // // generate_keypad_combinations(input,output,0,0);
  //  int n = strlen(input);
  // generate_strings(map,input,output,0,n,0);


  // string str ;
  // cin>>str;
  // int i=0;
  // int count=1;
  // char ch = str[i];
  // string ans="";
  // int n = str.length();
  // while(i<n)
  // {
  //   if(str[i]==str[i+1])
  //   {
  //     count++;
  //     i++;
  //   }
  //   else
  //   {

  //    ans += (ch);
  //    ans+= to_string(count);
  //    count=1;
  //    ch = str[i+1];
  //    i++;

  //   }
  // }

  // cout<<ans<<endl;



  // vector<vector<int>> result =  combinations(5,3);

  // for(int i=0;i<result.size();i++)
  // {
  //   for(int j=0;j<result[i].size();j++)
  //   {
  //     cout<<result[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }




  // vector<vector<int>> result =  combinations_sum(6,6);

  // for(int i=0;i<result.size();i++)
  // {
  //   for(int j=0;j<result[i].size();j++)
  //   {
  //     cout<<result[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }


 //  vector<vector<int>> result =  combinations_sum3(9,3,15);

 //  for(int i=0;i<result.size();i++)
 //  {
 //    for(int j=0;j<result[i].size();j++)
 //    {
 //      cout<<result[i][j]<<" ";
 //    }
 //    cout<<endl;
 //  }

 // cout<<result.size();

   
 // int required_sum =18;
 // int k = 4;
 // vector<vector<int>> result = combination_sum_k(required_sum,k);

 // for(int i=0;i<result.size();i++)
 //  {
 //    for(int j=0;j<result[i].size();j++)
 //    {
 //      cout<<result[i][j]<<" ";
 //    }
 //    cout<<endl;
 //  }
   


   // string str = "abcd";
   // vector<string> result = subsequences(str);
   // for (int i = 0; i < result.size(); ++i)
   // {
   //   cout<<result[i]<<endl;
   // }

   // cout<<result.size()<<endl;



 // vector<int> v={2,3,5,7,8,1,2,9};
 // int n = v.size();
 // int k =12;
 // vector<vector<int>> ans = find_subset_sum_to_k(v,n,k);
 // for (int i = 0; i < ans.size(); ++i)
 // {
 //   for(int j=0;j<ans[i].size();j++)
 //   {
 //    cout<<ans[i][j]<<" ";
 //   }
 //   cout<<endl;
 // }


 // vector<string> v ={"ab","cde","fgh","ij","k"};
 // vector<string> result = generate_all_concatinated_strings(v);
 // for(string str:result)
 // {
 //  cout<<str<<endl;
 // }




  // vector<vector<int>> image ={
  //   {1,2,3,3},
  //   {3,4,2,2},
  //   {1,2,2,2},
  //   {2,2,3,5}
  // };


// vector<vector<int>> result = flood_fill(image,3,1,9);
//  for(int i=0;i<result.size();i++)
//  {
//    for(int j=0;j<result[i].size();j++)
//    {
//       cout<<result[i][j]<<" ";
//    }
//    cout<<endl;
//  }


 // char maze[4][4]={
 //  {'.','.','.','.'},
 //  {'.','.','x','.'},
 //  {'.','.','x','.'},
 //  {'x','.','x','.'}
 // };
  
 // int m = 4;
 // int n = 4;
 // cout<<"maze we have :"<<endl;
 // for(int i=0;i<n;i++)
 // {
 //  for(int j=0;j<m;j++)
 //  {
 //    cout<<maze[i][j]<<" ";
 //  }
 //  cout<<endl;
 // }
 
 //   cout<<endl;
 //   // bool result = is_path_available(maze,0,0,m,n);
 //   // cout<<result;
 //  cout<<"All paths are given below:"<<endl;
 //  // print_all_paths(maze,"",m,n,0,0);

  
  int a,b;
  cin>>a>>b;
  lli mod = 1e9+7;
  lli result = fast_exponentiation(a,b,mod);
  cout<<result<<endl;

  




 


  





}