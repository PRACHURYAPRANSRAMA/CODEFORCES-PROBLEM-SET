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
    string s;
    cin>>s;
    ll i,j,ad=0,sum=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            ad++;
        }
        if(s[i]>='A'&&s[i]<='Z')
        {
            sum++;
        }
    }
//    cout<<ad<<nn;
//    cout<<sum<<nn;
//
    if(ad>=sum)
    {
//        for(i=0;i<s.size();i++)
//        if(s[i]>='A'&&s[i]<='Z')
//        {
//           // s[i]+=32;
//            tolower(s[i]);
//        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
        return 0;
    }
    else{
//        for(i=0;i<s.size();i++)
//        if(s[i]>='a'&&s[i]<='z')
//        {
//            //s[i]-=32;
//            toupper(s[i]);
//        }
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;
        return 0;
    }
   
}
