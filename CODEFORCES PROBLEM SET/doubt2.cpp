#include <iostream>

 
using namespace std;
 
int main()
{   int n,k,i;
    cin>>n>>k;
    int a[n];
    int b=0;
    for(i=1;i<=n;i++){
        cin>>a[i];
    if(a[i]>0 && a[i]>=a[k])
    {b++;}
    }
    cout<<b;
    return 0;
}
 
 
