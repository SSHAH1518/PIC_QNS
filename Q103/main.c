#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter length: \n");
    int length;
    scanf("%d", &length);
    int i = 0;
    int given[length];
    for(i = 0; i < length; i++){
        printf("Enter number: \n");
        scanf("%d", &given[i]);
    }
    int n[length];

    for(i = 0; i<length; i++){
        if(i == 0){
            n[i] = given[i]*given[i+1];
        }else if(i == length-1){
            n[i] = given[i] * given[i-1];
        }else{
            n[i] = given[i-1] * given[i+1];
        }
    }

    for(i = 0; i < length; i++){
        printf("%d, ", n[i]);
    }
    return 0;
}
