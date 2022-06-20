#include <iostream>
using namespace std;
const int N = 10010;
int ans[N] ;
int f (int x) {
    if (x<N && ans[x]>0) return ans[x];
    if (x==1) return 0;
    if (x%2) return f(3*x+1)+1;
    else return f(x/2)+1;
}
int  main (int  argc,char **argv) {
    for (int i=1; i<=10000 ;i++) ans[i] =f(i);
    int n,j;
    cin >> n;
    while(n--){
	    cin >> j;
	    (j == 1) ? cout << "1" <<endl : cout << ans[j] <<endl;
    }
    return 0 ;
}
