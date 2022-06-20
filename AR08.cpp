#include <iostream>
using namespace std;
	
int main () {
	long long int  a[101] = {0};
	int head = 0 ,maxv = 0, tmp ;
	while (cin >> a[head++]) {
		tmp += a[head-1];
		if (tmp > maxv) maxv = tmp;
		else if ( tmp < 0 ) tmp = 0;
	}
	cout<<maxv<<endl;
	return 0;
}
