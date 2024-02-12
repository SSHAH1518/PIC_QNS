#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter length: \n");
    int length;
    scanf("%d", &length);
    int i,j = 0;
    int given[length];
    for(i = 0; i < length; i++){
        printf("Enter a number: \n");
        scanf("%d", &given[i]);
   }
    int left = 0;
    for(i = 0; i<length; i++){
        left += given[i];
        int right = 0;
        for(j = i+1; j<length; j++){
            right += given[j];
        }

        if(left == right){
            printf("Array can be split at index %d", i);
            break;
        }
    }
    return 0;
}
