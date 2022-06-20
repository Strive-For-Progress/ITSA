#include <iostream>
using namespace std;
void work (string str1 , string str2, int len) {
	int ans [(len<<1)] = {0};

	for (int i = len-1; i>=0 ; i--)
		for (int j = len-1; j>=0 ; j--)
			 ans[i+j+1]  += (str1[i]-'0') * (str2[j]-'0');
		
		
	for (int i = (len<<1)-1 ; i-1>=0 ; i--) 
		if (ans[i] >= 10) {
			ans[i-1] += (ans[i]/10);
			ans[i] %= 10;
		}
	
	for (int i=0 ; i<(len<<1) ;i++) {
		if (i==0 && ans[i] == 0) continue;
		cout << ans[i];
	}
		
	cout << endl;
}
int main () {
	int round ,len;
	string s1,s2;
	cin >> round;
	
	while (round--) {
		cin >> len;
		cin >> s1 >> s2;
		work (s1,s2,len);	
	}
	return 0;
}
