#include <iostream>
using namespace std;

int _nearestmultiplediff(int n, int base) {
    int lower= (n/base) *base;
    int upper= lower +base;
    int diff_lower=abs(n-lower);
    int diff_upper= abs(n- upper);
     if(diff_lower<=diff_upper){
        return diff_lower;
     }
     else{
        return diff_upper;
     }
    return 0;
}
