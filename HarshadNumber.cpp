#include <iostream>
using namespace std;

int isharshad(int n) {
    int r,sum=0;
    int num=n;
    while(n!=0){
        n=n%10;
        sum=sum+n;
        n=n/10;
    }
    if(num%sum==0){
        return (1);
    }else{

    return (0);
    }

}

