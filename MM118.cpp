#include <iostream>
using namespace std;

string num;
int pow (int a,int b) {
    int c=a;
    if (b==0) return 1;
    for(int i=1 ; i<b ;i++) a*=c;
    return a;
}
int abs (int a) {
    if (a>0) return a;
    return -a;
}
int  main (int  argc,char **argv) {
    int n;
    cin >> n;
    int  sum1=0,sum2=0;

    for(int i=0; i<n ; i++) {
	    sum1=0,sum2=0;
	    cin >> num;
	    int m = num.length();
	    for (int i=m-1,j=0 ;i>=0 ;i--,j++)  {
	        if((j/3)%2) sum1 += (num[i]-'0')*pow(10,j%3);
	        else        sum2 += (num[i]-'0')*pow(10,j%3);
	    }
	    if (abs(sum1-sum2) %13== 0) cout <<"true";
	    else cout <<"false";
	    cout << endl;
    }

    return 0 ;
}
