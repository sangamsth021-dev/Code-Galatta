#include <iostream>
using namespace std;

int digitweightscore(int n) {
    int sum=0;
    int i=1;
    while(n>0){
        int digit=n%10;
        sum+= digit*i;
        n/=10;
        i++;

    }
    return sum;
}
