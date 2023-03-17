
#include <stdio.h>

// int main()
// {

//     int num;
//     num = 10;
//     printf("%d", sizeof(num));
// }

int main(int argc, char const *argv[])
{

    int a, b, c;
    printf("%s", "3434df");
    scanf("%d%*d%d\n", &a, &b, &c);
    // %*d is ignored value => ie. &b is skipped but the next value is given to it and &c is ignored
    // otuput value :
    // 3434df
    // 2
    // 3
    // 1
    // 3
    // 2 1 0
    printf("%d %d %d\n", a, b, c);
}
