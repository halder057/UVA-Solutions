#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {

  string s;


  while(cin>>s)
  {
      if(s=="#") break;
      string cp;

          while ( next_permutation (s.begin(),s.end()) )
         {
             cp=s;
             break;
         }

         if(cp.size()==0)
         cout<<"No Successor\n";
         else
         cout<<cp<<endl;

  }



  return 0;
}
