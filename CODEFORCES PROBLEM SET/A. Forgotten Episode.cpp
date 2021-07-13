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


int main()

{
    ll n,i,u;
    cin>>n;
    u=n-1;
    ll a[u];
    for(i=0;i<u;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(u));
    for(i=0;i<u;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<nn;
    for(i=0;i<u;i++)
    {
//        if(u==1)
//        {
//            if(a[i]>=n)
//            { cout<<a[i]-1<<nn;
//                return 0;}
//            else{
//                cout<<a[i]+1<<nn;
//                return 0;
//            }
//        }
        if(a[u-1]!=n)
        {
            cout<<n<<nn;
            return 0;
        }
        if(a[i]!=i+1)
        {
            cout<<a[i]-1<<nn;
            return 0;
        }
        
    }
    
}
