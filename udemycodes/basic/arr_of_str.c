//Sort strings in ascending order from array of string
#include<stdio.h>
#include<string.h>
void sort(char *arr[], int  n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0 ; j<n-1-i; j++)
        {
            if(strcmp(arr[j], arr[j+1]) > 0)
            {
                char *temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    char *str[] = {"def", "cde", "bcd", "abc"};
    int n = sizeof(str) / sizeof(str[0]);
    sort(str, n);
    for(int i = 0; i<n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}