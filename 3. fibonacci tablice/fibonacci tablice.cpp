
#include <iostream>
#include <iomanip>
using namespace std;


long double fib[100000]; int n;
int main()
{
    while (n >= 0) {
        cout << "Ile liczb fibonacciego chcesz wyznaczyc: ";
        cin >> n;

        fib[0] = 1;
        fib[1] = 1;

        for (int i = 2;i < n;i++)
        {
            fib[i] = fib[i - 2] + fib[i - 1];
        }

        cout << setprecision(10000);

         for (int i=0;i<n;i++) {
             cout << "wyraz nr " << i + 1 <<": " << fib[i] << endl;
         }
        cout << "wyraz nr " << n << ": " << fib[n - 1] << endl;
        cout << "zlota liczba: " << fib[n - 1] / fib[n - 2] << endl;
    }
}

