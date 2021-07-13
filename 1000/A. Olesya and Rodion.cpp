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

ll numberDigigts(ll a){
    ll ad=0,i;
    while(a!=0)
    {
        ad++;
        a/=10;
    }
    return ad;
}



int main()

{
    ll a,b,i,ad=0;
    cin>>a>>b;
    ll s=(a-1);
//    for(i=pow(10,s);i<pow(10,a);i++)
//    {
//        if(i%b==0)
//        {
//            cout<<i<<nn;
//            ad++;
//            break;
//        }
//    }
//    if(ad==0)
//    {
//        cout<<"-1"<<nn;
//    }
    ll count=2;
    if(a>=numberDigigts(b))
    {
//        if((numberDigigts(a)%2==0&&numberDigigts(b)%2==0)||(numberDigigts(a)%2!=0&&numberDigigts(b)%2!=0))
        if(numberDigigts(b)==1)
        {
            for(i=0;i<a;i++)
            {
                cout<<b;
            }
            return 0;
        }
        if(b==10)
        {
            for(i=0;i<a-1;i++)
            {
                cout<<"1";
            }
            cout<<"0";
            return 0;
        }
        else{
    for(i=0;i<a;i++)
    {
        if(count<=a&&b!=10)
        {
            cout<<b;
        }
        count+=numberDigigts(b);
    }
        }
    }
    else{
        cout<<"-1"<<nn;
    }
    cout<<nn;
}
