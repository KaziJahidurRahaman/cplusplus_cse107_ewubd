#include<iostream>
using namespace std;

int main(){
double number;
double account;
float le,lp,cb,xtra;

cout<<"For How Many Customers You Want To Calculate Credit ? : ";
cin>>number;

for(int i=0;i<number;i++){
    cout<<endl<<"Account Number : ";
    cin>>account;
    cout<<"Credit Limit Before Recession : $ ";
    cin>>le;
    cout<<"Current Balance : $ ";
    cin>>cb;
        lp=le/2;
        xtra=cb-lp;

    cout<<"New Credit Limit : $ "<<lp<<endl;
    if(xtra<0)
        cout<<"Balance Exceeds : You still have $ "<<(-1*xtra)<<" "<<"Remaining"<<endl;
    else
    cout<<"Balance Exceeds : $ "<<xtra<<endl;

}


return 0;
}
