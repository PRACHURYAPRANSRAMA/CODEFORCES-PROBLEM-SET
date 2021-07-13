//#include<iomanip>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<tuple>
//#include<string>
//#include <iterator>
//#include <map>
//#include<math.h>
//
//using namespace std;
//
//#define pb     push_back
//#define nn     endl
//#define pll    pair<int,int>
//#define ll     long long int
//#define vll    vector<int>
//#define all(a) (a).begin(),(a).end()
//#define x       first
//#define y      second
//#define sz(x)  (int)x.size()
//#define hell   1000000007
//#define lbnd   lower_bound
//#define ubnd   upper_bound
//#define bs     binary_search
//#define mi     map<int,int>
//#define gcd(a,b)  __gcd((a),(b))
//#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
//#define rep(i,a,b) for(int i=a;i<b;i++)
//#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie
//
//bool check(int n){
//    while(n>9){
//
//        //if(n%10==4||n%10==7){
//        if(n%10==(n/10)%10)
//        { n/=10;
//            continue;
//        }
//        return false;
//    }
//    return true;
//}
//
//
//void solve()
//{
//    int n;
//    cin >> n;
//
////    if(check(n)){
////        cout << "YES" << nn;
////    }
////    if(n>=1||n<=9)
////    {
////        cout<<"YES"<<nn;
////    }
//    if(n<10)
//    {
//        cout<<n<<nn;
//        }
//   else{
//        int i,count=0,ad=0;
//        for(i=10;i<=n;i++){
//            //if(i>=1||i<=9){count++;}
//            if(i%10==(i/10)%10){
//                //i/=10;
//
//                ad++;
//            }
//        }
//       cout<<ad+9<<nn;
//   }
//
////    int i,count=0,ad=0;
////    for(i=1;i<=n;i++){
////        //if(i>=1||i<=9){count++;}
////        if(i%10==(i/10)%10){
////            //i/=10;
////
////            ad++;
////        }
////    }
////   cout<<ad<<nn;
//
//
//
//    //ll q=(count+ad);
//
////    else{
////        cout<<n<<nn;
////    }
////    else{
////        cout<<(count)<<nn;}
////        if(i==n){
////            cout << "NO" << nn;
////        }
//    //}
//    //cout<<ad+9<<nn;
//}
//
//
//int main(){
//
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//
//    return 0;
//}
//
//
//


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



void solve()
{
    
//    int n,a,b,c,d;cin>>n;
//   int  q=1;
//    do q++,a=n/1000,b=(n/100)%10,c=(n/10)%10,d=n%10;
//    while(a==b||a==c||a==d||b==c||b==d||c==d);
//    cout<<q;
    

long long int n,i,j,count=0;
cin>>n;
for(i=1;i<=n;i=i*10+1){
for(j=1;j<=9;j++)
if(i*j<=n)
count++;}
cout<<count<<endl;
}





int main()

{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
}










