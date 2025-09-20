#include <stdio.h>
#include <string.h>

int maxFrequency(char *arr, int *chr_freq);
void display(int *chr_freq, int maxFreq);

int main(void) 
{
    char my_string[50];
    int ch_freq[150] = {0}; 
    
    printf("Enter any string: ");
    fgets(my_string, 50 , stdin);
    
    int freq = maxFrequency(my_string, ch_freq);
    display(ch_freq, freq);
    
    return 0;
}

int maxFrequency(char *arr, int *chr_freq) 
{
    int i = 0, ascii;
    int max = 0;
    
    while (arr[i] != '\0') 
    {
        ascii = (int)arr[i];
        chr_freq[ascii]++;
        
        if (chr_freq[ascii] > max && ascii != 32) 
            max = chr_freq[ascii];
        i++;
    }
    
    return max;
}

void display(int *chr_freq, int maxFreq)
{
    int i;
    printf("Characters with highest frequency %d:\n", maxFreq);
    for (i = 0; i < 150; i++)
    {
        if (chr_freq[i] == maxFreq)
        {
            printf("%c ", (char)i);
        }
    }
    printf("\n");
}

