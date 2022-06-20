#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int  main (int  argc,char **argv) {
	multiset<int> set;
	int input;
	while (cin >> input && input != -999)	set.insert(input);
	
	int backup;
	multiset<int>::reverse_iterator ri, riend;
    riend = set.rend();
	for ( ri=set.rbegin(); ri!= riend ; ri++){	
		if (ri != set.rbegin() && backup == *ri) continue; 
		cout << *ri << " " << set.count(*ri)<<endl;
		backup = *ri;
	}
    return 0 ;
}
