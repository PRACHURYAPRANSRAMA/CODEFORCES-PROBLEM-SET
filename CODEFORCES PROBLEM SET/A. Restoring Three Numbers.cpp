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
    ll i;
    //cin>>n;
    ll a[4];
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    for(i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<nn;
    cout<<(a[0]+a[2])-a[3]<<nn;
    cout<<a[0]-((a[0]+a[2])-a[3])<<nn;
    cout<<a[2]-((a[0]+a[2])-a[3])<<nn;
}
