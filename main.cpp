#include <iostream>
using namespace std;

void agregarElementos(int a[], int n); 
void imprimirElementos(int a[], int n); 
void ordenamientoSeleccion(int a[], int n); 
void menorElemento(int b[], int t);


// <------->
//MÉTODO DE MAIN
int main() {
  
  //hacerle pero que el usuario ingrese el tamanio del array

int a[5]; //en este caso 5 es el tamaño del array
cout << "Ingrese los elementos del array" <<endl;

agregarElementos(a,5);
imprimirElementos(a,5);
cout << "\n"<<endl;
ordenamientoSeleccion(a,5);

cout << "Elementos ordenados por algoritmo de selección \n"<<endl;
imprimirElementos(a,5);

cout << "\n"<<endl;
menorElemento(a, 5);


  return 0;
}

// <------->



void agregarElementos(int a[], int n){

  for (int i = 0; i<n ; i++){//elementos que entran en el arreglo
      
      cin >>a[i];
   }
      
} 




void imprimirElementos(int a[], int n){

   for (int i = 0; i<n; i++){

     cout <<"["<<a[i]<<"]";
   }

}

  



void ordenamientoSeleccion(int a[], int n){
  int i, j, aux, min;

  for (i = 0; i<n; i++){
      min = i; //inicialmente 0 mientras corre el for va tomando valores menores
       for(j = i + 1; j<n; j++){ //recorre los demás elementos del array ya no toma la posicion 0 del array

           if (a[j] < a[min]){      //si pongo > se ordenan de mayor a menor??? SII
              min = j;  

           }

       } 

        aux = a[i];
        a[i] = a[min];
        a[min] = aux;

  }


}




void menorElemento(int b[], int t){
int i, k;
  
k = b[0];//asumo que la primera posicion del array está ocupada por k
  for (i=1; i<t; i++){
    // si la primera posicion del array está ocupada este for 
    // empieza por la siguiente posicion (1) hasta la ultima

      if (k > b[i]){

          k = b[i];

       }

   }

  cout << "El menor elemento es: " << k;



}



