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



ll check(string s)
{
     // s = to_string(n);
    ll i,count=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            count++;
        }
    }
//    cout<<count<<nn;
    //if(count==s.size())
//    {
//        cout<<"YES"<<nn;
//    }
    return count;
}







int main()

{
    ll l;
    cin>>l;
    cout<<(l%4==0||l%7==0||l%47==0||l%74==0||l%477==0 ? "YES":"NO");
    
   
    
  
}





















