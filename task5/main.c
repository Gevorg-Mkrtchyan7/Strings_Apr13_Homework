#include <stdio.h>

char* copy(char*, char*);

int main(){
	char str1[20] = {};
	char str2[20] = {};
	fgets(str1, sizeof(str1), stdin);
	copy(str1, str2);
}
