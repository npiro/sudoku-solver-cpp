// Class automatically generated by Dev-C++ New Class wizard

#ifndef MATRIZ_H
#define MATRIZ_H

#include "casilla.h"

typedef Casilla *t_casptr[9];

/*
 * Estructura de datos para representar la matriz
 */
class Matriz
{
	public:
        Casilla *casillas[9][9];
        t_casptr filas[9];
        t_casptr columnas[9];
        t_casptr cuadros[9];
        int num_casillas_vacias;
		// class constructor
		Matriz();
		// copy constructor
		Matriz(const Matriz& m);
		// class destructor
		~Matriz();
		
		void PonerNumero(int fila, int col, int valor);
		void Imprimir(void);
		void ImprimirValoresPosibles(int fila, int col);

};

#endif // MATRIZ_H
