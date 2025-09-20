// Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>

int getLength(char *arr);
void copy(char *arr1, char *arr2);

int main(void) {
    
    char string1[40];
    char string2[40];
    
    printf("\nEnter any string: ");
    fgets(string1, 40, stdin);
    
    copy(string1, string2);
    
    // displaying string2
    printf("\nCopied String = %s", string2);
    printf("\n");
    
   return 0;
}

int getLength(char *arr)
{
    int count = 0;
    int index = 0;
    
    while(arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}

void copy(char *arr1, char *arr2)
{
    int length = getLength(arr1);
    int index = 0;
    
    for(index=0; index<length; index++)
        arr2[index] = arr1[index];
}
