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
    ll n,b,p;
    ll ad=0;
    vector<ll> j;
    cin>>n>>b;
    vector<ll> v;

    ll i,sum=0,m,h=0;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }
   // ll k=v.size();
    for(i=0;i<n;i++)
    {if(v[i]%b==0)
    {for(m=0;m<b;m++){ h+=v[i];v.push_back(v[i]/b);n++;cout<<"hi "<<nn; }}
    else{ break ;}
      
        ad++;
    }
    for(i=0;i<v.size();i++)
    {
        sum+=v[i];
        cout<<v[i]<<" ";
    }
    cout<<nn;
    cout<<sum<<nn;
    cout<<v.size()<<nn;
    cout<<ad<<nn;
    cout<<h<<nn;
      
    
    
    
    
    
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
