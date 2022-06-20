#include <iostream>
using namespace std;
int  main () {
    int n,m,trace =0;
    cin>>n;
    for (int i=0; i<n ;i++)
	    for (int j=0; j<n ;j++) {
	     	cin>>m;
	        if (i==j) trace+=m;
	    }
	cout <<trace <<endl;
    return 0 ;
}
