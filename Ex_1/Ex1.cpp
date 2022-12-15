// Caneva Ex1 SL228_POBJ language C++ 
// Visual Studio 2020
// 01/12/2022	Einar Farinas

#include <iostream>
// 
using namespace std;


int main (void)
{
	char UserAnswer;
	int ValA, ValB;
	// Variables pour test A et B
	short i;
	short ValB1;
	double  ValB2;

	cout << "Exercice 1 : Farinas Einar" << endl;
	cout << "Solution en C a trandformer en C++" << endl;


	do {
		cout << "Test A ou B, Q pour Quitter \n";
		cin >> UserAnswer;
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				cout << "TestA: entrez un nombre entre 1 et 9 " << endl;
				cin >> ValA;

				if (ValA > 9)
				{
					ValA = 9;
					cout <<"TestA: ValA limitee a 9 " << endl;
				}
				if (ValA == 0)
				{
					ValA = 1;
					cout << "TestA: ValA forcee a 1 " << endl;
				}
				if (ValA > 0 )  
				{
					cout << ValA;
					for (i=0; i < ValA ; i++)
					{
						cout << "*";
					}
					cout << endl; // saut de ligne
				}
				else 
				{
					cout << "TestA: ValA est negatif ! " << endl;
				}
			break;

			case 'B':
			case 'b':
				cout << "TestB: entrez une valeur entre 0 et 9 \n";
				cin >> ValB;
				
				if (ValB >= 0 && ValB <=9 )
				{
					for (i=0; i < ValB; i++) { 
						ValB1 = 100 + (10 * i);
						ValB2 = ValB1 / 10000.0;
						// printf("TestB: i= %d ValB1 = %d ValB2 = %lf \n", i, ValB1, ValB2);
						cout << "TestB: i= " << i << "ValB1 =" << ValB1 << "ValB2 = " << ValB2 << endl;
					}
				}
				else
				{
					//printf("TestB: ValB n'est pas entre 0 et 9 ! \n");
					cout << "TestB: ValB n'est pas entre 0 et 9 ! \n";
				}
		break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}