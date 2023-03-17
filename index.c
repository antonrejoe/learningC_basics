
#include <stdio.h>

// int main()
// {

//     int num;
//     num = 10;
//     printf("%d", sizeof(num));
// }

int main(int argc, char const *argv[])
{
    char str[] = "hello   \n world";

    printf("%d\n", sizeof(str));
    printf("%s", str);
}
