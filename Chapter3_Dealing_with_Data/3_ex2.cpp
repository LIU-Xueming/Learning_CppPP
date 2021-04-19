// exercise 2:
// calculate the BMI

#include <iostream>
int main()
{
    using namespace std;
    const int Fts_per_iches = 12;
    const double Iches_per_m = 0.0254;
    const double Kg_per_pds = 2.2;

    cout << "Enter your height in feets and inches.\n";
    int feet;
    int inches;
    cout <<"feets: ";
    cin >> feet;
    cout << "inches: ";
    cin >> inches;
    cout << "Enter your weight in pounds: ";
    double pounds;
    cin >> pounds;

    double h_in_iches = feet * Fts_per_iches + inches;
    double h_in_m = h_in_iches * Iches_per_m;
    double w_in_kg = pounds * Kg_per_pds;
    
    double BMI = w_in_kg / (h_in_m * h_in_m);
    cout << "Your BMI is: " << BMI << endl;
    return 0; 
}
