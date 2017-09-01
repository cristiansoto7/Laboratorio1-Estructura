//CRISTIAN SOTO

#include<stdio.h>

void arreglo();
void matriz();
void mult_matriz();
void matriz_primos();
void invertir(int *a,int *b);

int main(){
	int a=4;
	int b=7;
	arreglo();
	matriz();
	mult_matriz();
	matriz_primos();
	invertir(&a,&b);
	printf("a: %d y b: %d",a,b);
	return 0;
}

void arreglo(){
	int i;
	int arreglo[5]={0,1,2,3,4};
	printf("Numeros Pares: \n");
	for(i=0;i<5;i++){
		if(arreglo[i]%2==0){
			printf("%d",arreglo[i]);
		}
		printf("\n");
	}
	printf("\n");
}

void matriz(){
	int i,j;
	printf("Numeros Impares: \n");
	int matriz[3][3]={{0,1,2},{3,4,5},{6,7,8}};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matriz[i][j]%2!=0){
				printf("%d\n",matriz[i][j]);	
			}
			printf("\n");
		}
	}
}

void mult_matriz(){
	int i,j,k;
	int matriz_R[4][4];
	int matriz_1[4][4]={{0,1,2},{3,4,5},{6,7,8},{7,6,2}};
	int matriz_2[4][4]={{10,5,6},{8,7,0},{4,6,9},{11,1,3}};
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			matriz_R[i][j]=0;	
			for(k=0;k<4;k++){
				matriz_R[i][j]=(matriz_R[i][j]+(matriz_1[i][k]*matriz_2[k][j]));
			}
		}
	}
	printf("El resultado de la multiplicacion es: ");
	for(i=0;i<4;i++){
    	printf("\n\t\t");
    	for(j=0;j<4;j++){
    		printf(" %d  ", matriz_R[i][j]);
		}
	}
	printf("\n");
}

void matriz_primos(){//ERROR EN LOS PRIMOS
	int i,j,k,a;
	int suma=0;

	int matriz[3][3]={{9,1,2},{3,4,5},{6,7,8}};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a=0;
			for(k=1;k<=matriz[i][j];k++){
        		if(matriz[i][j]%k==0){
        			a++;
        		}
    		}
    		if(a==2){
				suma=suma+matriz[i][j];
        	}
    	}
	}
	printf("la suma de las matrices con numeros primos es %d\n",suma);
}

void invertir(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
