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
    ll n,p,i;
    cin>>n;
    
    string s = to_string(n);
    for(i=1;i<=n;i++)
    {
        string r = to_string(i);
        string t =to_string(n);
        if(check(t)==t.size())
        {
            cout<<"YES"<<nn;
            break;
        }
        cout<<r.size()<<nn;
        cout<<check(r)<<nn;
        
        if(check(r)==r.size()&&n%i==0)
        {
//            if(n%i==0)
            {cout<<"YES"<<nn;}
            break;
        }
        else {
          cout<<"NO"<<nn;
            //break;
        }
    }
    
    
   
    
  
}




















