#include<iostream>

using namespace std;
int main (){
int matriz[50][50] ,matriz2[50][50];
int c;
int f;
int x;
int y;
int resul;

cout<<"***TAREA 4 | SUMA DE MATRICES ***"<<endl;
cout<<" PRIMERA MATRIZ " <<endl;
cout<<"Favor de ingresar las columnas"<<endl;
cin>>c;
cout<<"Favor de ingresar las filas"<<endl;
cin>>f;

for(int i=0; i<c; i++){
    for(int j=0; j<f; j++){
	cout<<"("<<i<<")"<<"("<<j<<")";
	cin>>matriz[i][j];
}
}
for(int i=0; i<c; i++){
    for(int j=0; j<f; j++){
    	cout<<matriz[i][j]; // Ya que se almaceno los datos en nuestro bucle for, ahora los mandamos a mostrar
    //////FINALIZA PRIMERA MATRIZ	
}

cout<<endl;
}


cout<<endl;
cout<<" SEGUNDA MATRIZ " <<endl;
cout<<"Favor de ingresar las columnas"<<endl;
cin>>c;
cout<<"Favor de ingresar las filas"<<endl;
cin>>f;

for(int i=0; i<c; i++){
    for(int j=0; j<f; j++){
	cout<<"("<<i<<")"<<"("<<j<<")";
	cin>>matriz2[i][j]; // finaliza la segunda matriz
}
}
for(int i=0; i<c; i++){
    for(int j=0; j<f; j++){
    	cout<<matriz2[i][j]; // Ya que se almaceno los datos en nuestro bucle for, ahora los mandamos a mostrar

    }
    cout<<endl;
} 	

cout<<"************************************"<<endl;
cout<<" El resultado de la suma de las matrices "<<endl; //
for(int i=0; i<c; i++){
    for(int j=0; j<f; j++){
    	resul=matriz[i][j]+matriz2[i][j] ;
    	cout<<resul;
    }
    if(resul%2){
	cout<<" Este resultado es Impar"; // la suma de las dos matrices se divide en 2, si el resultado de la divicion es primo, mostrara el mensaje
}else{
	cout<<" Este resultado es Primo";
}                

    cout<<endl;// La suma
}


}




    	


