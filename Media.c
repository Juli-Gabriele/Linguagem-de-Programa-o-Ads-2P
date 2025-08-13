#include<stdio.h>

float med(float a,float b){
	float media =(a+b)/2;
	printf("A media dos dois numeros e: %.2f",media);	
}
int main(){
	float x,y;
	printf("Digite o primeiro numero: ");
	scanf("%f",&x);
	printf("Digite o segundo numero: "); 
	scanf("%f",&y);
	med(x,y);
	return(0);
	
}
