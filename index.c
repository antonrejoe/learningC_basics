
#include <stdio.h>
#include <stdbool.h>
// int main()
// {

//     int num;
//     num = 10;
//     printf("%d", sizeof(num));
// }

int main(int argc, char const *argv[])
{
    // relational operators
    bool result;
    int num1 = 5, num2 = 6;
    result = convertBoolean((num1 < num2));
    printf("Is %d < %d: %d\n", num1, num2, (num1 < num2)); // Is 5 < 6: 1
    printf("Is %d < %d: %d\n", num1, num2, result);        // Is 5 < 6: 1
}
