#include<iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
void bubbleSort(int data[], int n){
    int temp;
 for (int i = 0; i < n-1; i++)
    {
    for (int j = i+1; j < n; j++)
    {
        if (data[i]>data[j])
        {
            temp = data[i];
            data[i]=data[j];
            data[j]=temp;
        }   
        
    }
    }
}
int main(){
    int length;
    cout << "\n   ---------------------------------------------";
cout<<"\n   	         NAMA	: YUYEVIN ZEBUA        ";
cout<<"\n   	         NIM	: 181011402500         ";
cout<<endl;
cout << "\n                 Program Pengurutan Data        ";
cout << "\n                      Bubble Sort            ";
cout << "\n   ---------------------------------------------\n";
    cout<<"INPUT JUMLAH ELEMEN ARRAY : ";
    cin>>length;
    int data[length];
    for (int i = 0; i < length; i++)
    {
        cout<<"Nilai elemen ke-"<<i<<" = ";
        cin>>data[i];
    }cout<<endl;

    cout<<"Data belum terurut : "<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<data[i]<<" ";
    }cout<<endl;

    bubbleSort(data,length);
    cout<<"Data sudah terurut : "<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<data[i]<<" ";
    }cout<<endl;
        
}
