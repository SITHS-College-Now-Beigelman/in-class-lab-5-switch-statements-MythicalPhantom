//Jefferson Zheng
//September 23, 2024
//Homework 1 Part 2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Declares a variable called data
    double data;
    int quality;

    //User input for how much data they have
    cout << "How many Gigabytes of data do you have? ";
    cin >> data;
    cout << "Music Quality (1. Low, 2. Normal, 3. High): ";
    cin >> quality;

    //Outputs Hours of Music Depending on Amount of Data
    switch (quality) {
        case 1:
            cout << " > Low              " << fixed << setprecision(2) << (data * 1000) / 43.2 << " Hours" << endl;
            break;
        case 2:
            cout << " > Normal           " << fixed << setprecision(2) << (data * 1000) / 72 << " Hours" << endl;
            break;
        case 3:
            cout << " > High             " << fixed << setprecision(2) << (data * 1000) / 115.2 << " Hours" << endl;
            break;
        default:
            cout << "Invalid Quality" << endl;
    }

    return 0;
}

/*
How many Gigabytes of data do you have? 9012
Music Quality (1. Low, 2. Normal, 3. High): 3
 > High             78229.17 Hours
*/