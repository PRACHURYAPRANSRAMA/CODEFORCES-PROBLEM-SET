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


void subString(string str, int n)
{
    ll ad=0;
    char c=str[0];
    // Pick starting point
    for (int len = 1; len <= n; len++)
    {
        // Pick ending point
        for (int i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point.
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
            {cout << str[k];
                if(c==str[j]&&k!=j){ad++;}}
            cout << endl;
            
        }
        
    }
    cout<<ad<<nn;
}





int main()

{
   int  n;
    cin>>n;
    string s;
    cin>>s;
    
    subString( s,n);
    
    
}
