//Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>

int getLength(char *arr);
void bubbleSort(char *arr, int size);
void display(char *arr, int size);

int main(void) 
{
    char my_string[50];
	char ch; 
    int i, j, length = 0; 

    printf("\nEnter any string: ");
    fgets(my_string, 50, stdin);

    length = getLength(my_string);
    bubbleSort(my_string, length);
    
    printf("\nSorted Array = ");
	display(my_string, length);
	
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

void bubbleSort(char *arr, int size)
{
	int i, j = 0;
	char temp;
	
	for(i = 0; i< size-1; i++)
	{
		for(j = 0; j< (size-i-1); j++)
		{
			if(arr[j] > arr[j+1])
			{
				//swapping two elements with using third variable
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void display(char *arr, int size)
{
	int index = 0;
	
	for(index = 0; index < size; index++)
	printf("%c", arr[index]);
	
  printf("\n");
}


