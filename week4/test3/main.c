#include <stdio.h>
#include <string.h> 

int main() { 
   
	char str[81]; 
	gets(str); 
	int i = 0; 
	for (i = strlen(str); i > 0; i--) { 
		if (str[i] == ' ') { 
			printf("%s ", &str[i+1]); 
			str[i] = '\0'; 
		}	
	} 
	printf("%s", &str[i]); 
	return 0; 
}
