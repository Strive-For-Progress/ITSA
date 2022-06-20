#include <iostream>
#include <iomanip>
using namespace std;
int  main (int  argc,char **argv) {
    int n;
    double ans= 0.0;
    cin >> n;
 	if (n%2) for (int i=1 ; i<=n ; i+=2) ans += 1.0/(double)i;
  	else  	 for (int i=2 ; i<=n ; i+=2) ans += 1.0/(double)i;
    cout  << fixed << setprecision(11) << ans << endl;
    return 0 ;
}
