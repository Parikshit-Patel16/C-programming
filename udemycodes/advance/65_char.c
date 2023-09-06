//If file name is passed as argument then read input from file, else stdinput.....count no of words and Character 
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])  
{
   FILE * fp = NULL;
   char ch = '\0';
   int wrd=0,charctr=0;

   if (argc == 1)
   fp = stdin;
   else if (argc == 2)   
   {
      if ((fp = fopen(argv[1], "r")) == NULL) 
	  {
         fprintf(stderr, "Can't open %s\n", argv[1]);
         exit(EXIT_FAILURE);
      }
   }
   else  
   {
      exit(EXIT_FAILURE);
   }

   while((ch=getc(fp))!=EOF)    
   {
     if(ch==' '||ch=='\n') 
	 {
        wrd++;
     }
     else 
	 {
       charctr++;
     }
   }
   printf("\n The number of words in the file are : %d\n",wrd);
   printf(" The number of characters in the file is : %d\n\n",charctr);
   fclose(fp);
   return 0;
}
