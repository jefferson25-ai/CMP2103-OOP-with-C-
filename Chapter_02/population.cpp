// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.


#include <iostream>

using namespace std;

int main() {
    // Current population and initial setup
    long long population = 312032486;

    // Calculate total seconds in a year (365 days)
    const long long SECONDS_PER_YEAR = 365 * 24 * 60 * 60; // 31,536,000 seconds

    // Calculate annual increases/decreases based on rate assumptions
    long long birthsPerYear = SECONDS_PER_YEAR / 7;
    long long deathsPerYear = SECONDS_PER_YEAR / 13;
    long long immigrantsPerYear = SECONDS_PER_YEAR / 45;

    // Net population change each year
    long long annualNetChange = birthsPerYear - deathsPerYear + immigrantsPerYear;

    // Display population for each of the next five years
    for (int year = 1; year <= 5; ++year) {
        population += annualNetChange;
        cout << "Year " << year << " population: " << population << endl;
    } //fwehh
    return 0;
}