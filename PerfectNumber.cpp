#include <iostream>
using namespace std;

int isperfect(int n) {
    int sum=0;
    for(int i=1; i<= n/2; i++){
        if(n % i == 0){
            sum+=i;
        }
    }
    if(n == sum){
        return (1);
    }
    return 0;
}
