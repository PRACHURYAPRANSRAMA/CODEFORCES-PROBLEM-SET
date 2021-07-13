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


int main()

{
    ll n;
    cin>>n;
    ll i,ad1=0,a[n],ad2=0,ad3=0,ad4=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1){ad1++;}
        if(a[i]==2){ad2++;}
        if(a[i]==3){ad3++;}
        if(a[i]==4){ad4++;}
    }
    //cout<<ad1<<nn;
//    cout<<ad1+ad2+ad3<<nn;
//    cout<<(ad1+ad2+ad3)/4+(ad1+ad2+ad3)%4<<nn;
  //  cout<<ad4<<nn;
    if(ad3>=ad1)
    {
        if(ad2<=1)
        {
            cout<<ad3+ad4+ad2<<nn;
            return 0;
        }
        if(ad2%2==0&&ad2>1)
        {
            cout<<ad3+ad4+ad2/2<<nn;
            return 0;
        }
        else{
            cout<<ad3+ad4+(ad2/2)+(ad2*2)%4<<nn;
            return 0;
        }
       
    }
    else{
        if(ad1-ad3<=2&&ad1-ad3>0&&ad3!=0)
        {
            cout<<ad4+ad3+ad2<<nn;
            return 0;
        }
        if(ad1-ad3<=4&&ad1-ad3>2&&ad3!=0)
        {
            cout<<ad4+ad2+ad1<<nn;
            return 0;
        }
        if(ad3==0)
        {
            if(ad1>=4)
            { cout<<ad4+ad2+(ad1/4)+(ad1%4)<<nn;return 0;}
            if(ad1<4){
                cout<<ad4+ad2+1<<nn;
            }
        }
        
    }
//    if(ad1+ad2+ad3>=4||ad4!=0)
//    {if((ad1+ad2+ad3)%4!=0)
//        cout<<((ad1+ad2+ad3)/4)+((ad1+ad2+ad3)%4)+ad4<<nn;
//    else{
//        cout<<((ad1+ad2+ad3)/4)+ad4<<nn;
//    }
//        //cout<<((ad1+ad2+ad3)/4)+((ad1+ad2+ad3)%4)+ad4<<nn;
//    }
//    else{
//        cout<<"1"<<nn;
//    }
}
