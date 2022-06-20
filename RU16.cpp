#include <iostream>

using namespace std; 
const int N = 1520;
typedef unsigned long long ULL;

ULL ugly[N] = {1};
int head = 0;

int  main () {
    int n, idx2 =0 ,idx3 =0 ,idx5 =0;
   	cin >> n;
    int m = n;
    while(--n) {
        ULL next = min (ugly[idx2]*2,min(ugly[idx3]*3,ugly[idx5]*5));
        if (next == ugly[idx2]*2) idx2++;
        if (next == ugly[idx3]*3) idx3++;
        if (next == ugly[idx5]*5) idx5++;
        ugly[++head] = next;
    }
   	cout<<"The "<<m<<"'th ugly number is "<<ugly[m-1]<<"."<<endl;
    return 0 ;
}
