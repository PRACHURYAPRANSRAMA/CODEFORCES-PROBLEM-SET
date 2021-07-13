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

//
//int main()
//
//{
//    ll n,a,b,i;
//    cin>>n>>a>>b;
//    ll p[n];
//    for(i=0;i<n;i++)
//    {
//        cin>>p[i];
//    }
//    sort(p,p+n);
//    for(i=0;i<n;i++)
//    {
//        cout<<p[i]<<" " ;
//    }
//    cout<<nn;
//    cout<<p[b]<<" "<<p[a]<<nn;
//    cout<<p[b]-p[b-1]<<nn;
//}
int main()
{
    int n,a,b;cin>>n>>a>>b;int c[n];
    for(int i=0;i<n;i++)cin>>c[i];
    sort(c,c+n);
    cout<<c[b]-c[b-1];
}
