#include<bits/stdc++.h>
#include "vinh.h"
using namespace std;
 
void print_preliminary_message(){
    cout << "This program prints out a conversion table of temperatures." << endl << endl;
}

void input_table_specifications(int& lowest_entry, int& highest_entry, int& step_size){
    cout << "Enter the minimum (whole number) temperature" << endl;
    cout << "you want in the table, in Fahrenheit: ";
    cin >> lowest_entry;
    cout << "Enter the maximum temperature you want in the table: ";
    cin >> highest_entry;
    cout << "Enter the temperature difference you want between table entries: ";
    cin >> step_size;
    cout << endl << endl;
}
void print_message_echoing_input(int lowest_entry, int highest_entry, int step_size){
    cout << "Tempertature conversion table from " << lowest_entry << " Fahrenheit" << endl;
    cout << "to " << highest_entry << " Fahrenheit, in steps of ";
    cout << step_size << " Fahrenheit:" << endl << endl;
}

void print_table(int lowest_entry, int highest_entry, int step_size){
    int fahr; 

    /* Print table heading */
    cout.width(17);
    cout << "Fahrenheit";
    cout.width(13);
    cout << "Celsius" << "Absolute Value" << endl << endl;

    /* set format of individual values */
    cout.precision(2); 
    cout.setf(ios::fixed); 

    /* print table from lowest_entry to highest_entry */
    for (fahr = lowest_entry ; fahr <= highest_entry ; fahr += step_size) {
        cout << "   ";
        cout.width(13);
        cout << fahr;
        cout.width(13);
        cout << celsius_of(fahr) << absolute_value_of(fahr) << endl;
    }
}
int main() { 
    int lower = 0;  /* for the lowest Fahrenheit entry in the table */
    int upper = 0;  /* for the highest Fahrenheit entry in the table */
    int step = 1;   /* for the difference in Fahrenheit between entries */

    /* set the tabbing functions in iostream.h to left-justify */
    cout << setiosflags (ios::left);

    /* print a message explaining what the program does: */
    print_preliminary_message();

    /* prompt the user for table specifications in Fahrenheit: */
    input_table_specifications(lower, upper, step);
 
    /* print an appropriate message including an echo of the input: */
    print_message_echoing_input(lower, upper, step);
 
    /* Print the table (including the column headings): */
    print_table(lower, upper, step);
    return 0;
}
