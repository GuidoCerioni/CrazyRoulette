#include <stdio.h>
#include <stdlib.h>

int contadordeapuestas = 1;

//inicialización de los arrays (no se si está bien pero odio C asi que voy
//  a inicializar todo lo que me pongan enfrente :(

int apuesta[] = { 0, 0, 0, 40 };

int APUESTASTOTALES[10][4] = { 0, 0, 0, 40, 0, 0, 0, 40, 0, 0, 0, 40, 0, 0, 0, 40, 0, 0, 0, 40, 0, 0, 0, 40, 0, 0, 0, 40, 0, 0, 0, 40, 0, 0, 0, 40, 0, 0, 0, 40 };

//APUESTASTOTALES es TABLA de 10 filas y 4 columnas

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

	contadordeapuestas++;
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

int main()
{
	int bandera = 0;
	int option;
	printf("Holis\n");
	printf("Bienvenido a la Ruleta loca\n\n");

	while (contadordeapuestas < 12)
	{
		if (contadordeapuestas == 11)
		{
			//caso ULTIMA APUESTA
			printf("Ya no puede realizar mas apuestas\n");
			//aca iria lo que hacemos cuando le dan a GIRAR RULETA
			break;
		}

		printf("QuE tE pInTA aser amiwo??\n");
		printf("[1]: Realizar una apuesta (restante %d / 10) \n", contadordeapuestas);
		if (contadordeapuestas == 10)
		{
			//aviso de ultima apuesta
			printf("Ultima apuesta! :O\n");
		}

		printf("[2]: Girar\n");
		printf("[3]: En juego (NOP)\n");

		while (1)
		{
			//(validation)chequeo q la opcion exista 

			printf("Elija una opcion: ");
			scanf("%d", &option);

			if (option > 0 && option < 4)
			{
				break;
			}

			printf("Ingrese un valor correcto! \n");
		}

		system("clear");

		switch (option)
		{
			case 1:
				{
					realizarApuestas(&apuesta);
					int j, aa;
					aa = contadordeapuestas - 2;	//aa=indice para ir guardando el la tabla

					printf("aa = %d \n", aa);

					for (j = 0; j < 4; j++)
					{
						APUESTASTOTALES[aa][j] = apuesta[j];
					}

					break;
				}

			case 2:
				{
					int sa;
					printf("Seguro desea girar? \n");
					scanf("%d", &sa);
					bandera = 1;	//para cortar el while si ya no quieren apostar mas

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
					}

					break;
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

	return 0;
}