#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){
	int a=7;
	float prom,cant=3;
	prom=(a/cant)*100;
	printf("prom %f",prom);
}

/* int contieneValor (int val, int arr[],int siezeofArr) {

    int i;
    int contiene = 0;
		printf("sizeof: %d",siezeofArr);

    for(i = 0; i <= siezeofArr; i++)
    {
        if(arr[i] == val)
        contiene = 1;
        
    }
    return contiene;
}
int main(){
	int numeroGanador=36,contieneapuestasseguidas=0;
	int colorRojo[] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};

	contieneapuestasseguidas=contieneValor(numeroGanador, colorRojo,17);
	printf("contieneapuestas: %d",contieneapuestasseguidas);


	return 0;
}

 */

/* int main(){
    // This program will create different sequence of  
    // random numbers on every program run  
  
    // Use current time as seed for random generator 
    srand(time(0)); 
    int random;
  
    random = rand()%37;
    printf(" %d ", random ); 

    return 0;

}

//boludez para mostar la tabla
					int bb, cc;
					for (bb = 0; bb < 10; bb++)
					{
						for (cc = 0; cc < 4; cc++)
						{
							printf("%d ", APUESTASTOTALES[bb][cc]);
							if (cc == 3)
							{
								printf("\n");
							}
						}
					} */