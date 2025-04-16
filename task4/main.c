#include <stdio.h>

char* copy(char*, char*);

int main(){
	char str1[4] = {};
	char str2[40] = {};;
	fgets(str2, sizeof(str2), stdin);
	copy(str1, str2);
}
