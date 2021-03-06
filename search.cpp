// Class automatically generated by Dev-C++ New Class wizard

#include "search.h" // class's header file
#include "matriz.h"
#include "casilla.h"
#include <vector>
#include <iostream>

// class constructor
Search::Search(Matriz matriz)
{
    depth = 0;
    arbol.push_back(matriz);
    finished = false;
}

// class destructor
Search::~Search()
{
	// insert your code here
}

bool Search::min_max(void)
{
    

    int depth = arbol.size() - 1;
    Matriz *nodo = &arbol[depth];
    if (nodo->num_casillas_vacias == 0) return true;
    //arbol[0].Imprimir();
    //arbol[1].Imprimir();
    depth++;
    /*nodo->Imprimir();
    if (depth < 25) {
       cout << "depth: " << depth << "\n";
       
    }
    else getchar();*/
    for (int i=0;i<9;i++) for (int j=0;j<9;j++) {
        if (nodo->casillas[i][j]->lleno) {
           //cout << i << " " << j << " llena\n";
           continue;
        }
        int num_valores_posibles = nodo->casillas[i][j]->num_valores_posibles();
        if (num_valores_posibles == 0) return false;
        bool found_solution;
        for (int k=0; k<num_valores_posibles; k++) {
            arbol.push_back(arbol[depth-1]);
            nodo = &arbol[depth];
            int valor = nodo->casillas[i][j]->valores_posibles[k];
            //cout << "Casilla: " << i <<" "<< j << "\n";
            //nodo->ImprimirValoresPosibles(i,j);
            nodo->PonerNumero(i,j,valor);
            //nodo->Imprimir();
            
            //getchar();
            found_solution = min_max();
            if (finished) return true;
            if (found_solution) {
               cout << "Finished\n" << "Depth: " << arbol.size() << "\n";
               nodo->Imprimir();
               finished = true;
               arbol.pop_back();
               return true;
            }
            arbol.pop_back();
        }
        return false;
    }

    return false;

}
