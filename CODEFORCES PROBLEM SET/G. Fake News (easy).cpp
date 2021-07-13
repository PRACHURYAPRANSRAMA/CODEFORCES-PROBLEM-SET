
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
//    ll ad=0,i,p=0,q=0,w=0,d=0,f=0;
//    for(i=0;i<s.size();i++)
//    {
//        if(s[i]=='h')
//        {
//            ad++;
//        }
//        if(s[i]=='e')
//        {
//            p++;
//        }
//        if(s[i]=='i')
//        {
//            q++;
//        }
//        if(s[i]=='d')
//        {
//            w++;
//        }
//        if(s[i]=='i')
//        {
//            d++;
//        }
//        else{
//            f++;
//        }
//    }
//
//    if(ad!=0&&p!=0&&q!=0&&w!=0&&d!=0&&s.size()>=6&&f!=0)
//    {
//        cout<<"YES"<<nn;
//    }
//    else{
//        cout<<"NO"<<nn;
//    }
//}
bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0; // For index of str1 (or subsequence
 
    // Traverse str2 and str1, and
    // compare current character
    // of str2 with first unmatched char
    // of str1, if matched
    // then move ahead in str1
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
 
    // If all characters of str1 were found in str2
    return (j == m);
}
 
// Driver program to test methods of graph class
int main()
{
    string str1;//[] = "gksrek";
    string str2;//[] = "geeksforgeeks";
    cin>>str2;
    str1="heidi";
    int m = str1.size();//len(str1);
    int n = str2.size();//len(str2);
    isSubSequence(str1, str2, m, n) ? cout << "YES "
                                    : cout << "NO";
    return 0;
}
