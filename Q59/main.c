#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Enter a number: \n");
    int num, dup1, dup2, length;
    scanf("%d", &num);
    dup1 = num;
    length = 0;
    while(dup1>0){
        dup1 /= 10;
        length++;
    }

    int total = 0;
    dup2 = num;
    while(dup2>0){
        total += pow((dup2%10), length);
        dup2 /= 10;
    }
    printf("%d\n", total);
    if(num == total){
        printf("%d is an armstrong number\n", num);
    }else{
        printf("%d is not an armstrong number\n", num);
    }
    return 0;
}
