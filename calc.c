#include <stdio.h>
#include <stdlib.h>

int soma (int x, int y){
	//Alteração feita na branch fSoma
	return x+y;
}
int subtrai (int x, int y){
	//Alteração feita na branch fSubtrai
	return x-y;
}
int multiplica (int x, int y){
	//Alteração feita na branch fSmult
	return x*y;
}
int divide (){}

int main(){
	printf("Hello git!\n\n");
	printf("Soma: %d\n", soma(2,2));
	printf("Subtração: %d\n", subtrai(2,2));
	printf("Multiplicação: %d\n", multiplica(2,2));

}
