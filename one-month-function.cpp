#include<iostream>
#include<cmath>
using namespace std;

void monthGenerator(int &start_day, int n_days){
   cout << "Sun\tMon\tTue\tWed\tThr\tFri\tSat\n";
   for(int i = 0; i < start_day; i++)
     {
            cout << " \t";
            
     }
     for(int j = 1; j <= n_days; j++)
     {
           if(j+(start_day-1)!=0 && (j+(start_day-1))%7 == 0){
            cout << endl;
           }
            cout << j  << "\t";
     }
     start_day = (n_days+start_day)%7;
}

int main( )
{
    int n_days, start_day;

    cout << "Enter the number of days, 28, 29, 30 or 31 \n";
    cin >> n_days;

    cout << "Enter the first day of the month \n";
    cin >> start_day;
    
    monthGenerator(start_day,n_days);

    return 0;
}