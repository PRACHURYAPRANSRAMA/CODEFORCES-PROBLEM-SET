#include <iostream>

using namespace std;

int main()
{
    int n,i,sum;
    int ans=0;
    
    sum=0;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        sum=a+b+c;
        
        
      if(sum>=2)
      {
        ans++;
        
      }
        
    }
    cout<<ans<<endl;
  
}
