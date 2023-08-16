int lengthOfLongestSubstring(char * str){
    int n = strlen(str);
    if(n==0)
    {
        return 0;
    }
    int i,k,j,max=0;
    int c[n];
    char b[n];
    for (int i = 0; i < n; i++)
    {
        int count=0;
        int sum=1;
        int flag=0;
        b[count]=str[i];
        for(j=i+1;j<n;j++)
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
    c[i]=sum;
    if(c[i]>max)
    {
        max=c[i];
    }
    }
    return max;
}
