// exercise 5:
// display the percent that nation’s population is of the world’s population

#include <iostream>
int main()
{
    using namespace std;
    long long worldPopulation;
    long long nationPopulation;
    cout << "Enter the world's population: ";
    cin >> worldPopulation;
    cout << "Enter the population of the nation: ";
    cin >> nationPopulation;
    double nation_of_world = ( (double)nationPopulation / (double)worldPopulation  ) * 100;
    cout << "The population of nation is " << nation_of_world << "% of the world population.";
    return 0;
}