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
    ll n,i,ad=1,k;
    cin>>n>>k;
    vector<ll> v;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1]){ad++;v.push_back(ad);}
        if(a[i]==a[i+1]){ad=1;}
    }
    
//    for(i=0;i<v.size();i++)
//    {
//        cout<<v[i]<<" ";
//    }
//    cout<<nn;
    sort(v.begin(),v.end());
    if(v.size()>1)
    cout<<v[v.size()-1]<<nn;
    else{
        if(k==1){cout<<"1"<<nn;}
        else{cout<<k<<nn;}
    }
}
