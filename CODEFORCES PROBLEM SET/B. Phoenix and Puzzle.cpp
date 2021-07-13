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




bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}

void solve(){
  int n;
  cin>>n;
  if (n%2==0 && isSquare(n/2))
    cout<<"YES"<<endl;
  else if (n%4==0 && isSquare(n/4))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}

int main(){
  int t; cin>>t;
  while (t--)
    solve();
}//void solve()
//{
//    ll n,p,s,ad=0;
//    cin>>n;
//    //if(((n/2)==1||(n/2)%2==0)&&n>1&&n%2==0)
////    if((n==pow(2,p)||n==pow(3,s)||n==pow(2,p)+pow(3,s))&&(p==2||p==3)&&(s==2||s==3))
//    for(ll i=1;i<100;i++)
//    {
//    if(n==pow(2,i))
//    {
//        cout<<"YES"<<nn;
//        ad++;
//       // cout<<i<<nn;
//        return;
//    }}
//    if(ad==0)
//    {
//        cout<<"NO"<<nn;
//        return;
//    }
//
//}




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
