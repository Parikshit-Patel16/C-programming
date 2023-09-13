//find maximum length of substring with non repeating character.
#include<stdio.h>
#include<string.h>
int lengthOfLongestSubstring(char * str){
    int len = strlen(str);
    if(len==0)
    {
        return 0;
    }
    int i,k,j,max=0,count,sum,flag;
    char b[len];
    for (int i = 0; i < len; i++)
    {
        count=0;
        sum=1;
        flag=0;
        b[count]=str[i];
        for(j=i+1;j<len;j++)
        {
            for(k=0;k<=count;k++)
            {
                if(str[j]==b[k])
                flag=1;
            }
            if(flag==0)
            {
                count=count+1;
                sum++;
                b[count]=str[j];
            }
        }
    if(sum>max)
    {
        max=sum;
    }
    }
    return max;
}


int main()
{
	char str[20];
	printf("Enter String");
	gets(str);
	int val=lengthOfLongestSubstring(str);
	printf("Max:-%d",val);
}