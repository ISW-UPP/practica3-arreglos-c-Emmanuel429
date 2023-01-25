/*Practica 3 Arreglos
  Emmanuel Rodriguez Meza
  22020200001
*/
#include <iostream>

int arr[10];
using namespace std;

int main() {
    int i, ayu, mayor=0;
    double suma=0;
    for (i=0; i<arr[10];i++) {
        cout<<"Ingresa el valor de la posicion " <<(i+1)<<":";
        cin >> arr[i];
        if(arr[i]>mayor){
            mayor=arr[i];
        }
    }
    cout <<endl;
    cout<<"El arreglo normal es: ";
    for (i=0; i<arr[10];i++) {
        cout<<endl<<"Pocision " <<(i+1)<<":"<<arr[i];
    }
    for (i=0; i<arr[10]/2;i++) {
        ayu= arr[i];
        arr[i]= arr[10-1-i];
        arr[10-1-i]= ayu;
    }
    cout <<endl;
    cout <<endl;
    cout<<"El arreglo invertido es: ";
    for (i=0; i<arr[10];i++) {
        cout<<endl<<"Posicion: " <<(i+1)<<":"<<arr[i];
    }
    for (i = 0; i < arr[10]; i++) {
        suma+=arr[i];
    }
    cout<<endl<<endl<<"La media es: "<<suma*1.0/arr[10]<<endl;
    cout<<endl<<endl<<"El numero mayor de este arreglo es: "<<mayor;
    return 0;
}
