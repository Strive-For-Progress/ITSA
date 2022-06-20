#include <iostream>
using namespace std;

int  main (int  argc,char **argv) {
    int n,cnt=0;
	cin >> n;
    int a[3] = {2,3,5};
    for (int i=0; n>1 && i<3 ;i++)
        while(n%a[i]==0)
            n/=a[i];
    (n==1)?cout<<"Regular number!\n":cout<<"Irregular number!\n";
    return 0 ;
}
