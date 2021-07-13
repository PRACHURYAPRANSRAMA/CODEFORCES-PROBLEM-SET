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
    ll n,k;
    cin>>n;
    cin>>k;
    string s;
    cin>>s;
    ll i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        { if(s[i]=='G'&&s[i+1]=='G'){break;}
        if(s[i]=='B'&&s[i+1]=='G')
        {
            char temp=s[i];
           // s[i]=temp;
            s[i]=s[i+1];
            s[i+1]=temp;
            break;
        }}
    }
    for(i=0;i<n;i++)
    {cout<<s[i];}
    cout<<nn;
}
