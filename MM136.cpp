#include <iostream>
using namespace std;
void work(int num,int base) {
    if (num >= base) work(num/base,base);
    cout << num%base;
    return;
}
int  main (int  argc,char **argv) {
    int num,base;
    cin >> num >> base;
    work (num,base);
    cout << endl; 
    return 0 ;
}
