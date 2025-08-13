#include<stdio.h>

void med(float a,float b){
	float media =(a+b)/2;
	printf("A media dos dois numeros e: %.2f",media);	
}
void cab(){
    printf("Esse programa caucula a media de dois numeros \n");
}
void agr(){
    printf("Obrigado por usar esse programa");
}
int main(){
    cab();
	float x,y;
	printf("Digite o primeiro numero: ");
	scanf("%f",&x);
	printf("Digite o segundo numero: "); 
	scanf("%f",&y);
	med(x,y);
	printf("\n");
	agr();
	return(0);
	
}
