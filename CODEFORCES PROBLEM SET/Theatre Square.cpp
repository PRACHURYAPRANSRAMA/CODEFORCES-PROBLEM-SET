//#include <iostream>
//using namespace std;
//int main()
//{
  //  int n,m,a,p,s;
    //p=n*m;
    //s=a*a;
    //cin>>n>>m>>a;
    //int x=p/s;
    //cout<<2*x<<endl;
//}
#include <iostream>
using namespace std;
int main()
{
    long long int n, m, a,x,y,pps;
    cin >> n >> m >> a;
    x = n / a;
 
    if (n % a != 0)
        x++;
 
    y = m / a;
 
    if (m % a != 0)
        y++;
 
    pps = x * y;
    cout << pps;
}
