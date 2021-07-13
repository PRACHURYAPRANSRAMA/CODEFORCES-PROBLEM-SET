#include<iomanip>
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<string>
#include <iterator>
#include <map>
#include <math.h>
#include <sstream>

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

//
////int main()
////
////{
////    string s;
////    cin>>s;
////    ll i,count=0;
////    for(i=0;i<s.size();i++)
////    {
////        if(s[i]==4||s[i]==7)
////        {
////            count++;
////        }
////    }
////    if(count==s.size())
////    {
////        cout<<"YES"<<nn;
////    }
////    else{
////        ll n;
////        stringstream ss;
////          ss << s;
////          ss >> n;
////        if(n%4==0||n%7==0)
////        {
////            if((n/4)%2==0&&(n/7)%2==0)
////            {
////                cout<<"YES"<<nn;
////            }
////            else{
////                cout<<"NO"<<nn;
////            }
////        }
////    }
////}
////
////// Conversion of int into string using
////// to_string()
////string stri = to_string(i_val);
////
////// Conversion of float into string using
////// to_string()
////string strf = to_string(f_val);
//
//
//void check(ll n,string s)
//{
//    s = to_string(n);
//    ll i,count=0;
//    for(i=0;i<s.size();i++)
//    {
//        if(s[i]=='4'||s[i]=='7')
//        {
//            count++;
//        }
//    }
//    cout<<count<<nn;
//    if(count==s.size())
//    {
//        cout<<"YES"<<nn;
//    }
//}
//
//
//
//
//
//
//
//int main()
//
//{
//    ll n;
//    cin>>n;
//    string s = to_string(n);
//    ll i,count=0;
//    for(i=0;i<s.size();i++)
//    {
//        if(s[i]=='4'||s[i]=='7')
//        {
//            count++;
//        }
//    }
//    cout<<count<<nn;
//    if(count==s.size())
//    {
//        cout<<"YES"<<nn;
//    }
//    else //if(n%4==0||n%7==0)
//    {
//        for(i=0;i<n;i++)
//        {
//            ll p=n/i;
//            if(n%i==0&&i%2==0)
//            {
//                string r;
//                check(p,r);
//            }
//            else{
//                cout<<"NO"<<nn;
//            }
//        }
////        if((n/4)%2==0&&(n/7)%2==0)
////        {
////            cout<<"YES"<<nn;
////        }
////        else{
////            cout<<"NO"<<nn;
////        }
//    }
////    else{
////        cout<<"NO"<<nn;
////    }
////    else{
////        string s = to_string(n);
////        ll i,count=0;
////        for(i=0;i<s.size();i++)
////        {
////            if(s[i]==4||s[i]==7)
////            {
////                count++;
////            }
////        }
////        if(count==s.size())
////        {
////            cout<<"YES"<<nn;
////        }
////    }
//
//
//
//
//
//
//
////    ll i,count=0;
////    for(i=0;i<s.size();i++)
////    {
////        if(s[i]==4||s[i]==7)
////        {
////            count++;
////        }
////    }
////    if(count==s.size())
////    {
////        cout<<"YES"<<nn;
////    }
////    else{
////        ll n;
////        stringstream ss;
////          ss << s;
////          ss >> n;
////        if(n%4==0||n%7==0)
////        {
////            if((n/4)%2==0&&(n/7)%2==0)
////            {
////                cout<<"YES"<<nn;
////            }
////            else{
////                cout<<"NO"<<nn;
////            }
////        }
////    }
//}
//
//






int main()
{
    ll n;
    cin>>n;
    if(n%7==0||n%444==0||n%777==0||n%447==0||n%774==0||n%477==0||n%744==0||n%77==0||n%44==0||n%74==0||n%47==0||n%4==0)
    {
        cout<<"YES"<<nn;
    }
    else{
        cout<<"NO"<<nn;
    }
}































