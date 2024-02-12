#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter length: \n");
    int length;
    scanf("%d", &length);
    int i
    = 0;
    int given[length];
    for(i = 0; i < length; i++){
        printf("Enter a number: \n");
        scanf("%d", &given[i]);
   }
    for(i = 0;i < length-1; i++){
        if(i%2 == 0){
            if(given[i] > given[i+1]){
                int temp = given[i];
                given[i] = given[i+1];
                given[i+1] = temp;
            }
        }else{
            if(given[i] < given[i+1]){
                int temp = given[i];
                given[i] = given[i+1];
                given[i+1] = temp;
            }
        }
    }
    for(i = 0; i < length; i++){
        printf("%d, ", given[i]);
    }
    return 0;
}
