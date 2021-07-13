
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
int n,a,s,x;
int main()
{
cin>>n;
for(int i=0;i<n;i++)
{cin>>x;a+=x;
if(a<0) {s++;a=0;}
}
cout<<s<<endl;}


//int main()
//
//{
//    ll n,i,ad=0,sum=0;
//    cin>>n;
//    ll a[n];
//    vector<ll> v;
//  //  char c;
//   // int c;
//    for(i=0;i<n;i++)
//    {
//        cin>>a[i];
//
//        if(a[i]==-1){v.push_back(i);}
//
//    }
//    for(i=0;i<v.size();i++){cout<<v[i]<<" ";}
//    cout<<nn;
//    for(i=0;i<n;i++)
//    {
//        if(a[i]==-1){ad++;}
//        if(a[i]>=1&&i<=v[v.size()-1]){sum+=a[i];}
//    }
//    cout<<nn;
//    cout<<ad<<nn;
//    cout<<sum<<nn;
//    if(ad>=sum)
//    cout<<ad-sum<<nn;
//    else{ll m=0;
//        for(i=0;i<n;i++)
//        {
//            if(a[i]==a[i+1]){m++;}
//            if(a[i]!=a[i+1]){break;}
//        }
//        cout<<m+1<<nn;
//    }
//}
