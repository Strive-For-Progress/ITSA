#include <iostream>
using namespace std;

int  main () {
    int head,feet,tail;
	cin >>head >>feet >>tail;
    if (head<0 || feet<0 || tail<0) cout<<"No solution\n";
    else {
    int hen ,bunny ,crab;
    crab = head-tail;
    feet -= crab*8;
    if(feet%2 == 0) {
        bunny = feet/2-tail;
        hen = tail - bunny;
    	if (hen<0 || bunny<0 || crab<0) cout<<"No solution\n";
    	else cout << hen <<" " <<bunny <<" "<< crab << endl; 
    }
    else
       cout<<"No solution\n";
    }


    return 0 ;
}
