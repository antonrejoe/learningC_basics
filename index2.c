
#include <stdio.h>



int main(){

    int value = 1 , result;
    result = (value++ *5) + (++value*3);
    printf("%f", result);
    printf(("%f", value));
    return 0;
}