#include <iostream>

using namespace std;

int main()
{
    int i=0,p=0,pps[55];
    int n,k;
    
     cin>>n>>k;
    
    while(i<n)
    {
        
        cin>>pps[i];
        i++;
    }
        while(pps[p]>0 && pps[p]>=pps[k-1] && p<n)
        {
            p++;
        }
   
    
    cout<<p<<endl;
    
   
}
