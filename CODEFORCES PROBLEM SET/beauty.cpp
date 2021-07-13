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
    int a[5][5];
    int i,j,ad=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                if(j>2&&i>2)
                {
                    cout<<j<<" "<<i<<" "<<nn;
                    cout<<(j+i)-4<<" 1"<<nn;
                    return 0;
                }
                if(j==2&&i<2)
                {
                    cout<<j<<" "<<i<<" "<<nn;
                    cout<<2-i<<" 2"<<nn;
                    return 0;
                }
                if(j==2&&i>2)
                {
                    cout<<j<<" "<<i<<" "<<nn;
                    cout<<i-2<<" 2"<<nn;
                    return 0;
                }
                if(i==2&&j<2)
                {
                    cout<<j<<" "<<i<<" "<<nn;
                    cout<<2-j<<" 3"<<nn;
                    return 0;
                }
                if(i==2&&j>2)
                {
                    cout<<j<<" "<<i<<" "<<nn;
                    cout<<j-2<<" 3"<<nn;
                    return 0;
                }
                if(j<2&&i<2)
                {
                    cout<<j<<" "<<i<<" "<<nn;
                    cout<<4-(j+i)<<" 4"<<nn;
                    return 0;
                }
                if(j>2&&i<2)
                {
                    cout<<j<<" "<<i<<" "<<nn;
                    cout<<(j-i)<<" 5"<<nn;
                    return 0;
                }
                if(j<2&&i>2)
                {
                    cout<<j<<" "<<i<<" "<<nn;
                    cout<<(i-j)<<" 6"<<nn;
                    return 0;
                }
                else{
                    cout<<j<<" "<<i<<" "<<nn;
                    cout<<"0"<<" 7"<<nn;
                    return 0;
                }
               // return 0;
            }
            else{
                
                ad++;
            }
        }
    }
    cout<<ad<<nn;
}
