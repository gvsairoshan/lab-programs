#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
  	char str[100], result;
  	int i, len;
  	int min = 999;
  	char ch;
  	
  	int freq[256] = {0}; 
 
  	printf("\n Please Enter any String :  ");
  	scanf("%[^\n]s", str);
  	
  	len = strlen(str);
  	
  	for(i = 0; i < len; i++)
  	{
  	    freq[(str[i])]++;
  	    //printf("%c\t%d\n",str[i],freq[str[i]]);
	}
  		
  	for(i = 0; i < len; i++)
  	{
  	    //printf("%c\t%d\n",str[i],freq[str[i]]);
		if(min > freq[str[i]] && freq[str[i]] > 0)
		{
		    //printf("%c\t%d\n",str[i],freq[str[i]]);
			min = freq[str[i]];
			result = str[i];
		}
	}
	printf("\n The Minimum Occurring Character in a Given String = %c ", result);
	
  	return 0;
}