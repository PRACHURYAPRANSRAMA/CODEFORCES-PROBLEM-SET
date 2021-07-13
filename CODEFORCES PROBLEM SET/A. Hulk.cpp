
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
    for(i=1;i<=n;i++)
    {
        if(i%2!=0&&i!=n)
        {
            cout<<"I hate that ";
        }
//        if(i==n&&n%2!=0)
//        {
//            cout<<"I love it";
//        }
        if(i==n&&n%2!=0)
        {
            cout<<"I hate it ";
        }
       
//        if(i%3==0&&i!=n)
//        {
//            cout<<"that ";
//        }
        if(i==n&&n%2==0)
        {
            cout<<"I love it ";
        }
        if(i%2==0&&i!=n){
            cout<<"I love that ";
        }
    }
}
