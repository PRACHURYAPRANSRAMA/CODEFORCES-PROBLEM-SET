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
    bool flag;
    ll count=0;
    ll n,i;
    cin>>n;
    string s;
//    for(i=1;i<=n;i++)
//    {
//        cin>>s[i];
//    }
cin>>s;
    //for(i=0;i<n-1;i++)
        for(i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            for(ll j=i+1;j<n;j++)
                if(s[i]==s[j])
                {
                    //cout<<s[j]<<j<<nn;
                    cout<<"NO"<<nn;
                    count++;
                    return;
                }
        }
        

    }
    if(count==0){
        cout<<"YES"<<nn;
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
