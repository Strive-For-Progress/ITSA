#include <iostream>
using namespace std;
const int  N = 40;
typedef unsigned long long ULL;
ULL c[N][N] ;

int  main () {
    int n;

    c[0][0] =1 ;
    for (int i=0 ; i<N ;i++)
        for (int j=0 ; j<=i ;j++)
            if(j==0 || j == i) c[i][j]=1;
            else c[i][j] = c[i-1][j] + c[i-1][j-1];

    cin >> n;
    cout << c[2*n][n]/(n+1) << endl;
    return 0 ;
}
