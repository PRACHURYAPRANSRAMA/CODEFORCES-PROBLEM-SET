#include<iomanip>
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<string>
#include <iterator>
#include <map>
#include<math.h>

using namespace std;

#define pb     push_back
#define nn     endl
#define pll    pair<int,int>
#define ll     long long int
#define vll    vector<int>
#define all(a) (a).begin(),(a).end()
#define x       first
#define y      second
#define sz(x)  (int)x.size()
#define hell   1000000007
#define lbnd   lower_bound
#define ubnd   upper_bound
#define bs     binary_search
#define mi     map<int,int>
#define gcd(a,b)  __gcd((a),(b))
#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie



void solve()
{
    ll n,i,count=0;
    cin>>n;
    ll a[n];
    for( i=1;i<=n;i++)
    {
        cin>>a[i];
    }
   // sort(a,a+n);
    for(i=1;i<n-1;i++)
    {
        if(a[i]!=a[i+1]&&a[i]!=a[i+2]&&a[i+1]==a[i+2])
        {
            cout<<i<<nn;
            count++;
            return;
        }
        
        if(a[i]!=a[i+1]&&a[i]==a[i+2])
        {
            cout<<i+1<<nn;
            count++;
            return;
        }
//        if(a[i]!=a[i+1]&&i+1==n)
//        {
//            cout<<n<<nn;
//            return;
//        }
        
       
    }
   
    if(count==0){
        cout<<n<<nn;
        return;
        
    }
    
}




int main()

{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
}