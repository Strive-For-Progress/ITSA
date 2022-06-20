#include <iostream>
using namespace std;

const int  N = 100;
int pre[N],post[N],a[N];
int  main (int  argc,char **argv) {
    int num,n;
	cin >> n;
    for (int i=1;i<=n;i++) {
    	cin >> a[i];
    	pre[i] = a[i] +pre[i-1];
    }
    for (int i=n,j=1 ;i>=0 ;i--,j++) post[j] = a[i] +post[j-1];
    
    int match = -1;
    for(int i=1,j=1; i<=n&&j<=n ;) {
        if (pre[i] ==post[j]) {
          cout << pre[i] << endl;
          i++,j++;
        }
        else if (pre[i] > post[j]) j++;
        else i++;
    }
    return 0 ;
}
