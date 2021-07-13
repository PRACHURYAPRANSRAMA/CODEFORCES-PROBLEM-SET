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
//    ll n,m,i;
//    cin>>n>>m;
//    string temp="",s="",v="";
//    for(i=1;i<=n;i++)
//    {
//        if(i%2!=0)
//        { string p;
//            p=to_string(i);
//            temp+=p;}
//        else{string r;r=to_string(i);
//            s+=r;
//        }
//    }
//    v=temp+s;
//    cout<<v;
//    cout<<nn;
//    if(m<=9)
//    {
//        cout<<v[m]<<nn;
//
//    }
//    else{
//        cout<<v[m-1]<<v[m]<<nn;
//    }
//
//        }




int main()
{
    ll n,i,j,m;
    cin>>n>>m;
    vector<ll> v;
    v.push_back(1);
    for(i=1;i<=n;i++)
    {
        
        if(i%2!=0)
        {
            v.push_back(i);
        }
        
    }
    for(j=1;j<=n;j++)
    {
        if(j%2==0)
        {
            v.push_back(j);
        }

    }
    for(i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<nn;
//    if(m==1)
//        cout<<"1"<<nn;
//    else{
        cout<<v[m]<<nn;//}
    
    
}




//main(){long long n,k;std::cin>>n>>k;n=(n+1)/2;std::cout<<(k>n?2*(k-n):2*k-1);}










