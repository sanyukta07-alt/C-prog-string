// Write a program in C to print individual characters of a string in reverse order.

#include <stdio.h>
#include <string.h>

int getLength(char *arr);

int main(void) {
    
    char my_string[30];
    int r_index = 0;
    
    printf("\nEnter any string: ");
    fgets(my_string, 30, stdin);
    
    printf("Accepted String in reverse order = ");
    for(r_index=getLength(my_string)-1; r_index>=0; r_index--)
        printf("%c ", my_string[r_index]);
    
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
