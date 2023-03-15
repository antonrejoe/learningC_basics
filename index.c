
#include <stdio.h>

// int main()
// {

//     int num;
//     num = 10;
//     printf("%d", sizeof(num));
// }

int main(int argc, char const *argv[])
{
    /* code */
    printf("%d , %d , %d\n", 44, 55);     // output 44  , 55 , -19744977064
    printf("%d , %d , %d\n", 44, 55, 66); // output 44 , 55 , 66

    // have a look at the  comma guy in b.w

    printf("%d %d %d\n", 44, 55);     // output 44 55 0
    printf("%d %d %d\n", 44, 55, 66); // output 44 55 66
    printf("%d %d\n", 44, 55, 66);    // output 44 55  #ignoreS
}
