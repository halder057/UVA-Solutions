#include<iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>

using namespace std;

int R[20] = {
6,8,
35,49,
204,288,
1189,1681,
6930,9800,
40391,57121,
235416,332928,
1372105,1940449,
7997214,11309768,
46611179,65918161
};
int main()
{
    int i;
    for(i = 0; i<20; i+= 2)
        printf("%10d%10d\n",R[i],R[i+1]);
    return 0;
}
