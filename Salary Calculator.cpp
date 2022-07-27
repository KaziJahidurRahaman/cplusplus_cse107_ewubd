#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double totalSalary = 0;
  double salary;
  double extSalary;
  double hours;
  double rate;


  cout << "Enter hours worked (-1 to end): ";
   cin >> hours;

  while( hours != -1)
  {

    cout << "Enter hourly rate of the employee ($00.00): ";
   cin >> rate;

      if( hours <=40 )
      {
        salary = hours * rate;
        cout << "Salary is $" << setprecision( 2 ) << fixed << salary << endl;
    }
    else
     {
        totalSalary = (40*rate) + ((hours-40)*rate*1.5);
        cout << "Salary is $" << setprecision( 2 ) << fixed << totalSalary << endl;
     }
   cout << "\nEnter hours worked (-1 to end): ";
   cin >> hours;

    }
    //for pause
   //system("PAUSE");
   return 0;
}
