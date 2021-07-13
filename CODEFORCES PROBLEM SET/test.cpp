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




void check(ll n,string s)
{
    s = to_string(n);
    ll i,count=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            count++;
        }
    }
    cout<<count<<nn;
    if(count==s.size())
    {
        cout<<"YES"<<nn;
    }
}







int main()

{
    ll n;
    cin>>n;
    string s = to_string(n);
    ll i,count=0;
//    for(i=0;i<s.size();i++)
//    {
//        if(s[i]=='4'||s[i]=='7')
//        {
//            count++;
//        }
//    }
//    for(i=1;i<n;i++)
//    {
//        ll p=n/i;
//        if(n%i==0&&i%2==0)
//        {
//            string r;
//            check(p,r);
//        }
//        else{
//            cout<<"NO"<<nn;
//        }
    }
    
    
    if(count==s.size())
    {
        cout<<"YES"<<nn;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            ll p=n/i;
            if(n%i==0&&i%2==0)
            {
                string r;
                check(p,r);
            }
            else{
                cout<<"NO"<<nn;
            }
        }

    }
    
    
    
    return 0;
}



















