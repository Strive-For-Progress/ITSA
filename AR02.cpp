#include <iostream>
using namespace std;
	
int main () {
	long long int  a[3] = {0};
	long long int  b[21] = {0};
	long long int  c[21] = {0};
	int t;
	for (int i=2 ; i>=0 ; i--) {
		cin >>a[i]; b[i] = a[i];
	}
	cin >> t;
	for (int k=0 ; k<t-1 ;k++){
		for (int j =0 ; j<3 ; j++) {
			for (int i =0 ; i<3+(k)*2 ; i++) {
				 c[i+j] += b[i]*a[j];
			}
		}
		for (int i =0 ; i <21 ; i++) {
			b[i] = c[i];
			c[i] = 0;
		}
	}
	
	for (int i =t*2 ; i>=0 ; i--) {
		cout <<b[i];
		if (i != 0) 
		cout<<" ";
	}
	cout<<endl;
	return 0;
}
