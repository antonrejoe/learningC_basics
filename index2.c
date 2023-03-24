
#include <stdio.h>



int main(){

    int value = 1 , result;
    int i = (5,10);  // i = 5
    int j = (i ? 7:10); // checks whether i = 7 if not then it's assigned the value of 10

    result = (value++ *5) + (++value*3);
    printf("%d\n", result);
    printf("%d\n", value);
    printf("%d\n", i); // the second value will be given out
    printf("%d\n", j); // ? => if condition : else condn

    return 0;
}