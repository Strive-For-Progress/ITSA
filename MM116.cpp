#include <iostream>
using namespace std;

int  main (int  argc,char **argv) {
    int n ,sum=0;
    string num;
    cin >> n;
    for(int i=0; i<n ; i++) {
	sum=0;
	cin >> num;
	int m = num.length();
	for (int i=0 ;i<m ;i++)  {
	    if(i%2) sum += (num[i]-'0');
	    else  sum -= (num[i]-'0');
	}
	if (sum %11== 0) cout << "true";
	else cout << "false";
    	cout << endl;
    }
    return 0 ;
}
