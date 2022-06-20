#include <iostream>
using namespace std;

enum {girl,boy,tie};
int  main (int  argc,char **argv) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
    int n,m,cnt=0;
    cin>>n>>m;
    for (int i=0,j; i<n*m ;i++){
        cin >> j;
        (j==boy) ? cnt++ : cnt--;
    }
    if (cnt>0) cout << boy ;
    else if (cnt<0) cout << girl ;
    else cout << tie;
    cout <<"\n";
    return 0 ;
}
