#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
#include <iterator>
#include <map>
#include <math.h>

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
    string s;
    cin>>s;
    ll i,count=0;
    for(i=1;i<=s.size();i++)
    {
//        if(s[i]==104&&(s[i+1]!=104||s[i+1]!=101))
//        {
//            count++;
//            cout<<count<<nn;
//        }
//        if(s[i]==101&&(s[i+1]!=101||s[i+1]!=108))
//        {
//            count++;
//            cout<<count<<nn;
//        }
//        if(s[i]==108&&(s[i+1]!=108||s[i+1]!=111))
//        {
//            count++;
//            cout<<count<<nn;
//        }
//        if(s[i]=='h'&&(s[i+1]!='h'||s[i+1]!='e'))
//        {
//            count++;
//            cout<<count<<nn;
//        }
//        if(s[i]=='e'&&(s[i+1]!='e'||s[i+1]!='l'))
//        {
//            count++;
//            cout<<count<<nn;
//        }
//        if(s[i]=='l'&&(s[i+1]!='l'||s[i+1]!='o'))
//        {
//            count++;
//            cout<<count<<nn;
//        }
       
    }
    cout<<count<<nn;
    if(count!=0)
    {
        cout<<"NO"<<nn;
    }
    else{
        cout<<"YES"<<nn;
    }
    
}
