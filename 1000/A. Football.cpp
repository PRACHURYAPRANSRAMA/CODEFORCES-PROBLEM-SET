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
    ll n,i,ad=1;
    cin>>n;
    vector<string> p;
    map<string, ll> mymap;
    vector<ll> v;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        p.push_back(s);
    }
    sort(p.begin(),p.end());
//    cout<<nn;
//    for(i=0;i<n;i++)
//    {
//        cout<<p[i]<<nn;
//    }
    for(i=0;i<n;i++)
    {
       // if(p[i]==p[i+1])
       // {
//     /       ad++;
//            v.push_back(ad);
            mymap[p[i]]++;
                
       // }
//        if(p[i]!=p[i+1])
//        {
//            mymap[p[i]]++;
//            mymap[]
//        }
    }
    
//    map<ll, ll>::iterator itr;
//    for (itr = mymap.begin(); itr != mymap.end(); ++itr) {
//            cout << '\t' << itr->first
//                 << '\t' << itr->second << '\n';
//        }
    for(i=0;i<n;i++)
    {
       // cout<<mymap[p[i]]<<" ";
              v.push_back(mymap[p[i]]);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(v[v.size()-1]==mymap[p[i]])
        {
            cout<<p[i]<<nn;
            break;
        }
    }
    //cout<<<<nn;
    //cout<<nn;
}
