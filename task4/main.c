#include <stdio.h>

char* copy(char*, char*);

int main(){
	char str1[20] = {};
	char str2[5] = {};;
	fgets(str2, sizeof(str2), stdin);
	copy(str1, str2);
}
