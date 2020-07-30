#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

//variables globales para calcular comparativa rojovsnegro y cantidad de numeros rojos o negros seguidos
int apuestastotalesRojo=0,apuestastotalesNegro=0,
numerosseguidosRojo=0,numerosseguidosNegro=0,
banderaseguidosRojo=0,banderaseguidosNegro=0;

//funciones pa contar las fichas
void cantfichasApuesta(int *cantidadficha)
{
	int cant;
	printf("Ingrese la CANTIDAD DE FICHAS que desea jugar (ejemplo: 3)\n");

	printf("Cantidad de fichas: ");
	scanf("%d", &cant);

	*cantidadficha = cant;
	system("clear");
}

void valorfichasApuesta(int *valorficha)
{
	int valor;
	printf("Fichas disponibles: $1-$2-$5-$10-$50-$100\n");
	printf("Ingrese el VALOR DE LA FICHA q quiere jugar: (ejemplo: 100)\n");

	printf("Valor de ficha: ");
	scanf("%d", &valor);

	*valorficha = valor;
	printf("\n");
}

//funcion que genera los datos para poner en la apuesta
void realizarApuestas(int *apuesta)
{
	int tipodeapuesta, cantidadficha, valorficha;

	printf("APUESTAS: \n");
	printf("[1] NUMERO\n ");

	printf("DOCENAS:\n");
	printf("[2] Primera docena\n");
	printf("[3] Segunda docena\n");
	printf("[4] Tercer docena\n");

	printf("COLUMNAS:\n");
	printf("[5] Primer columna\n");
	printf("[6] Segunda columna\n");
	printf("[7] Tercer columna\n");

	printf("MITADES:\n");
	printf("[8] Primera mitad\n");
	printf("[9] Segunda mitad\n");

	printf("COLOR:\n");
	printf("[10] Color rojo\n");
	printf("[11] Color negro\n");

	printf("PAR/IMPAR:\n");
	printf("[12] Par\n");
	printf("[13] Impar\n");

	while (1)
	{
		//chequeo q la opcion exista
		printf("A que desea apostar: ");
		scanf("%d", &tipodeapuesta);

		if (tipodeapuesta > 0 && tipodeapuesta < 14)
		{
			system("clear");
			break;
		}

		printf("Ingrese un valor correcto! \n");

	}

	switch (tipodeapuesta)
	{
		case 1:
			{
				int numeroapostado;
				printf("Eliga el numero: ");
				scanf("%d", &numeroapostado);

				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);

				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;
				apuesta[3] = numeroapostado;

			}

			break;
		case 2:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 3:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 4:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 5:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 6:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 7:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 8:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 9:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 10:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 11:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 12:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;
		case 13:
			{
				valorfichasApuesta(&valorficha);
				cantfichasApuesta(&cantidadficha);
				apuesta[0] = tipodeapuesta;
				apuesta[1] = cantidadficha;
				apuesta[2] = valorficha;

			}

			break;

		default:
			{
				printf("default \n");
			}

			break;
	}
}


// Checkeo que el numero ganador este del array en cuestion
int contieneValor (int val, int arr[],int siezeofArr) {

    int i;
    int contiene = 0;
    for(i = 0; i <= siezeofArr; i++)
    {
        if(arr[i] == val)
        contiene = 1;        
    }
    return contiene;
}

