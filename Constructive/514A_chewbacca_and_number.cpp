#include <bits/stdc++.h>
using namespace std;

#define ll long long 

void print(int val){cout << val << "\n";}
void print(const char * str){cout << str ; }
void print(string str){cout << str ;}

ll myPow(ll number , ll power)
{
    ll val = 1 ; 
    for(ll i=0;i < power;++i)
    {
        val = val * number ;
    }

    return val ; 
}
 
int main()
{
    string number; 
    cin >> number ; 

    int n = number.length();

    if(number[0] != '9' && number[0] >= '5')
    {
        int digit = number[0] - '0';
        number[0] = (9 - digit) + '0';
    }



    for(int i=1;i < n;++i)
    {
         if(number[i] >= '5')
        {
            int digit = number[i] - '0';
            number[i] = (9 - digit) + '0';
        }
    }


    print(number);


    return 0;
}