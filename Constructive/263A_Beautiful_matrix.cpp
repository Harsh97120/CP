#include <bits/stdc++.h>
using namespace std;

#define loop(i , a , b) for(int i=a;i < b;++i)
#define ll long long 

void print(int val){cout << val << "\n";}
void print(const char * str){cout << str ; }
void print(string str){cout << str ;}
 
int main()
{
    int x , y ; 
    int val = 1 ; 

    loop(i , 1 , 6)
    {
        loop(j , 1 , 6)
        {
            cin >> val ; 
            if(val == 1)
            {
                x = i ; 
                y = j ; 
            }
        }
    }

    int steps = abs(x - 3) + abs(y - 3);
    print(steps);

    return 0;
}

