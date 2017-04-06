//Efraín Girón Romero 15300102 3I 
#include "stdafx.h"
#include <iostream>

using namespace std;

void casoA(char *c11);
void casoB(char *c21);

int main()
{
	char res, Res;
	do
	{
		system("cls");
		cout << "Que accion deceas realizar" << endl;
		cout << "A: Eliminar\nB: Cambiar\nS: salir" << endl;
		cin >> res;
		Res = toupper(res);
		switch (Res)
		{
		case 'A':
			system("cls");
			char cad11[30];
			cout << "Dame una cadena de caracteres y eliminare una letra de la cadena" << endl;
			cin >> cad11;
			for (int a = 0; a < 30; a++)
			{
				cad11[a] = toupper(cad11[a]);
			}
			casoA(cad11);
			system("Pause");
			break;
		case 'B':
			system("cls");
			char cad21[40];
			cout << "Dame una cadena y cambiare las vocales por numeros" << endl;
			cin >> cad21;
			for (int a = 0; a < 40; a++)
			{
				cad21[a] = toupper(cad21[a]);
			}
			casoB(cad21);
			system("Pause");
			break;
		case'S':
			exit(0);
			break;
		default:
			system("cls");
			cout << "Opcion no valida" << endl;
			system("Pause");
			break;
		}
	} while (Res != NULL);
    return 0;
}

void casoA(char *c11)
{
	int j = 0;
	char let1;
	cout << "Que caracter deceas eliminar" << endl;
	cin >> let1;
	let1 = toupper(let1);
	int lon1 = strlen(c11);
	for (int  i = 0; i <= lon1; i++)
	{
		if (c11[i]!=let1) 
		{
			c11[j++] = c11[i];
		}
	}
	cout << "La cadena resultante es " << c11 << endl;
}


void casoB(char *c21)
{
	char x[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int z = 0;
	int lon2 = strlen(c21);
	cout << c21 << endl;
	cout << lon2 << endl;
	lon2 = lon2 - 1;
	char *c211 = c21;
	for (int a = 0; a<=lon2; a++)
	{
		if (*c211 == 'A' || *c211 == 'E' || *c211 == 'I' || *c211 == 'O' || *c211 == 'U')
		{
			*c211 = x[z];
			z++;
		}
		*c211++;
		
		if (x[z]==x[9])
		{
			z = 0;
		}
	}
	cout << "La cadena resultante es " << c21 << endl;
}

