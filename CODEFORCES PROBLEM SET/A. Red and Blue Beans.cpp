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
    ll a,b,c;
    cin>>a>>b>>c;
//    if(c>=0&&a==b)
//    {
//        cout<<"YES"<<nn;
//        return;
//    }
//    if(a>b)
//    {
//        if(a%b!=0&&(a/b+a%b-a/b)<=c)
//        {
//            cout<<"YES"<<nn;
//            return;
//        }
//        if(a%b==0&&(a-b)<=c&&c!=0)
//        {
//            cout<<"YES"<<nn;
//            return;
//        }
//        else{
//            cout<<"NO"<<nn;
//            return;
//        }
//
//    }
//    if(b>a)
//    {
//        swap(b,a);
//    }
    if(max(a,b)<=min(a,b)+c*(max(a,b)-1))
    {
        cout<<"YES"<<nn;
    }
    else{
        cout<<"NO"<<nn;
    }
//        if(b%a!=0&&(b/a+b%a-b/a)<=c)
//        {
//            cout<<"YES"<<nn;
//            return;
//        }
//        if(b%a==0&&b-a<=c&&c!=0)
//        {
//            cout<<"YES"<<nn;
//            return;
//        }
//        else{
//            cout<<"NO"<<nn;
//            return;
//        }
//
//    }
//    else{
//        cout<<"NO"<<nn;
//        return;
//    }
//    if(a>b)
//    {
//        if((a/b)-b<=c&&c!=0&&(a/b)-b!=0)
//        {
//            cout<<"YES"<<nn;
//        }
//        else{
//            cout<<"NO"<<nn;
//        }
//        return;
//    }
//    if(a==b)
//    {
//        if(c>=0)
//        {        cout<<"YES"<<nn;}
//        else{
//            cout<<"NO"<<nn;
//        }
//        return;
//    }
//    else
//    {
//        if((b/a)-a<=c&&c!=0&&(b/a)-a!=0)
//        {
//            cout<<"YES"<<nn;
//        }
//        else{
//            cout<<"NO"<<nn;
//        }
//        return;
//    }
////    if(a>=b)
////    {
////        if(a/b)
////    }
    
    
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
