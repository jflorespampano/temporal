#include <iostream>
#include <string.h>
using namespace std;
const int N=6;

int main(void){
	//declarando arreglo de 10 cadenas
	char s[10][80];
	//poniendo palabras en las primeras 6 cadenas
    strcpy(s[0],"hola");
	strcpy(s[1],"juan");
	strcpy(s[2],"luis");
	strcpy(s[3],"pedro");
	strcpy(s[4],"ana");
	strcpy(s[5],"rosa");
	//almacenando cadenas vacias 
	strcpy(s[6],"");
	strcpy(s[7],"");
	strcpy(s[8],"");
	strcpy(s[9],"");
    for(int i=0;i<10;i++){
		cout<<"cadena "<<i<<" tiene: "<<s[i]<<endl;
	}
	//comparando cadenas
	if(strcmp(s[0],s[1])>0){
		cout<<"la cadena "<<s[0]<<" es alfabeticamente mayor que la cadena "<<s[1];
	}else{
		cout<<"la cadena "<<s[0]<<" NO es alfabeticamente mayor que la cadena "<<s[1];
	}
    return 0;
}
