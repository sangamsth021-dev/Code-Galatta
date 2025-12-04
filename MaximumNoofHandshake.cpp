#include <iostream>
using namespace std;

int handshakes(int hands) {
    if(hands==0){
        return 0;
    }
    else if(hands==1){
        return 0;
    }
    else{
        return hands*(hands-1)/2;
    }
    return 0;
}
