#include <bits/stdc++.h>
using namespace std;

// String longer is divisible by smaller or not. 
 
bool isDivisible(string longer , string smaller)
{
    int n = longer.length() ; 
    int m = smaller.length() ; 

    if(m > n)
    {
        return 0 ; 
    }

    if(m == n)
    {
        return longer == smaller ; 
    }

    for(int i=0;i < n;i+=m)
    {
        string substr = longer.substr(i , m);
        if(substr != smaller)
        {
            return 0 ; 
        }
    }

    return 1 ; 
}
