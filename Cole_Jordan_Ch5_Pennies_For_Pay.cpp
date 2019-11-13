//Jordan Cole
//CO SCI_802_26188FA19V
//Chap. 5: Pennies for Pay
//Program calculates monthly income if the salary is one penny the first day and doubles daily.
//Asks the user for the number of days worked and displays a table.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    //Create variables for days worked, daily salary, and total salary
    int days;
    double daily = 0.01, total = 0.00;

    //Receive user input (days worked)
    cout << "How many days did the employee work this month? ";
    cin >> days;
    cout << endl;

    //Input validation (days in a month must be between 1 and 31)
    while (days < 1 || days > 31)
    {
        cout << "ERROR: Enter a number of days between 1 and 31: ";
        cin >> days;
    }

    //Display the results in table format (header)
    cout << "Day          Pay" << endl;
    cout << "--------------------------";
    cout << setprecision(2) << fixed << endl;

    //Display the results in table format (running daily)
    for(int count = 0; count < days; count++)
    {
        total = (total + daily);
        cout << setw(2) << (count + 1) << setw(12) << "$" << daily << endl;
        daily = (daily * 2);   
    }

    //Display the results in table format (total)
    cout << "--------------------------" << endl;
    cout << "Total " << setw(8) << "$" << total << endl;

    return 0;
    system("pause");
}
