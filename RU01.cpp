#include <iostream>
using namespace std;

int dfs (int x) {
    if (x==1) return 0;
    if (x%2) return min (dfs(x+1),dfs(x-1))+1;
    else return 1+dfs(x/2);
}

int  main (int  argc,char **argv) {
    int n;
    while(cin >> n) cout << dfs(n) << endl ;
    return 0 ;
}
