#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {

        int i,j,k;
        bool ar[n];

        if(n<=2)
            return 0;

        memset(ar,true,sizeof(ar));

        for(i=2 ,k = 1 ;i<= sqrt(n)+2 ;i++){
           if(ar[i])
            for(j=i+i ; j<n; j+=i){

                ar[j] = false;
            }
        }
        for(i=3 ;i<n ;i+=2)
            if(ar[i]){
                //cout<<i<<endl;
                k++;
            }

        return k;
    }
};


int main()
{
    int n;
    cin>>n;

    Solution ob;

    cout<<ob.countPrimes(n);

    return 0;
}
