#include <float.h>

int mypow(int p){
    int num = 1;
    for(int i = 0; i < p; i++){
        num *= 2;
    }
    return num;
}