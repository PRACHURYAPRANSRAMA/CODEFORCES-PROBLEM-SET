#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{   int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    int b=0;
 
    for(i=1;i<=n;i++){
     if(a[i]>0 && a[i]>=a[k]){
        b++;
        }
      }
      cout<<b;
 
 
    return 0;
}
 
 
