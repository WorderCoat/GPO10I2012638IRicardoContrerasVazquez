#include <iostream>
using namespace std;
int Opcion, numa, name, año, clasi, carac, descripcion, genero, preciou, impu, total;

int main() {
	cout << "Bienvenido a esta tienda de videojuegos" << endl;
	cout << "Seleccione una opcion" << endl;
	cout << "1.-Agregar articulo" << endl;
	cout << "2.-Modificar Articulo" << endl;
	cout << "3.-Eliminar Articulo" << endl;
	cout << "4.-Lista de Articulo" << endl;
	cout << "5.-Limpiar la pantalla" << endl;
	cout << "6.-Salir" << endl;
	cin >> Opcion;	
	switch (Opcion) {
	case 1: {
		cout << "Num. del articulo" << endl;
		cin >> numa;
		cout << "Nombre del Videojuego" << endl;
		cin >> name;
		cout << "Año de lanzamiento" << endl;
		cin >> año;
		cout << "Clasificacion" << endl;
		cin >> clasi;
		cout << "Caracteristicas" << endl;
		cin >> carac;
		cout << "Descripcion" << endl;
		cin >> descripcion;
		cout << "Genero" << endl;
		cin >> genero;
		cout << "Precio unitario" << endl;
		cin >> preciou;
		cout << "Impuesto" << endl;
		cin >> impu;
		cout << "Total" << endl;
		cin >> total;
		system("pause");
		return main();
		break;
	}
	case 2: {
		break;
	}
	case 3: {
		break;
	}
	case 4: {
		break;
	}
	case 5: {
		system("cls");
		return main();
		break;
	}
	case 6: {
		cout << "Ten un excelente dia:)" << endl;
		EXIT_SUCCESS;
		break;
	}
	default:{
			  cout << "Seleccione la opcion correcta" << endl;
			  system("pause");
			  system("cls");
			  return main();
		  }
	}
}