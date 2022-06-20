#include <iostream>
using namespace std;
const int N = 500;
int match [N][N];

int  main (int  argc,char **argv) {
    int n;
    cin>>n;
        for (int i=0; i<n ;i++)
        	for (int j=0 ;j<n ;j++)
            	cin>>match[i][j];
    int m = n;
    while(m--) {
    int tar_i = -1 , tar_j = -1 , k = -500;
    for (int i=0; i<n ;i++)
        for (int j=0 ;j<n ;j++)
            if (match[i][j] > k ) {
                tar_i = i ; tar_j = j ; k = match[i][j];
             }
    for (int i=0 ; i<n ; i++) match[tar_i][i] = -1;
    for (int i=0 ; i<n ; i++) match[i][tar_j] = -1;
    cout<<"boy "<< tar_i+1 <<" pair with girl "<<tar_j+1 <<endl;

    }
    return 0 ;
}
