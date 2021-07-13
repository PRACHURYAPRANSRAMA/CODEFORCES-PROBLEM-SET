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
    ll n,m,i,j;
    cin>>n>>m;
    char a[n][m];
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            if(i%2==0)
//            {
//                a[i][j]='#';
//            }
//            if(j==m-1)
//            {
//                a[i][j]='#';
//            }
//            else{
//                a[i][j]='.';
//            }
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            cout<<a[i][j];
//
//        }
//    }
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i%2!=0)
            {
               cout<<"#";
               
                //cout<<nn;
            }
           if(i%4==0&&j==1)
           {
               cout<<"#";
           }
            if(j==m&&i%2==0&&i%4!=0)
            {
                cout<<"#";
               
            }
            if(i%2==0&&j!=m){
                cout<<".";
               
            }
           
        }
        cout<<nn;
    }
    
}




int main()

{
   
    
        solve();
    
    
}
