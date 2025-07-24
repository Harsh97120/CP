#include <bits/stdc++.h>
using namespace std;

int main()
{
    // No capture 
    // auto function_name 
    auto sum = [](int a , int b)
    {
        return a + b ; 
    };
    cout << "Sum: " << sum(3, 4) << "\n";

    // Capturing local variables
    int x = 10 , y = 11 ; 
    auto mul = [x , y]()
    {
        return x*y ; 
    };
    cout << "Product: " << mul() << "\n";

    // Capturing by reference
    int cnt = 0 ;
    auto increment = [&cnt]()
    {
        ++cnt ; 
    };
    increment();
    increment();
    cout << "Counter: " << cnt << "\n";

    // Recursive lambda
    // function<return type <parameter p1 type>> function_name = [&](<parameter p1 type>)
    // {};
    function <int(int)> fact = [&](int n)
    {
        return (n <= 1) ? 1 : n * fact(n - 1);
    };
    cout << "Factorial of 5: " << fact(5) << "\n";

    return 0;
}

