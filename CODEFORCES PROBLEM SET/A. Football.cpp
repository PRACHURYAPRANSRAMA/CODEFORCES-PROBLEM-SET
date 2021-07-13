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
//    cin>>s;
//    ll i,add=0,sum=0;
//    for(i=0;i<s.size();i++)
//    {
//        if(s[i]==s[i+1]=='1')
//        {
//            add++;
//        }
//        if(s[i]==s[i+1]=='0')
//        {
//            sum++;
//        }
//    }
//    if()
//
//}
void solve(string s, ll k)
{
    // count of sub-strings, length,
    // initial position of sliding window
  ll count = 0, length = 0, pos = 0;
  
    // map to store the frequency of
    // the characters of sub-string
    map<char, ll> m;
  
    for (ll i = 1; i <= s.length(); i++) {
  
        // increase the frequency of the character
        // and length of the sub-string
        m[s[i]]++;
        length++;
//
//        // if the length of the sub-string
//        // is greater than K
        if (length > k) {

            // remove the character from
            // the beginning of sub-string
            m[s[pos++]]--;
            length--;
        }
  
        // if the length of the sub string
        // is equal to k and frequency of one
        // of its characters is equal to the
        // length of the sub-string
        // i.e. all the characters are same
        // increase the count
//        if (length == k && m[s[i]] == length)
//            count++;
        if (length == k && m[s[i]] == length&&(s[i]=='1'||s[i]=='0'))
            count++;
    }
  
    // display the number
    // of valid sub-strings
   // cout << count << endl;
    if(count>=1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
  
// Driver code
//int main()
//{
//    string s = "**a***";
//    int k = 3;
//
//    solve(s, k);
//
//    return 0;
//}
int main()

{
   ll k;
    
   
    k=7;
        string p;
        cin>>p;
        solve(p,k);
      
        
    
}
