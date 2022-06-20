#include <iostream>
using namespace std;

int pow (int a, int b) {
	int res = a;
	while (--b) res*=a ;
	return res;
}
int main() {
    int num;
	while (cin >> num) {
		int m=num ,res1 =1 ,res2 =1 ;
		for (int i=2,cnt=0 ; num>1 ;i++) {
			while(num%i==0) {
				cnt++;
				num/=i;
			}
			if (cnt%2)  res1 *= i;
			if (cnt/2>0)  res2*= pow (i,cnt/2);
			cnt = 0;
		}
		cout <<m <<" = "<< res1<<"*"<<res2<<"^2\n";
	}
    return 0;
}
