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
    ll n,i;
    cin>>n;
    ll a[3];
    ll sum1=0,sum2=0,sum3=0;
    for(i=0;i<n;i++)
    {
        for(ll j=0;j<3;j++)
        {
            cin>>a[j];
            if(j==0)
            {sum1+=a[0];}
            if(j==1){sum2+=a[1];}
            if(j==2){sum3+=a[2];}
       }
    }
//    for(i=0;i<n;i++)
//    {
//        for(ll j=0;j<3;j++)
//        {
//        cout<<a[0]<<nn;
//            sum1+=a[0];
//            sum2+=a[1];
//            sum3+=a[2];
//        }
//    }
    cout<<nn;
//    ll p=9,d=-10;
//    cout<<p+d<<nn;
    
    
    //cout<<sum1<<" "<<sum2<<" "<<sum3<<nn;
    cout<<nn;
    if(sum1==0&&sum2==0&&sum3==0)
    {
        cout<<"YES"<<nn;
    }
    else{
        cout<<"NO"<<nn;
    }
}
