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
    ll n,i;
    cin>>n;
    string s;
//    for(i=1;i<=n;i++)
//    {cin>>s[i];}
    cin>>s;
    
    
    for(i=1;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            for(ll j=i+1;j<n;j++)
                if(s[i]==s[j+1])
                {
                    cout<<s[j+1]<<j+1<<nn;
                    cout<<"NO"<<nn;
                    break;
                }
        }
        
//        else{
//            if(s[i]!=s[n]&&i==n)
//            {
//                cout<<"NO"<<nn;
//                break;
//            }
//            else{
//                //cout<<""<<nn;
//                continue;
//            }
//        }
    }
        
    
//    else if(s.size()==1) {
//        cout<<"YES"<<nn;
//    }
//    else if(s.size()==2){
//        if(s[1]==s[2])
//        {
//            cout<<"YES"<<nn;
//        }
//        else{
//            cout<<"NO"<<nn;
//        }
//    }
    
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
