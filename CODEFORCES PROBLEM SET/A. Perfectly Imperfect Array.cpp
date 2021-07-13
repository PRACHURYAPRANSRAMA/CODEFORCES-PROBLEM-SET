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

bool isPerfectSquare(ll p)
{
    // Find floating point value of
    // square root of x.
    if (p >= 0) {
 
       ll sr = sqrt(p);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == p);
    }
    // else return false if n<0
    return false;
}
//
//void solve()
//{
//    ll n,i,pro,count=0;
//    cin>>n;
//    ll a[n];
//
//    for( i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//    if(n==1)
//    {
//        if(isPerfectSquare(a[0]))
//        {
//            cout<<"NO"<<nn;
//        }
//        else{
//            cout<<"YES"<<nn;
//        }
//        return;
//    }
//
//    pro=a[0];
//    if(n>1)
//    {
//    for(i=1;i<n;i++)
//    {
//        pro*=a[i];
//        if(isPerfectSquare(pro))
//        {
//            cout<<"NO"<<nn;
//            count++;
//            return;
//        }
//    }
//    if(count==0)
//    {
//        cout<<"YES"<<nn;
//        return;
//    }
//    }
//
//
//
//}
//void solve()
//{
//
//    ll n,i;
//    cin>>n;
//    ll a[n];
//    for(i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//    for(i=0;i<n;i++)
//    {
//        if(a[i]==a[i+1])
//        {
//
//        }
//    }
//}
//
//
//
//int main()
//
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//
//}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f=0,x;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            int y = sqrt(x);
            if(y*y!=x)f=1;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
