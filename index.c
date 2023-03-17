
#include <stdio.h>

// int main()
// {

//     int num;
//     num = 10;
//     printf("%d", sizeof(num));
// }

int main(int argc, char const *argv[])
{
    float c, d;

    c = 5 / 9;
    d = 5.0 / 9;

        printf("%f\n", c); // 0.000000
    printf("%d\n", c); // 198898336
    printf("%f\n", d); // 0.555556
    printf("%d\n", d); // 198898336

    // for floating operation we need to have atleast one floating point number
    // if 2 integers are present then integer operation is carried out
}
