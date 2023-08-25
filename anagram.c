//String is anagram or no//ex:- anagram and gamaran 
#include <stdio.h>
#include <string.h>
int main() {
    int i,j,temp,temp1,size;   //temp and temp1 is used for swapping
	printf("Enter Size of string");
	scanf("%d",&size); //Enter string size
    char str1[size], str2[size];
    printf("Enter a string1: ");
    fgets(str1,size,stdin); //Enter String1
    printf("Enter a string2: ");
    fgets(str2,size,stdin); //Enter string2
    if(strlen(str1)!=strlen(str2))//Check String lenght is same or not
    {
        printf("Not anagram"); 
        return 0;
    }
	
	//Method:-Short the string elements from assending order
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
	//if both strings are same then it is anagram
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
