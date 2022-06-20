#include <iostream> 
using namespace std;
const int N = 5010;
int a[N];

int main () {
	int n ,cnt = 0;
	cin >> n;
	for (int i=0 ; i<n ;i++) cin >> a[i];

	for (int i=0 ; i<n ;i++) 
		for (int j=i+1 ; j<n ; j++) 
			if (a[i] > 2*a[j]) cnt++;		
	cout << cnt <<endl;

	return 0;
}
