#include <iostream>
#include <string.h>

using namespace std;
	int tam;

     struct alumno {
		char nombre[50];
		int num_control;
		char carrera[50];
	}alumno[2];
	
int main(){
	for(int i=0; i<2; i++){
		
		cout<<"\nIngrese el nombre del alumno: "<<endl;
		cin.getline(alumno[i].nombre, 50 ,'\n');
		

		cout<<"\nIngrese su numero de control"<<endl;
		cin>>alumno[i].num_control;
		
		fflush(stdin);
		cout<<"\nIngrese la carrera que estudia"<<endl;
		cin.getline(alumno[i].carrera,50,'\n');
		
		system("pause");
		system("cls");
	
	}
	
	for (int j = 0; j<2; j++){
		cout<<"\nNombre completo del alumno: "<<alumno[j].nombre<<"\n";
		cout<<"Numero de control: "<<alumno[j].num_control<<"\n";
		cout<<"Carrera: "<<alumno[j].carrera<<"\n";
				
	}
}
