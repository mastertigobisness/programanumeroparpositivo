#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
cout<<"ingrese el numero:";
cin>>a;
if(a>0){
cout<<"el numero es positivo";
}
if(a==0){
cout<<"el numero es neutro";
}
if(a<0){
cout<<"el numero es negativo";
}
return 0;
}
