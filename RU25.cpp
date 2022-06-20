#include <iostream>
using namespace std;
typedef unsigned long long ULL;
ULL pow (ULL a,ULL b) {
    ULL res = a;
    while(--b)  res*=a;
    return res;
}
int  main () {
    int n;
    cin >> n;
    ULL ans = pow (2,n)-1;
    cout << ans <<endl;
    return 0 ;
}
