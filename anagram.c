#include <stdio.h>
#include <string.h>
int main() {
    int i,j,temp,temp1;
    char str1[100], str2[100];
    printf("Enter a string1: ");
    fgets(str1, 100, stdin);
    printf("Enter a string2: ");
    fgets(str2, 100, stdin);
    if(strlen(str1)!=strlen(str2))
    {
        printf("Not anagram");
        return 0;
    }
    for(i=0;i<strlen(str1)-1;i++)
    {
        for(j=i+1;j<strlen(str1);j++)
        {
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
            if(str2[i]>str2[j])
            {
                temp1=str2[i];
                str2[i]=str2[j];
                str2[j]=temp1;
            }
        }
    }
    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]!=str2[i])
        {
            printf("Not anagarm");
            return 0;
            }
    }
    printf("Anagram");
    return 0;
}
