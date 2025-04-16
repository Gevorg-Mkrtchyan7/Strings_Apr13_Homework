#include <stdio.h>
#include <string.h>

void copy(char* str1, const char* str2){
	strlcpy(str1, str2, sizeof(str1));
	printf("%s \n", str1);
}
