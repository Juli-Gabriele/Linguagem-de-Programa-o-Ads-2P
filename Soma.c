#include<stdio.h>
#include<stdlib.h>
int som (int a ,int b)
{
	printf("%d",a + b);
}
int main(){
	int x,y;
	printf("Digite o primeiro numero: ");
	scanf("%d",&x);
	printf("Digite o segundo numero: ");
	scanf("%d",&y);
	printf(" A soma e ");
	som(x,y);
	printf("\n");
	system("Pause");
	return(0);
}
