// Class automatically generated by Dev-C++ New Class wizard

#ifndef SEARCH_H
#define SEARCH_H
#include "matriz.h"

/*
 * Clase que contiene algoritmo de busqueda del arbol de posibilidades
 */
class Search
{
	public:
        vector<Matriz> arbol;
        int depth;
        bool finished;
		// class constructor
		Search(Matriz);
		// class destructor
		~Search();
		
		bool min_max(void);
};

#endif // SEARCH_H
