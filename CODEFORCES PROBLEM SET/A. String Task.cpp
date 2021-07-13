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



//void solve()
//{
//    //Initializing variable.
//        char str[100];
//        int i,j,len=0;
//
//        //Accepting input.
//        cout<<"Enter a string : ";
//        gets(str);
//        len=strlen(str);
//
//        //Accepting input.
//        for(i=0; i<len; i++)
//        {
//            //Checking vowels.
//            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
//            {
//
//                //Deleting vowels.
//                for(j=i; j<len; j++)
//                {
//                    //Storing string without vowels.
//                    str[j]=str[j+1];
//                }
//            len--;
//            }
//        }
//        cout<<"After deleting the vowels, the string will be : "<<str;
//
//
//
//
//
//}
//
//
//
//
//int main()
//
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//
//}




string change_case(string a)
{
    int l = a.length();
      
    for(int i = 0 ; i < l ; i++)
    {
        // If character is lowercase
        // change to uppercase
//        if(a[i] >= 'a' && a[i] <= 'z')
//            a[i] = (char)(65 +
//                   (int)(a[i] - 'a'));
              
        // If character is uppercase
        // change to lowercase
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = (char)(97 +
                   (int)(a[i] - 'A'));
    }
      
    return a;
      
}
  
// Function to delete vowels
string delete_vowels(string a)
{
    string temp = "";
    int l = a.length();
    for(int i = 0 ; i < l ; i++)
    {
        //If character is consonant
        if(a[i] != 'a' && a[i] != 'e' &&
           a[i] != 'i' && a[i] != 'o' &&
           a[i] != 'u' && a[i] != 'A' &&
           a[i] != 'E' && a[i] != 'O' &&
           a[i] != 'U'&& a[i] != 'I'&&a[i]!='y'&&a[i]!='Y')
            temp += a[i];
    }
      
    return temp;
      
}
  
// Function to insert "#"
string insert_hash(string a)
{
    string temp = "";
    int l = a.length();
      
    for(int i = 0 ; i < l ; i++)
    {
        // If character is not special
        if((a[i] >= 'a' && a[i] <= 'z') ||
           (a[i] >= 'A' && a[i] <= 'Z'))
            temp = temp + '.' + a[i];
        else
            temp = temp + a[i];
    }
      
    return temp;
      
}
  
// Function to transfrm string
void transformSting(string a)
{
    string b = delete_vowels(a);
    string c = change_case(b);
    string d = insert_hash(c);
  
    cout << d;
}
  
// Driver function
int main()
{
    string a ;
    cin>>a;
      
    // Calling function
    transformSting(a);
      
    return 0;
}
