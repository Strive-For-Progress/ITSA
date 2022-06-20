#include <iostream>
using namespace std;
const int N = 55;

char a[N][N];
int max_width = 0 , max_depth = 0;
void Print( ){
    for (int i=0 ; i<=max_depth ; i++){
        for (int j=0 ; j<=max_width ; j++){
        (a[i][j] == '*') ?	cout<<"*" : cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int i;
    int x,y;
    int dy[4] = {-1,0,1,0} ,dx[4] = {0,1,0,-1};
    short dir = 1 , draw = 0;
    x = y = 0;
    a[y][x] = '*';
    while (cin>>i) {
    	if (i == 9 ) break;
        else if ( i==1 )  draw = 0;
        else if (i == 2) draw = 1;
        else if (i == 3) dir = (dir+1)%4;
        else if (i == 4) dir = (dir-1+4)%4;
        else if (i == 5) {
            int j;
            cin.ignore(1,',');
           	cin>>j;
            while(j--) {
                y+=dy[dir] ; x+=dx[dir];
                //cout<<"Move to ("<<y<<","<<x<<")\n";
                if (draw) a[y][x] = '*';
                if (max_width < x) max_width = x;
                if (max_depth < y) max_depth = y;
            }
        }
        else if ( i==6 ) Print();
    }
    return 0;
}
