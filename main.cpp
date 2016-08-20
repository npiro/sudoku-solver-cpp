#include <cstdlib>
#include <iostream>
#include <vector>
#include "matriz.h"
#include "search.h"

using namespace std;

int main(int argc, char *argv[])
{
    Matriz matriz;
    int x, y, val;
    for (x=0;x<9;x++) for (y=0;y<9;y++) {
          printf("Introducir x y valor\n");
          scanf("%d",&val);
          //if (x == -1) break;
          if (val != 0) matriz.PonerNumero(x,y,val);
          matriz.Imprimir();
          
    }
    matriz.Imprimir();
    /*matriz.PonerNumero(0,0,9);
    matriz.PonerNumero(0,2,7);
    matriz.PonerNumero(0,3,5);
    matriz.PonerNumero(0,6,2);
    matriz.PonerNumero(0,7,3);
    matriz.PonerNumero(1,0,2);
    matriz.PonerNumero(1,4,9);
    matriz.PonerNumero(1,6,4);
    matriz.PonerNumero(1,7,7);
    matriz.PonerNumero(2,0,8);
    matriz.PonerNumero(2,5,7);
    //matriz.PonerNumero(2,6,0);
    matriz.PonerNumero(2,7,5);
    matriz.PonerNumero(3,0,5);
    //matriz.PonerNumero(3,1,0);
    //matriz.PonerNumero(3,2,0);
    matriz.PonerNumero(3,3,2);
    matriz.PonerNumero(4,3,3);
    matriz.PonerNumero(4,4,4);
    matriz.PonerNumero(4,5,6);
    matriz.PonerNumero(5,2,8);
    matriz.PonerNumero(6,4,1);
    matriz.PonerNumero(7,1,7);
    matriz.PonerNumero(7,8,5);
    matriz.PonerNumero(8,1,3);
    matriz.PonerNumero(8,2,2);
    matriz.PonerNumero(8,3,7);

    matriz.PonerNumero(8,8,1);*/
    
    cout << "Making matriz2\n";
    Matriz matriz2 = matriz;
    matriz.Imprimir();
    while (false) {
          printf("insert coords: \n");
          int x, y;
          scanf("%d %d",&x,&y);
          matriz.ImprimirValoresPosibles(x,y);
    }
    Search search(matriz);
    search.min_max();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
