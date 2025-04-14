#include <stdio.h>
#include <string.h>

void copy(const char* str1, char* str2){
	int a = strlen(str2);
	strncpy(str2, str1, a);
	return str1;
}
