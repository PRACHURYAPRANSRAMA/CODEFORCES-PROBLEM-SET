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
//#define x       first
//#define y      second
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

/* Function to reverse arr[] from start to end*/
void rvereseArray(ll arr[], ll start, ll end)
{
    while (start < end)
    {
        ll temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArray(ll arr[], ll size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

void solve()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    ll i,ad=0,count=0,sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        ad+=a[i];
        if(ad==x)
        {
            ll temp = a[i];
            a[i] = a[n-1];
            a[n-1] = temp;
            count++;
            break;
        }
        
    }
    if(ad==x&&i==n-1)
    {
        cout<<"NO"<<nn;
        return;
    }
    if(n==1&&a[0]==x)
    {
        cout<<"NO"<<nn;
        return;
    }
    if(count==0)
    {
        cout<<"YES"<<nn;
        printArray(a, n);
        return;
    }
//    if(n==1&&a[0]==x)
//    {
//        cout<<"NO"<<nn;
//        return;
//    }
    else{
        //rvereseArray(a,0,n-1);
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            //cout<<sum<<nn;
            if(sum!=x)
            {
                cout<<"YES"<<nn;
                printArray(a, n);
                return;
               
            }
            else{
                cout<<"NO"<<nn;
               return;
            }
        }
        
    }
    
    
    
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
