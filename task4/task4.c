#include <stdio.h>

void copy(char* str1, const char* str2){
	int i = 0;
	while(i < sizeof(str2) && str2[i] != '\0'){
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	printf("%s \n", str1);
}
