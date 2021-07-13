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
    ll n,aM=0,aT=0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='M')
        {aM++;}
        if(s[i]=='T')
        {aT++;}
    }
    cout<<aT<<nn;
    cout<<aM<<nn;
    if(aT/aM==2&&s[0]!='M'&&aM!=0&&s[s.size()-1]!='M'&&aT!=0)
    {
        cout<<"YES"<<nn;
        return;
    }
    else{
        cout<<"NO"<<nn;
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
