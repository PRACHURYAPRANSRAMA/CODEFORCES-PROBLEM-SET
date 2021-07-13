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
    ll a,b,i,ad=0,sum=0;
    vector<ll> v;
    vector <ll> p;
    cin>>a>>b;
    for(i=1;i<=6;i++)
    {
        if(a<i){v.push_back(i-a);}
        else{v.push_back(a-i);}
    }
    for(i=1;i<=6;i++)
    {
        if(b<i){p.push_back(i-b);}
        else{p.push_back(b-i);}
    }
//    for(i=0;i<6;i++){cout<<v[i]<<" ";}
//    cout<<nn;
//    for(i=0;i<6;i++){
//
//        cout<<p[i]<<" ";
//    }
   // cout<<nn;
    for(i=0;i<6;i++)
    {
        if(v[i]<p[i]){ad++;}
        if(v[i]>p[i]){sum++;}
    }
    cout<<ad<<" ";
    if(ad>sum){cout<<ad-sum<<" ";}
    else{cout<<sum-ad<<" ";}
    cout<<sum<<" ";
  
}
