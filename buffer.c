#include <stdio.h>
#include <stdlib.h>

void main(){
	char *local;
	char *comando;
	local=(char *)malloc(10);
	comando=(char *)malloc(128);

	printf("Endereço de memória do local é: %d\n", local);
	printf("Endereço de memória do comando é: %d\n", comando);
	
	printf("O espaço na memória entre o local e o comando é: %d\n", comando-local);
	printf("Qual é o maior clube do nordeste?");
	
	gets(local);

	printf("O maior clube do nordeste é %s\n", local);

	system(comando);

	return 0;
}