#include<iostream>
using namespace std;
int main(){
float m,g,mlg;
float tm=0;
float tg=0;
float omlg;

cout<<"Enter The Gallons Used (-1 To End) : ";
cin>>g;
while (g!=-1){
    cout<<"Enter The Miles Driven : ";
    cin>>m;

    mlg=m/g;
    tm=tm+m;
    tg=tg+g;

    cout<<"The Miles/Gallon For This Tank Was : "<<mlg<<endl<<endl;

    cout<<"Enter The Gallons Used (-1 To End) : ";
    cin>>g;

}
            omlg=tm/tg;
            cout<<endl<<endl<<"Overall Avarage Miles/Gallons Was : "<<omlg<<endl;




return 0;
}
