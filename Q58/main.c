#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter string\n");
    char word[20];
    scanf("%s", &word);
    int i;
    int count = 0;
    for(i = 0; i<20; i++){
        if(word[i] != '\0'){
            count++;
        }else{
            break;
        }
    }
    printf("Length of %s is %d", word, count);
    return 0;
}
