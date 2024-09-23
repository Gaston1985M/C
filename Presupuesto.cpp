
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

   float presupuesto,suma,precio;
   suma=0;
   cout<<"Cual es el presupuesto";
   cin>>presupuesto;

   while(suma<presupuesto){
        cout<<"Digite el precio del articulo";
        cin>>precio;
        suma+=precio;
   }

   cout<<"La suma a sobrepasado el presupuesto";

   cout<<"El total de todos los articulos es de"<<suma;






    getch();
   return 0;
}
