#include<iostream>
using namespace std;

// Function prototypes
void getInfo(int&, int&);
double computeWays(int, int);
double factorial(int);

void getInfo(int &pick1, int &pick2) {
    cout << "How many balls (1-12) are in the pool to pick from? ";
    while (!(cin >> pick1) || pick1 < 1 || pick1 > 12) {
        cin.clear();
        cin.ignore( 100, '\n');
        cout << "Input Error! ";
        cout << "How many balls (1-12) are in the pool to pick from? ";
    }
    cout << "How many balls (1-" << pick1 << ") will be drawn? ";
    while (!(cin >> pick2) || pick2 < 1 || pick2 > pick1) {
        cin.clear();
        cin.ignore( 100, '\n');
        cout << "Input Error! Must be between 1 and " << pick1 << " balls.\n";
        cout << "How many balls (1-" << pick1 << ") will be drawn? ";
    }
}
double computeWays(int n, int k) {
    return 1.0 / (factorial(n) / ((factorial(k)) * factorial(n -k)));
}
double factorial(int num) {
   double result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
        return result;
    }
}


