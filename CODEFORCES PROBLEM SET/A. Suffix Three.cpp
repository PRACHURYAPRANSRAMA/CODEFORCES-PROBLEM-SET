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
    string s;
    cin>>s;
    ll i;
//    for(i=0;i<s.size();i++)
//    {
        if(s[s.size()-1]=='o'&&s[s.size()-2]=='p'){cout<<"FILIPINO"<<nn;return ;}
        if(s[s.size()-1]=='u'&&s[s.size()-2]=='s'&&s[s.size()-3]=='e'&&s[s.size()-4=='d']){cout<<"JAPANESE"<<nn;return ;}
        if(s[s.size()-1]=='u'&&s[s.size()-2]=='s'&&s[s.size()-3]=='a'&&s[s.size()-4=='m']){cout<<"JAPANESE"<<nn;return ;}
        if(s[s.size()-1]=='a'&&s[s.size()-2]=='d'&&s[s.size()-3]=='i'&&s[s.size()-4=='n']&&s[s.size()-5]=='m'){cout<<"KOREAN"<<nn;return ;}
    //}
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
