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

ll count(ll n)
{
    ll count=0;
    while(n != 0)
    {
    n = n/10;
    ++count;
    }
    return count;
}

void solve()
{
    ll n;
    ll ad=0;
    cin>>n;
//    if(n>=2050)
//    {
//    cout<<n/2050<<nn;
//    }
    if(n<2050){
        cout<<"-1"<<nn;
        return;
    }
    else{
    for(ll i=1;i<=n;i++)
    {

        ad+=2050;
        if(ad==n)
        {
            cout<<i<<nn;
            //count++;
            return;
        }
//        if(ad>n)
//        {
//            return;
//        }
    }
       // cout<<ad<<nn;
        //cout<<count<<nn;
        return;
    }

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
//int main()
//{
//int n;
//int count = 0;
//cout << "nEnter the number:";
//cin >> n;
//while(n != 0)
//{
//n = n/10;
//++count;
//}
//cout << "Number of digits: " << count << endl;
//}