// Gira la ruleta
void giraRuleta (int APUESTASTOTALES[10][4]) {    
    int columnaUno[] = { 1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34 };
    int columnaDos[] = { 2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35 };
    int columnaTres[] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36 };
    int colorRojo[] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};
    int colorNegro[] = { 2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35};
    int nrosPares[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36};
    int nrosImpares[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35};

    int contiene = 0,historialPago = 0,historialGanancia = 0;
    
    int numeroGanador, contieneapuestasseguidas=0;

    srand(time(0));//semilla para el nro random que cambia en cada ejecución del programa
  
    numeroGanador = rand()%37;
    
    printf("===============================\n===============================\n");
    printf("Numero ganador: %d\n\n",numeroGanador);
    

    

    //chequeo item de apuestas seguidas rojo o negro    
    contieneapuestasseguidas=contieneValor(numeroGanador, colorRojo,17);
    if(contieneapuestasseguidas){
        numerosseguidosRojo++;
        numerosseguidosNegro=0;
    }
    contieneapuestasseguidas=contieneValor(numeroGanador, colorNegro,17);
    if(contieneapuestasseguidas){
        numerosseguidosNegro++;
        numerosseguidosRojo=0;
    }
    if(numerosseguidosRojo==5){
        banderaseguidosRojo++;
    }
    if(numerosseguidosNegro==5){
        banderaseguidosNegro++;
    }

    //cantidad de filas que tienen valor (!=0) en la tabla
    int filasdelArray=0;
    while(APUESTASTOTALES[filasdelArray][0]!=0){
        filasdelArray++;
    }

    int bb;
    for (bb = 0; bb < filasdelArray; bb++) {
        // Recorro todas las pos 0 para evaluar el tipo de apuesta se esta por jugar
        switch (APUESTASTOTALES[bb][0]) {
            
            case 1:
            {
                int numeroElegido = APUESTASTOTALES[bb][3];
                printf("Apuesta a pleno, numero %d\n",numeroElegido);

                if (numeroElegido == numeroGanador) {
                    
                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 35);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n", casinoPaga);

                    // Se crean los historiales

                    historialPago += casinoPaga;
                    break;
                }

                else {                

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);

                    // Se crean los historiales
                    
                    historialGanancia += casinoGana;
                    break;
                }
            }
                
            case 2:
            {
                printf("Apuesta a Primer docena\n");
                if (numeroGanador > 0 && numeroGanador <= 12) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;
                    break;
                }
            }

            case 3:
            {
                printf("Apuesta a Segunda docena\n");

                if (numeroGanador > 12 && numeroGanador<= 24) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;
                    break;
                }
            }

            case 4:
            {
                printf("Apuesta a Tercer docena\n");
                if (numeroGanador > 24 && numeroGanador<= 36) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;
                    break;
                }
            }

            case 5:
            {
                printf("Apuesta a Primer columna\n");
                
                contiene=contieneValor(numeroGanador, columnaUno,11);
        
                if (contiene == 1) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;
                    break;
                }
            }

            case 6:
            {
                printf("Apuesta a Segunda columna\n");
                
                contiene=contieneValor(numeroGanador, columnaDos,11);
        
                if (contiene == 1) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;
                    break;
                }
            }

            case 7:
            {
                printf("Apuesta a Tercer columna\n");
                
                contiene=contieneValor(numeroGanador, columnaTres,11);
        
                if (contiene == 1) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 3);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;
                    break;
                }
            }

            case 8:
            {
                printf("Apuesta a Primera mitad\n");
                if (numeroGanador > 0 && numeroGanador<= 18) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;
                    break;
                }
            }

            case 9:
            {
                printf("Apuesta a Segunda mitad\n");
                if (numeroGanador > 18 && numeroGanador<= 36) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;
                    break;
                }
            }

            case 10:
            {
                printf("Apuesta a Color Rojo\n");
                

                apuestastotalesRojo++;
                
                contiene=contieneValor(numeroGanador, colorRojo,17);
        
                if (contiene == 1) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;
                    break;
                }
            }

            case 11:
            {
                printf("Apuesta a Color negro\n");
               
                
                contiene=contieneValor(numeroGanador, colorNegro,17);
                apuestastotalesNegro++;

                if (contiene == 1) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana;                        
                    break;
                }
            }

            case 12:
            {
                printf("Apuesta a Par\n");
                
                contiene=contieneValor(numeroGanador, nrosPares,17);
        
                if (contiene == 1) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana; 
                    break;
                }
            }

            case 13:
            {
                printf("Apuesta a Impar\n");

                
                contiene=contieneValor(numeroGanador, nrosImpares,17);
        
                if (contiene == 1) {

                    int casinoPaga = ((APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]) * 2);
                    printf("Usted ha ganado!\n");
                    printf("Ganancias de la mano, U$D: %d \n\n",casinoPaga);
                    historialPago += casinoPaga;
                    break;
                }

                else {

                    int casinoGana = (APUESTASTOTALES[bb][1] * APUESTASTOTALES[bb][2]);
                    printf("Usted ha perdido!\n");
                    printf("Perdidas de la mano, U$D: %d \n\n",casinoGana);
                    historialGanancia += casinoGana; 
                    break;
                }
            }

            default:
            break;
        }
	}

    if (historialGanancia > historialPago) {
        printf("Mesa ganadora!\n\n");
    }
    else if (historialGanancia < historialPago) {
        printf("Mesa en problemas!\n\n");
    }
    else {
        printf("Mesa no conforme!\n\n");
    }
}



