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


//int main()
//
//{
//    ll n;
//    cin>>n;
//    ll w=n+1;
//    for(ll i=0;i<9000;i++)
//    {
//        if((n+1)%10!=((n+1)/10)%100!=((n+1)/100)%1000)
//        {
//            w++;
//        }
//
//    }
//    cout<<w<<nn;
//}


int main(){
int n,a,b,c,d;cin>>n;
do n++,a=n/1000,b=(n/100)%10,c=(n/10)%10,d=n%10;
while(a==b||a==c||a==d||b==c||b==d||c==d);
cout<<n;}
