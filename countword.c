#include<stdio.h>
int main()
{
 int count_words=0,i;
 int count_char=0;
 char str[20];
 printf("Enter string : ");
scanf("%s",&str);
 for(i=0; str[i]!=NULL; i++)
 {
   count_char++;
   if(str[i]==' ')
      count_words++;
  }
 printf("\nNumber of words in string : % d",count_words+1); 
 return 0;
}

