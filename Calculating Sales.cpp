#include<iostream>
using namespace std;
int  main()
{
     int  product;
     int  quantity;
     double total = 0.0;

     cout<<"Enter pairs of item numbers and quantities."<<endl;
     cout<<"Enter -1 for the item number to end input."<<endl;
     cin>>product;

     while (product!=-1){
          cin>>quantity;

          switch(product){
          case 1:
              total=total+(quantity*2.98);
              break;
          case 2:
              total=(total+quantity*4.50);
              break;
          case 3:
              total=total+(quantity * 9.98);
              break;
          case 4:
              total=total+(quantity * 4.49);
              break;
          case 5:
              total=total+(quantity * 6.87);
              break;
          default:
              cout<<"Invalid product code: "<<product;
              cout<<" Quantity: "<<quantity ;
          }
          cin>>product;
     }
     cout<<"The total retail value was: "<<total;
     return 0;
}
