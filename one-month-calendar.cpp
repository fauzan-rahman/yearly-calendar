#include<iostream>
#include<cmath>
using namespace std;

int main( )
{
     int n_days, start_day;

     cout << "Enter the number of days, 28, 29, 30 or 31 \n";
     cin >> n_days;

     cout << "Enter the first day of the month \n";
     cin >> start_day;

      cout << "Sun\tMon\tTue\tWed\tThr\tFri\tSat\n";
     for(int i = 0; i < start_day; i++)
     {
            cout << " \t";
     }
     for(int j = 1; j <= n_days; j++)
     {
           if( j%7 == 0)         // this is not working right...fix!
               cout << endl;

            cout << j  << "\t";
     }
     cout << endl;
     return 0;
}