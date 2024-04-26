#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int n1 = 0,n2 = 0,n3 = 0,res;
	
	if (argc < 2){
		perror("hw: Opção Invalida !");
		help();
		exit(1);
	}	

	n1 = *argv[1];
	n2 = *(argv[1] + 1);
	n3 = *(argv[1] + 2);

	res = n1 + n2 + n3;
	
	helloWorld(res);

	return 0;
}
