#include <iostream>
using namespace std;

int  main (int  argc,char **argv) {
    long long int n,cnt=0;
    cin >> n;
    for (int i=1,j; i<n ;i++){
        cin >> j;
        cnt+=j;
    }
    printf("%lld\n",(1+n)*n/2-cnt);
    return 0 ;
}
