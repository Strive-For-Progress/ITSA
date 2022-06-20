#include <iostream>
using namespace std;
const int N = 11;
int a[N][N];
int dp[N][N];
int main () {
	int n,m;
	while (cin >> n >> m) {

		for (int i=0 ; i<n ; i++)
			for (int j=0 ; j<m ; j++) 
				cin >> a[i][j];

			
		for (int i=0 ; i<n ; i++)
			for (int j=0 ; j<m ; j++) {
				if (!i & !j)  dp[i][j] =  a[i][j];
				else if (!i)  dp[i][j] = dp[i][j-1] + a[i][j];
				else if (!j)  dp[i][j] = dp[i-1][j] + a[i][j];
				else dp[i][j] = min (dp[i-1][j] ,dp[i][j-1]) + a[i][j];
			}
			
		cout <<dp[n-1][m-1] << endl;
	}
	return 0;
}
