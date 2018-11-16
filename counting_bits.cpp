
#include<bits/stdc++.h> 
using namespace std; 
   

int main ()
{
  int  k, n,l;
  k = 37;
  n = log2(k);
  int arr[n+1];
   for(int i=1;i<=n+1;i++)
    arr[i]=0;
  while(k)
  {
      l=log2 (k);
      arr[n+1-l]=1;
      k=k-pow(2,l);
  }
 for(int i=1;i<=n+1;i++)
 {
    if(arr[i]==1)
    cout<<i<<" ";
 }
  return 0;
}
