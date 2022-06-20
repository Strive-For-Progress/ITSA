#include <iostream>    
using namespace std;    
int a[11];        
  
    
int main () {    
    
    int  n = 10;  
      
    for (int i=0 ; i<n ; i++)  cin >> a[i];    
    int minv ,maxv;    
    minv = maxv = a[0];  
    for (int i=1 ; i<n ; i++) {  
        minv = min (minv,a[i]);  
        maxv = max (maxv,a[i]);  
    }  
    cout <<"Largest number = "<<maxv<<endl;  
    cout << "Smallest number = "<<minv<<endl;   
    return 0;    
}  
 
