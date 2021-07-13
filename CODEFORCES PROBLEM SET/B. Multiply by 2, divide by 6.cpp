
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
    ll n,i,ad=0,sum=0;
    cin>>n;
    if(n<=2){cout<<"-1"<<nn;}
    else{
    for(i=0;i<n;i++)
    {
        if(n%6==0&&n>6)
        {
            n=n/6;
            if(n%6!=0)
            {n*=2;}
            else{continue;}
        }
        if(n/6==1){cout<<i+1<<nn;ad++;return;}
        //else{cout<<"-1"<<nn;}
    }}
    if(ad==0){cout<<"-1"<<nn;}
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
