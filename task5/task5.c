#include <stdio.h>
#include <string.h>

char* copy(const char* str1, char* str2){
	strcpy(str2, str1);
	return str2;
}