int main()
{
    int option,cantidadRondas,contador=1,contadorTotaldeApuestas =0, bandera = 0, contadordeapuestas = 0;
    int apuesta[] = { 0, 0, 0, 40 };
    //apuesta es el array donde guardo temporalmente cada fila de la tabla
    int APUESTASTOTALES[10][4];
    //APUESTASTOTALES es TABLA de 10 filas y 4 columnas donde guardo una apuesta por fila
	printf("Hola\n");
	printf("Bienvenido a la Ruleta loca\n\n");
	printf("Para seleccionar las opciones, ingrese el numero\nentre corchetes seguido de la tecla ENTER\n\n");

    while(1)
    {
        printf("Ingrese la cantidad de rondas: ");
        scanf("%d", &cantidadRondas);
        if(cantidadRondas>0&&cantidadRondas<21){
            break;
        }
        printf("Ingrese un valor correcto (MAXIMO 20 RONDAS)\n");

    }

    printf("\n");
    while (contador<=cantidadRondas)
    {   //while que cuenta las rondas

    //for para inicializar APUESTASTOTALES en cero
        int ini1,ini2;
        for (ini1 = 0; ini1 < 10; ini1++)
        {
            for (ini2 = 0; ini2 < 4; ini2++)
            {
                APUESTASTOTALES[ini1][ini2] =0;
            }
            
        }

        printf("RONDA NUMERO: %d / %d \n\n",contador,cantidadRondas);
        contadordeapuestas = 0;
        contador++;

	    while (contadordeapuestas < 11)
        {//while que cuenta las apuestas de cada ronda
            
            bandera=0;
            if (contadordeapuestas == 10)
            {
                //caso ULTIMA APUESTA
                printf("Ya no puede realizar mas apuestas\nGirando ruleta\n\n");
                giraRuleta(APUESTASTOTALES);	
                break;
            }

            printf("Que desea hacer?\n");
            printf("[1]: Realizar una apuesta (%d / 10) \n", contadordeapuestas+1);
            if (contadordeapuestas == 9)
            {
                //aviso de ultima apuesta
                printf("Ultima apuesta! :O\n");
            }

            printf("[2]: Girar\n");
            printf("[3]: Salir\n");

            while (1)
            {
                //(validation)chequeo q la opcion exista 

                printf("Elija una opcion: ");
                scanf("%d", &option);

                if (option > 0 && option < 4)
                {
                    break;
                }

                printf("Ingrese un valor correcto! (entre 1 y 3)\n");
            }

            system("clear");

            switch (option)
            {
                case 1:
                {
                    realizarApuestas(&apuesta);
                    int j, aa;
                    aa = contadordeapuestas;	//aa=indice para ir guardando el la tabla
                    contadordeapuestas++;
                    contadorTotaldeApuestas++;
                    for (j = 0; j < 4; j++)
                    {
                        APUESTASTOTALES[aa][j] = apuesta[j];
                    }
                    break;
                }

                case 2:
                {        
                    giraRuleta(APUESTASTOTALES);
                    bandera=1;
                    break;
                }
                case 3:
                {
                    printf("Gracias! Vuelva pronto.\n");
                    return 0;
                }

                default:
                    break;
            }
            
            if (bandera == 1)
            {
                //para cortar el while si ya no quieren apostar mas
                break;
            }
            
        }
    }
        
    printf("DATOS FINALES: \n");
    //DATOS DEL FINAL

    //promedio
    float promedio,aux1,aux2;
    aux1=contadorTotaldeApuestas;
    aux2=cantidadRondas;
    promedio= aux1/aux2;
    printf("El promedio de apuestas por ronda es: %.2f \n\n", promedio);

    //comparativa ROJOvsNEGRO
    float totalrojonegro,porcRojo,porcNegro;
    totalrojonegro = apuestastotalesNegro+apuestastotalesRojo;
    printf("Comparativa de porcentaje Rojo vs Negro:\n");
    if(totalrojonegro>0){
        if(apuestastotalesNegro>0){
            porcNegro=(apuestastotalesNegro/totalrojonegro)*100;
            printf("El porcentaje de apuestas al Negro es %.2f%%\n", porcNegro);        
        }
        else
        {
            printf("No se ha apostado al negro\n");
        }

        if(apuestastotalesRojo>0){
            porcRojo=(apuestastotalesRojo/totalrojonegro)*100;
            printf("El porcentaje de apuestas Rojo es %.2f%%\n", porcRojo);
        }
        else
        {
            printf("No se ha apostado al rojo\n");

        }
    }
    else
    {
        printf("No se ha apostado nunca al rojo ni al negro. \n\n", porcRojo,porcNegro);
    }
    printf("\n");
    
    //si en mas de 5 rondas seguidas salio el mismo color
    printf("Cantidad de veces que salieron 5 numeros del mismo color seguidos:\n");
    printf(" Rojos: %d\n", banderaseguidosRojo);
    printf(" Negros: %d\n", banderaseguidosNegro);

	return 0;
}

;