#include <bits/stdc++.h>
using namespace std;
 
int getSecondLargest(vector<int> &arr) {
    // code here
    int maxi1 = -1 ; 
    int maxi2 = -1 ;
    
    for(auto it:arr)
    {
        if(it > maxi1)
        {
            maxi2 = maxi1 ; 
            maxi1 = it ;
        }
        else if(it > maxi2 && it != maxi1)
        {
            maxi2 =it ;
        }
    }
    
    return maxi2 ; 
}
