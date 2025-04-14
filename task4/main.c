#include <stdio.h>

void copy(char*, char*);

int main(){
	char str1[4] = {};
	char str2[20] = {};
	fgets(str1, sizeof(str1), stdin);
	copy(str1, str2);
}
