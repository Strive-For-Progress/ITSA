#include <iostream>
using namespace std;

string str;

int main()
{
    while(cin >> str) {
        int n = str.length();
        bool past = true;
        for (int i=0,j=n-1 ; i<j ; i++,j--) {
            if (str[i]!=str[j]) {
                cout<<"no"<<endl;
                past = false;
                break;
            }
        }
        if (past) cout<<"yes"<<endl;
    }
    return 0;
}
