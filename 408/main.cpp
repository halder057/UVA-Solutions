/*
02
USER: Robin Halder Dev
03
TASK:
04
ALGO:
05
*/

/*
#pragma warning (disable: 4786)
#pragma comment (linker, "/STACK:0x800000")

*/

#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>
using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template< class T > bool inside(T a, T b, T c) { return a<=b && b<=c; }

#define MP(x, y) make_pair(x, y)
#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define MEM(p, v) memset(p, v, sizeof(p))
#define CPY(d, s) memcpy(d, s, sizeof(s))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define SZ(c) (int)c.size()
#define PB(x) push_back(x)
#define ff first
#define ss second
#define LL long long
#define LD long double
#define pii pair< int, int >
#define psi pair< string, int >

const double EPS = 1e-9;
const int INF = 0x7f7f7f7f;
const double PI = acos(-1.0);





int main() {

    int i,j,k,cases=0,n,t;

    long step,mod;
    vector<int>a;

       while(scanf("%ld %ld",&step,&mod)==2)
       {
          a[0]=0;
          vector<int>v;
          int flag=1;

          for(i=0;i<mod;i++)
          {
             a[i+1]=(a[i]+step)%mod;

                  if(!v[i])
                  {
                       v[a[i+1]]=1;
                  }

                else
                {
                  flag=0;
                  break;
                }

          }
               if(flag)
                 cout<<"Good\n";
               else
                 cout<<"bad\n";

       }


    return 0;

}
