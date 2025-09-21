#include <stdio.h>
#include <string.h>

int getLength(char *arr);
void toLowerCase(char *arr);
int subSearch(char *arr, char *search);

int main(void) 
{
    char my_string[100];
    char sub[100];
    
    printf("Enter any string: ");
    fgets(my_string, 100 , stdin);
    
    printf("Enter the string to be searched: ");
    fgets(sub, 100, stdin);
    
    // converting both strings to lower case
    toLowerCase(my_string);
    toLowerCase(sub);

    if (subSearch(my_string, sub) == 1) 
        printf("The substring exists in the string.\n"); 
    else 
        printf("The substring does not exist in the string.\n\n"); 
		
    return 0; 
}

int getLength(char *arr)
{
    int count = 0;
    
    while(arr[count] != '\0' && arr[count] != '\n') 
        count++;
        
    return count;
}

void toLowerCase(char *arr)
{
    int index = 0;
    char ch;
    int ascii;
    
    while(arr[index] != '\0')
    {
        ch = arr[index];
        ascii = (int)ch;
        
        if(ascii>=65 && ascii<=90)  
            arr[index] = (char)(ascii + 32);
        
        index++;
    }
}


int subSearch(char *arr, char *search)
{
    int i, j;
    int string_len = getLength(arr);
    int sub_len = getLength(search);

    for(i = 0; i <= string_len - sub_len; i++) 
    {
        for(j = 0; j < sub_len; j++) 
        {
            if(arr[i + j] != search[j]) 
                break;
        }
        if(j == sub_len) 
            return 1;
    }
    return 0;
}

