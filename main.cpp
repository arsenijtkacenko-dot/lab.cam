#include <iostream>
using namespace std;
 
int main()
{
    // задача Begin38 - переведення кілометрів у метри і сантиметри
    // декларація змінних
    double km, m, cm;
 
    // введення відстані у кілометрах
    cout << "Enter distance in kilometers: ";
    cin >> km;
 
    // переведення кілометрів у метри та сантиметри
    m = km * 1000;
    cm = km * 100000;
 
    // вивід результатів
    cout << "Distance in meters = " << m << endl;
    cout << "Distance in centimeters = " << cm << endl;
 
    return 0;
}
