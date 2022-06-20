#include <iostream>
using namespace std;
const int  N = 1000;
unsigned long long fib[N] = {1,2,3,5,8,13};


int  main () {

    for (int i=6 ;i<N ;i++)
        fib[i] = fib[i-1] +fib[i-2] ;
    int n;
    cin >> n;
    cout << fib[n-1] << endl; 
    return 0 ;
}
