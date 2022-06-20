#include <iostream>  
using namespace std;  
const int N = 11;  
int a[N][N];      
int n,m;  
int cnt = 0;  
void DFS(int i,int j) {  
    if ( i == n-1 && j == m-1) {  
        cnt++;  
        return ;  
    }  
    if (i<0 || j<0 || i>=n || j>=m || a[i][j] != 0) return;  
    a[i][j] = 2;  
    DFS (i+1,j);  
    DFS (i,j+1);  
    DFS (i-1,j);  
    DFS (i,j-1);  
    a[i][j] = 0;  
}  
  
  
int main () {  
  
    while (cin >> n >> m) {  
        for (int i=0 ; i<n ; i++)  
            for (int j=0 ; j<m ; j++)   
                cin >> a[i][j];  
        DFS(0,0);  
        cout << cnt << endl;  
        cnt = 0;  
    }  
    return 0;  
}  
 
