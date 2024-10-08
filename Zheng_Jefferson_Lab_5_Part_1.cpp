//Jefferson Zheng
//October 8, 2024
//Lab 5 Part 1

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //Define Variables
    double minutes, weight, calories;
    int activity;

    //Ask for user data and stores them
    cout << "How long did you exercise for (in minutes)? ";
    cin >> minutes;
    cout << "How much do you weigh (in kilograms)? ";
    cin >> weight;
    cout << "Which activity did you perform? (1. walking slowly, 2. walking quickly, 3. jogging) ";
    cin >> activity;

    //Prints Number of Calories Burned For the Exercise
    switch (activity) {
        case 1:
            cout << " > Walking Slowly     " << fixed << setprecision(2) << ((2 * 3.5 * weight) / 200) * minutes << " Calories Burned" << endl;
            break;
        case 2:
            cout << " > Walking Quickly    " << fixed << setprecision(2) << ((3 * 3.5 * weight) / 200) * minutes << " Calories Burned" << endl;
            break;
        case 3:
            cout << " > Jogging            " << fixed << setprecision(2) << ((8.8 * 3.5 * weight) / 200) * minutes << " Calories Burned" << endl;
            break;
        default:
            cout << "Invalid Activity" << endl;
    }

    //Asks for how many calories the user wants to burn, stores it
    cout << "\nHow many calories do you want to burn? ";
    cin >> calories;

    //Prints Number of Minutes Needed For the Exercise
    switch (activity) {
        case 1:
            cout << " > Walking Slowly     " << fixed << setprecision(2) << calories / ((2 * 3.5 * weight) / 200) << " Minutes" << endl;
            break;
        case 2:
            cout << " > Walking Quickly    " << fixed << setprecision(2) << calories / ((3 * 3.5 * weight) / 200) << " Minutes" << endl;
            break;
        case 3:
            cout << " > Jogging            " << fixed << setprecision(2) << calories / ((8.8 * 3.5 * weight) / 200) << " Minutes" << endl;
            break;
        default:
            cout << "Invalid Activity" << endl;
    }

    return 0;
}

/*
How long did you exercise for (in minutes)? 60
How much do you weigh (in kilograms)? 49.6
Which activity did you perform? (1. walking slowly, 2. walking quickly, 3. jogging) 1
 > Walking Slowly     104.16 Calories Burned

How many calories do you want to burn? 2200 
 > Walking Slowly     1267.28 Minutes
*/