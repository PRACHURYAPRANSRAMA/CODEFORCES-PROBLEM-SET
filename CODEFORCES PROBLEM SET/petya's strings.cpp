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


//
//
//
//// Function to print the vector
//void Print(vector<string> v)
//{
//    for (auto i : v)
//        cout << i << endl;
//}
//
//// Comparator function to sort the
//// array of string wrt given conditions
//bool my_compare(string a, string b)
//{
//    // Check if a string is present as
//    // prefix in another string, then
//    // compare the size of the string
//    // and return the larger size
//    if (a.compare(0, b.size(), b) == 0
//        || b.compare(0, a.size(), a) == 0)
//
//        return a.size() > b.size();
//
//    // Else return lexicographically
//    // smallest string
//    else
//        return a < b;
//}
//
//// Driver Code
//int main()
//{
//    string s,p;
//    cin>>s;
//    transform(s.begin(), s.end(), s.begin(), ::tolower);
//
//    cin>>p;
//    transform(p.begin(), p.end(), p.begin(), ::tolower);
//    // GIven vector of strings
//    vector<string> v = { s, p };
//
//    // Calling Sort STL with my_compare
//    // function passed as third parameter
//    sort(v.begin(), v.end(), my_compare);
//
//    // Function call to print the vector
//    //Print(v);
//    if(v[1]==s){
//        cout<<"1"<<nn;
//    }
//    if(v[1]==p){
//        cout<<"-1"<<nn;
//    }
//    if(v[1]==v[2]){
//        cout<<"0"<<nn;
//    }
//    return 0;
//}















int main()
{
    // initializing char arrays
//    char one[] = "geeksforgeeks";
//    char two[] = "gfg";
    string s,p;
    ll r=s.size();
    ll n=p.size();
    char e[r],o[n];
    //cin>>e[r]>>o[n];
    for(ll i=0;i<r;i++)
    {
        cin>>e[i];
    }
    for(ll i=0;i<r;i++)
    {
        cin>>o[i];
    }
//    cin>>s;
//
//        transform(s.begin(), s.end(), s.begin(), ::tolower);
//
//        cin>>p;
//        transform(p.begin(), p.end(), p.begin(), ::tolower);
   
    // using lexicographical_compare for checking
    // is "one" is less than "two"
    if( lexicographical_compare(e, e+r, o, o+n))
    {
        cout <<"1"<<nn ;
          
    }
    else if(lexicographical_compare(o, o+n, e, e+r))
    {
        cout<<"-1"<<nn;
    }
    else{
        cout<<"0"<<nn;
    }
      
}












