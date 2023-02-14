# repositorio nombre: temporal
archivos de programacion 1
## Actividad 01 febrero 2023
### descargue los archivos de ste repositorio y relice lo siguiente:
1. abrir el archivo expresiones.cpp y probarlo
2. atender la exposicion de expresiones del profesor

```
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int mifuncion(){ return 5;}
int main(){
	//int r=0;
	//int r=mifuncion();
	int r=mifuncion()+4;
	
	cout<<"La suma de los valores es: "<<r;

	getch();
	return 0;
}
```

3. abrir el archivo parametros.cpp y probarlo
4. atender la explicacion de parametros del profesor

```
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
void incrementa(int x){ 
	x++;
}

void incrementa_ver2(int &x){ 
	x++;
}
int main(){
	int r=0;
	//incrementa(r);
	incrementa_ver2(r);
	cout<<"el valor de r es: "<<r;

	getch();
	return 0;
}
```
# Actividad 15 de febrero 2023
Ejercicios:
1. Declare un vector con los valores: 23,11,76,10,21,30,67,85,24,32,11,10,21,56,10, 
Lea un dato y búsquelo en el vector, muestre la posición donde se encontró el dato.
2. Para el vector del ejercicio 1 busque el menor.
3. Para el vector del ejercicio 21, busque el mayor.
4. Para un valor dado, indique cuantas veces aparece el valor dentro del vector.

Apoyese en los siguiente ejemplos de código:

declarando arreglos, declaramos el vector r con :
```
#include <iostream>
using namespace std;
const int N=6;
int main(void){
    int r[N];
    int v[N]={0,11,22,33,44,55};
    
    return 0;
}

Recorrer un vector y mostrar sus datos:
```
for(int i=0;i<N;i++){
        cout<<v[i]<<",";
}

```
Se accede a un elemento del vector por medio de su índice:
cout<<v[3]// muestra el contenido del vector en la posición 3 (contados desde 0).
Los valores contenidos en el vector se cuentan desde la posición 0, es decir en el vector:
```
int v[N]={0,11,22,33,44,55};
 cout<<v[0]; imprime el valor 0
 cout<<v[1]; imprime el valor 11
 //etcétera.
```
uso de vectores como parametros:
```
#include <iostream>
using namespace std;
const int N=6;

int mostrar_vector(int v[]){
    for(int i=0;i<N;i++){
        cout<<v[i]<<",";
    }
    cout<<"\n";
    return 0;
}

int duplica_valores(int v[]){
    for(int i=0;i<N;i++){
        v[i]*=2;
    }
    return 0;
}

int main(void){
    int r[N],pm=0;
    int v[N]={0,11,22,33,44,55};
    mostrar_vector(v);
    duplica_valores(v);
    mostrar_vector(v);
    
    return 0;
}

```
