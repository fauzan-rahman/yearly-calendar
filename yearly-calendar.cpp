#include<iostream>
#include<cmath>
#include<map>
#include<vector>
using namespace std;

void monthGenerator(int &start_day, int year){

    vector<string> monthName(12);
    vector<int> monthDays(12);
    monthName.at(0) = "January";
    monthName.at(1) = "February";
    monthName.at(2) = "March";
    monthName.at(3) = "April";
    monthName.at(4) = "May";
    monthName.at(5) = "June";
    monthName.at(6) = "July";
    monthName.at(7) = "August";
    monthName.at(8) = "September";
    monthName.at(9) = "October";
    monthName.at(10) = "November";
    monthName.at(11) = "December";

    for(int k=0; k<12; k++)
    {
        if(k==1){
            if (year%400 == 0 || (year%4 == 0 && year % 100 !=0)){
                monthDays.at(1) = 29;;
            } else {
                monthDays.at(1) = 28;
            }
        } else {
            if(k<=6){
                if(k%2 == 0){
                    monthDays.at(k) = 31;
                } else {
                    monthDays.at(k) = 30;
                }
            } else {
                if(k%2 == 0){
                    monthDays.at(k) = 30;
                } else {
                    monthDays.at(k) = 31;
                }
            }
        }
    }

   for (int month_counter = 0; month_counter<12; month_counter++){
    cout << monthName.at(month_counter) << " " << monthDays.at(month_counter) << endl;
    /*
    cout << "Sun\tMon\tTue\tWed\tThr\tFri\tSat\n";
    for(int i = 0; i < start_day; i++)
        {
                cout << " \t";
                
        }
        for(int j = 1; j <= monthDays.at(j-1); j++)
        {
            if(j+(start_day-1)!=0 && (j+(start_day-1))%7 == 0){
                cout << endl;
            }
                cout << j  << "\t";
        }
        start_day = (monthDays.at(month_counter)+start_day)%7;
        */
    }
}

int main()
{

    int year, start_day;
    bool leapyear = false;
    cout << "Enter the year for which you wish to generate the calendar: \n";
    cin >> year;

    cout << "Enter the day of the week for January 1st (Sun=0 to Sat=6):  \n";
    cin >> start_day;
    
    monthGenerator(start_day, year);

    return 0;
}