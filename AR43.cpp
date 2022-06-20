#include <iostream>
using namespace std;
const int  N = 12;
int matrix[N][N];

int  main (int  argc,char **argv) {
 int n,m,k=0;
 cin >> m >> n; 
 for (int r=0; r<2;r++)
    for (int i=0 ; i<m ;i++)
      for (int j=0 ; j<n ;j++) {
          cin >> k ;
          matrix[i][j]+=k;
       }

     for (int i=0 ; i<m ;i++)
      for (int j=0 ; j<n ;j++) {
        if (j==n-1)
        	cout << matrix[i][j] << endl;
        else
        	cout <<matrix[i][j] <<" ";
        }

  return 0 ;
}
