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



    for(i = 0; i < length; i++){
        if(i%2 == 0){
            int low = i;
            for(j = i+1; j < length; j++){
                if(given[j] < given[low]){
                    low = j;
                }
            }
            int temp = given[low];
            given[low] = given[i];
            given[i] = temp;
        }else{
            int high = i;
            for(j = i+1; j < length; j++){
                if(given[j] > given[high]){
                    high = j;
                }
            }
            int temp = given[high];
            given[high] = given[i];
            given[i] = temp;
        }
   }

    for(i = 0; i < length; i++){
        printf("%d, ", given[i]);
   }
    return 0;
}
