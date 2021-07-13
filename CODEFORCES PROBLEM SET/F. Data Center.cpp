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

bool isPerfectSquare(ll x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        ll sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
bool isPrime(long long int n)
{
    // Corner case
    if (n <= 1)
        return false;
    
    // Check from 2 to n-1
    for (long long int i = 2; i <=sqrt(n); i++)
        if (n % i == 0)
            return false;
    
    return true;
}

int main()

{
    ll n;
    cin>>n;
    if(isPerfectSquare(n))
    {
        cout<<4*sqrt(n)<<nn;
        return 0;
       // return 0;
    }
    if(isPrime(n))
    {
        cout<<2*(n+1)<<nn;
        return 0;
    }
    else{
        if(n==1)
        {
            cout<<"4"<<nn;
            return 0;
        }
        else{
        for(ll i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                cout<<2*(i+n/i)<<n/i<<nn;
                break;
            }
        }
        }
    }
}
