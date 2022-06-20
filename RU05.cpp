#include <iostream>
#include <algorithm>
using namespace std;
int c[55] ;

int  main () {
    int n,cnt=0;
	cin >> n ; 
    for (int i=0 ; i<n ;i++)  cin >> c[i];
    sort (c , c+n) ;
    for (int i =0 ; i < n-2 ; i++)
      for (int j=i+1 ; j < n-1 ; j++)
        for (int k=j+1 ; k<n ; k++)
              if (c[i] +c[j] >c[k]) cout << c[i] << " " << c[j] << " " << c[k] << endl;
              else break;
    return 0 ;
}
