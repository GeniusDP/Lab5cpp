#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, d, cnt;
    do {
        cout << "Input none-negative integer number n: ";
        cin >> n;
    } while (n < 0);
    for (int a = 0; a * a <= n; a++) {
        for (int b = a; b * b <= n; b++) {
            for (int c = b; c * c <= n; c++) {
                for (int d = c; d * d <= n; d++)
                    if (a * a + b * b + c * c + d * d == n) {
                        cout << setw(3) << a;
                        cout << setw(3) << b;
                        cout << setw(3) << c;
                        cout << setw(3) << d << endl;
                    }
            }
        }
    }
    cout << "These are all combinations!\nWIN!";
    return 0;
}
