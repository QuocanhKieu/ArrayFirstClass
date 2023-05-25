#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <string.h>

int main() {
	char ch[26];
	int i,j;
	
	for(i = 65, j = 0; i < 91; i++, j++) {
		ch[j] = i;
		printf("The character is %c\n", ch[j]);
	}
	

	return 0;
}

