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


//int main()
//
//{
//    string s;
//    //vector<int> v;
//    cin>>s;
//
//    for(int i=0;i<s.size();i++)
//    {
//        if(i%2!=0)
//        {
//            s.erase(s.begin() + i);
//
//            //v.push_back(s[i]);
//        }
//    }
//    cout<<s<<nn;
////    sort(v.begin(),v.end());
////    for(int i=0;i<3/2;i++)
////    {
////       // cout<<v[s[i]]<<'+'<<v[s[i]+1]<<nn;
////    }
//}





int main()
{
    string s,ans="",temp="",pps="";
    cin>>s;
    for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= '0' && s[i] <= '9')) {
                temp = temp + s[i];
            }
        if(s[i]=='+')
        {
            ans=ans+s[i];
        }
        }
        //pps = temp;
    sort(temp.begin(), temp.end());
    cout<<temp<<nn;
    for(int i=0;i<temp.size();i++)
    {
        pps=pps+temp[i]+'+';
//        if(i%2==0)
//            s.insert(i, "+");
//        {ans=ans+temp[i];}
//        else{
//            ans=ans+'+';
//        }
    }
//    for(int i=0;i<s.size();i++)
//    {
//        cout<<pps[i]<<"+";
//    }
    for(int i=0;i<pps.size()-1;i++)
    { cout<<pps[i];}
    
}














