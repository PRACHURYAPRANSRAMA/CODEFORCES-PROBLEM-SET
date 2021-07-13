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
    ll n,i,ad=0;
    cin>>n;
    vector<ll> v;
    for(i=1;i<=n;i++)
    {
        
    }
    while(n>=2)
    {
        v.push_back(n%2);
        n/=2;
    }
    for(i=0;i<v.size();i++)
    {
       // cout<<v[i];
        ad+=v[i];
    }
    cout<<ad+n<<nn;
//    if(ad!=0)
//    {
//        cout<<"1"<<nn;
//    }
//    else{
//        for(i=1;i<=n;i++)
//        {
//            if(n<pow(2,i))
//            {
//                v.push_back(i-1);
//                break;
//            }
//        }
//        cout<<n-pow(2,v[v.size()-1])+1<<nn;
//    }
}
