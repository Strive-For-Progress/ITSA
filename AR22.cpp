#include <iostream>
using namespace std;

string str ;

int  main (int  argc,char **argv) {

   cin >> str;
   int n = str.length() ;
   for(int i=0 ; i<n ;i++)
   		cout << (char)(str[i]-3);
    cout<<endl;
    return 0 ;
}
