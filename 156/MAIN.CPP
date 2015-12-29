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
const int INF = 999999;
const double PI = acos(-1.0);



int main() {

    int i,j,k,cases=0,n,t;
    string s[1005],ss,printing[1005],tt;
    vector<string>v;
    k=0;
    map<int,string>mp;

           while(cin>>ss)
           {
               if(ss=="#")
                 break;

              printing[k]=ss;

               for(i=0;i<ss.size();i++)
                 ss[i]=tolower(ss[i]);

               sort(ss.begin(),ss.end());
               s[k++] =ss;



           }

            for(i=0;i<k;i++)
            {
                ss=s[i];
                int flag=0;

                  for(int l=0;l<k;l++)
                  {
                      tt=s[l];

                         if(ss==tt)
                           flag++;
                  }
                        if(flag<=1)
                         v.push_back(printing[i]);

            }
             /*

                 for(i=0;i<v.size();i++)
                 {
                     for(j=0;j<v.size();j++)
                     {
                         if(lexicographical_compare(v[j].begin(),v[j].end() ,v[i].begin(),v[i].end()) );

                           {
                                ss=v[j];
                                v[j]=v[i];
                                v[i]=ss;
                           }
                     }

                 }

       */

         sort(v.begin(),v.end());

                 for(i=0;i<v.size();i++)
                  cout<<v[i]<<endl;

    return 0;

}
