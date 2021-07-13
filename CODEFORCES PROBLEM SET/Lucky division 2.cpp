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
 
bool check(int n){
    while(n>0){
        if(n%10==4||n%10==7){
            n/=10;
            continue;
        }
        return false;
    }
    return true;
}
 
int main(){
    
    
    int n;
    cin >> n;
    
    if(check(n)){
        cout << "YES" << nn;
    }
    else{
        int i;
        for(i=1;i<n;i++){
            if(n%i==0&&check(i)){
                cout << "YES" << nn;
                break;
            }
        }
        if(i==n){
            cout << "NO" << nn;
        }
    }
    
    return 0;
}
