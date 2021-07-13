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
    
    string s,temp="";
    cin>>s;
    char c;
    if(s.size()==1)
    {
        cout<<"NO"<<nn;
        return;
    }
    else{
    if(s[s.size()-1]=='a')
    {
        //s.insert(1,'b');
        temp='p'+s;
    }
    if(s[s.size()-1]=='z')
    {
        //s.insert(1,c-1);
        temp='b'+s;
    }
    else{
        temp='z'+s;
    }
        cout<<"YES"<<nn;
        cout<<temp<<nn;
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
