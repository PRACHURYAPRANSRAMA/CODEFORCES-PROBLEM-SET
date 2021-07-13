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
    ll speed, ram, hdd,cost,i,sum=0;
    ll n;
    vector<ll> v;
    vector<ll> h;
    vector<ll> I;
    
    cin>>n;
    ll a[n],b[n],c[n],d[n];
    for(i=0;i<n;i++)
    {
//    cin>>speed>>ram>>hdd>>cost;
//        sum=speed+ram+hdd;
//        v.push_back(sum);
//        c.push_back(cost);
//        sum-=sum;
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        v.push_back(d[i]);
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<nn;
    ll max=v[0];
    ll max2=0;
    for(i=0;i<n;i++)
    {
       
        if(v[i]>max){max=v[i];}
        
    }
    for(i=0;i<n;i++)
    {
       if(v[i]>max2&&v[i]!=max){max2=v[i];}
        
    }
    cout<<max2<<nn;
    cout<<max<<nn;
    for(i=0;i<n;i++)
    {
       
        if(v[i]==max){I.push_back(i);}
        if(v[i]==max2){I.push_back(i);}
        
    }
    for(i=0;i<I.size()-1;i++)
    {
        if(c[I[i]]<=c[I[i+1]]&&v[I[i]]!=max)
        {
            cout<<I[i]+1<<nn;
        }
        else{
            cout<<I[i+1]+1<<nn;
        }
    }
}
