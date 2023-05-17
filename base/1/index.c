
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
    int num1=6 ,num2=5 ,num3=-1;

    int lsThan = num1 <num2;
    int lsThanEq = num1<= num2;
    int greThan = num1 > num2;
    printf("Original numbers : %d %d\n",num1 , num2);
    printf("Outputs of relational expressions:%d,%d,%d\n",lsThan,lsThanEq,greThan); //  0 , 0 , 1
    printf("%d && %d hello  %d\n", (num1>num2) , ((num1 >= num2 && (num2 !=num1)) )); 2 &&
    printf("%d : %d\n", !(num1 > num2), (num1  > num2)); //  0 : 1
    printf("Output is %d\n" , (num1 && num3)); // Output is 1
    printf("Current value %d\n" , num1++); // Current value 6
    printf("Now the value of num1 is %d\n" , num1); // Now the value of num1 is 7
    }
