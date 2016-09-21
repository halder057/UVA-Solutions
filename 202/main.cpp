#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {

         map<int,bool>mp;
         int a,b,c;

         while( 1){

             if(n == 1)
                return true;
             if(mp[n] == true)
                return false;
             a = 0;
             mp[n] = true;

             while(n > 0){
                 a += (n%10)*(n%10);
                 n /= 10;
             }
             n = a;
         }

    }
};

int main()
{
    int n;
    cin>>n;

    Solution ob;

    cout<<ob.isHappy(n);

    return 0;
}
