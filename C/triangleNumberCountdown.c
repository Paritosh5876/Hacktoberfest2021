#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i, j;	
//	2-1-1-0-7-0-0-4--- to countdown with number treangle 
	for( i = 10; i >= 1; i-- ){
		
		for( j = 1; j <= i; j++){
			printf("%d ", j);
		}
		
		printf("\n");
	}

	return 0;
}
