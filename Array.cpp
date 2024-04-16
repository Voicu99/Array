// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

int main()
{
	//sintaxa declaratie array;
	// tip_date_array nume_array[dimensiune_array];
	//int note_student[10]; array cu valori neinitializate ;
	const int max_note = 10;
	int note_student[max_note] = { 10,5,7,3,9,7,5,6,8,1};
	
	std::cout << "Prima nota din catalog " << note_student[0] << std::endl;
	std::cout << "Ultima nota din catalog " << note_student[9] << std::endl;
	int suma_note = 0;

	for (int i = 0; i < max_note; i++)
	{
	
	    suma_note += note_student[i];  //suma_note = suma_note  + note_student[i] ;
		std::cout << "Notat la indexul " << i << " este " << note_student[i] << std::endl;
		std::cout <<"Suma notelor la acest index este " << suma_note << std::endl;
	}

	//aray multi dimensional :
	// tip_data_nume_array[dimensiune_array1][dimensiune_array2].......[dimenstiune_arrayn]

	int x[2][2] = { {1,2}, {3,4} };
	std::cout << x[0][1] << std::endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{

			std::cout << "La indexul " << i << " " << j << "avem val:" << x[i][j] << std::endl;
	    }





	}
	int my_arr[2][5] =
	{
	{1,2} , {1,2,3,4,5}
	};

	std::cout << my_arr[0][4] << std::endl; //grija mare la index cand avem matrici de dimensiune diferita
	                                        // daca facem my_array[0][4] --> avem comportament nedefinit
	                                        // deoarece la randul 0 nu exista coloana 4

	//sintaxa : std::vector <tip_data> nume vector ;
	std::vector<std::string> lista_cumparaturi{ "Paine", "Mere" };
	//lista_cumparaturi.push_back("Paine");
	//lista_cumparaturi.push_back("Mere");
	for (int i = 0; i < lista_cumparaturi.size(); i++)
	{
		//std::cout << lista_cumparaturi[i] << std::endl;
		std::cout << lista_cumparaturi.at(i) << std::endl; // .at(index) acelas lucru ca [index] doar ca verifca
	}                                                      // indexul sa nu fie out  of bounds


	lista_cumparaturi.at(1).erase(); //pot reseta la un anumit index
	//folosind at(index).erase()
	for (int i = 0; i < lista_cumparaturi.size(); i++)
	{
		
		std::cout << lista_cumparaturi.at(i) << std::endl;
	}        

	lista_cumparaturi.push_back("Lapte");

	for (int i = 0; i < lista_cumparaturi.size(); i++)
	{

		std::cout << lista_cumparaturi.at(i) << std::endl;
	}

	lista_cumparaturi.pop_back();//va sterge ultimul element introdus in vector ;
	for (int i = 0; i < lista_cumparaturi.size(); i++)
	{

		std::cout << lista_cumparaturi.at(i) << std::endl;
	}
	//lista_cumparaturi.clear();
	//std::string este similar cu std::vector<char>

	std::string test  = "Cuvant";
	for (int i = 0; i < test.size(); i++)
	{
		std::cout << test[i] << std::endl;
	}





}
