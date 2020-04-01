#include<stdio.h>

void hanoi(int n,char origem,char destino,char auxiliar){
	//Se sobrar apenas o disco 1, mova fazer o movimento e retornar
	if(n==1){ 
		printf("\nMova o disco 1 da base %c para a base %c",origem ,destino);
		return;
	}
	//Mover o n-1 disco de A para B, usando C de auxiliar
	hanoi(n-1,origem,auxiliar,destino);
	//Mover os discos restantes de A para C
	printf("\nMova o disco %d da base %c para a base %c",n,origem,destino);
	//Mover os n-1 discos de B para C usando A como auxiliar
	hanoi(n-1,auxiliar,destino,origem);
}

int exercicio4() {
  	int n = 3; //Numeros de discos
	printf("\nExercicio 4: Para resolver a torre de Hanois com %d discos faca :\n", n);
	hanoi(n,'A','C','B');
	printf("\n");
	return 0;
}