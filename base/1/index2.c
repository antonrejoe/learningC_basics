
#include <stdio.h>
#include <stdbool.h>


int main(){
    bool tr = true;
   int a = 2 , b =3;
   printf("%d\n",a|b);
    printf("%d\n",tr&b); // 1
    printf("%f\n",tr&b); // 0.000

    printf("%d\n",a>>3); // 0  
    printf("%d\n",a<<3); // 16

    return 0;
}