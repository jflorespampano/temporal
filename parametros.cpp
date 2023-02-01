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

