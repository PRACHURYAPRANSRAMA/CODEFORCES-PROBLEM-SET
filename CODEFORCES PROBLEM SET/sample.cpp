#include<iostream>
  using namespace std;
  
  
int main()
{
    int i=0,j=0,arr[55];
    int n,k;
    cin>>n>>k;
    
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    
    while(arr[j] && arr[j]>=arr[k-1] && j<n)
      j++;
      
    cout<<j<<endl;
}
