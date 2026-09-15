// The purpose of this program is to calculate the number of seats the user inputs and the price of the tickets would be. 
// Cali Andrews - the whole program, 6/8/24, COP 2000.
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Constants for cost 
    const double COST_PER_BALCONY_SEAT = 50.00;
    const double COST_PER_GRAND_TIER_SEAT = 175.25;
    const double COST_PER_LOGE_SEAT = 125.00;
    const double COST_PER_MEZZANINE_SEAT = 100.00;
    const double COST_PER_ORCHESTRA_SEAT = 230.50;

    // Variables 
    int num;
    double Balcony_seating;
    double Grand_tier_seating;
    double Loge_seating;
    double Mezzanine_seating;
    double Orchestra_seating;
    double total_sale;
    
    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    // Prompt for the user to put in a number, and then calculate the cost of the tickets.
    cout << " Please input the total number of seats purchased for the Balcony Seating > ";
    cin >> num;
    Balcony_seating = num * COST_PER_BALCONY_SEAT;
    cout << " Please input the total number of seats purchased for the Grand Tier Seating > ";
    cin >> num;
    Grand_tier_seating = num * COST_PER_GRAND_TIER_SEAT;
    cout << " Please input the total number of seats purchased for the Loge Seating > ";
    cin >> num;
    Loge_seating = num * COST_PER_LOGE_SEAT;
    cout << " Please input the total number of seats purchased for the Mezzanine Seating > ";
    cin >> num;
    Mezzanine_seating = num * COST_PER_MEZZANINE_SEAT;
    cout << " Please input the total number of seats purchased for the Orchestra Seating > ";
    cin >> num;
    Orchestra_seating = num * COST_PER_ORCHESTRA_SEAT;
    total_sale = Balcony_seating + Grand_tier_seating + Loge_seating + Mezzanine_seating + Orchestra_seating;

    // Displays the calculated data.
    cout << " Blue Lock Theater Ticket Sales " << endl; 
    cout << " ------------------------------" << endl;
    cout << " Balcony:        $ " << Balcony_seating << endl;
    cout << " Grand Tier:     $ " << Grand_tier_seating << endl;
    cout << " Loge:           $ " << Loge_seating << endl;
    cout << " Mezzanine:      $ " << Mezzanine_seating << endl;
    cout << " Orchestra:      $ " << Orchestra_seating << endl; 
    cout << " Total Sales:    $ " << total_sale << endl;

    return 0;
}