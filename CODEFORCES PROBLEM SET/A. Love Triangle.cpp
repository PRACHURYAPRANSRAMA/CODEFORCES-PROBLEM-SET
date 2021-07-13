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
//int main()
//
//{
//    ll n,i,j,k,ad=0,sum=0;
//    cin>>n;
//    ll a[n];
//    for(i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
////    for(i=1;i<=n;i++)
////    {
////        for(j=1;j<=n;j++)
////        {
////            if(j==a[i])
////            {sum++;
////                for(k=1;k<=n;k++)
////                {
////                    if(k==a[j]){ad++;}
////                }
////            }
////        }
////    }
//    for(i=0;i<n;i++)
//        if(a[a[a[i]]]==i)ad++;
//    cout<<(ad!=0?"YES":"NO");
////    cout<<sum<<nn;
////    if(ad!=0){cout<<"YES"<<nn;}
////    else{cout<<"NO"<<nn;}
//
//
//}

//int a[5001],i=1,n,z;
// int main(){
//   cin>>n;
//     for(;cin>>a[i++];);
//    for(i=1;i<=n;i++)if(a[a[a[i]]]==i)z=1;
//    cout<<(z?"YES":"NO");
//}

int main()
{
    ll n,i,ad=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[a[a[i]]]==i)
        {ad++;}
    }
    if(ad!=0){cout<<"YES"<<nn;}
    else{cout<<"NO"<<nn;}
    
}
//#include <iostream>
//int a[5001],i=1,n,z;
//main(){
//    std::cin>>n;
//    for(;std::cin>>a[i++];);
//    for(i=1;i<=n;i++)if(a[a[a[i]]]==i)z=1;
//    std::cout<<(z?"YES":"NO");
//}
