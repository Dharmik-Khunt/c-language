#include <stdio.h>

int main()
{
  	char str[100];
  	int i, vowels=0, consonants=0;
       printf("Enter any String :  ");
       scanf("%s",&str);
       for(i=0;str[i]!='\0';i++)
       {
          if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')  
		{
  			vowels++;  	
 		}
  		else{
    		consonants++;
		}
       }
    printf("\n Number of Vowels in this String = %d", vowels);  
	printf("\n Number of Consonants in this String = %d", consonants);   	

return 0;
    
    }