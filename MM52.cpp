#include <iostream>

int  main () {
    int n;
    int a[5] = {6,28,496,8128} ;
    std::cin>>n;
    for (int i=0 ; i<4 ;i++)
        if (n>=a[i]) std::cout<<a[i]<<std::endl;
    return 0 ;
}
