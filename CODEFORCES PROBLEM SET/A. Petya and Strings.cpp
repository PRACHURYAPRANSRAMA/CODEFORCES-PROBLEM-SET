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
    string p,s;
    ll i,sum=0,c=0,w=0,ad=0;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(i=0;i<s.size();i++)
    {
        sum+=int(s[i]);
    }
    cin>>p;
    transform(p.begin(), p.end(), p.begin(), ::tolower);
    cout<<p<<nn;
    for(i=0;i<p.size();i++)
    {
        ad+=int(p[i]);
        p[i]
    }
    if(sum==ad)
    {
        cout<<"0"<<nn;
    }
//    else if(sum<ad&&(ad-sum)==32)
//    {
//        cout<<"0"<<nn;
//    }
    else if(ad<sum)
    {
        cout<<"1"<<nn;
        
    }
    else if(sum<ad){
        cout<<"-1"<<nn;
    }
    
}
