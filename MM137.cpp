#include <iostream>
using namespace std;

string num;
int pow (int a,int b) {
    int c = a;
    if (b==0) return 1;
    for(int i=1 ; i<b ; i++) a*=c;
    return a;
}

int  main (int  argc,char **argv) {
    int n;
    cin >> n;
    for(int i=0,j ; i<n ; i++) {
        cin >> j;
        cout << pow(2,j) <<endl;
    }
    return 0 ;
}
