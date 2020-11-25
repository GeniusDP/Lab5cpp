#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //оглашение переменных
    int n, d, cnt;
    do {//Проверка на корректность ввода
        cout << "Input none-negative integer number n: ";
        cin >> n;
    } while (n < 0);
    //перебор комбинаций чисел a<=b<=c<=d
    for (int a = 0; a * a <= n; a++) {
        for (int b = a; b * b <= n; b++) {
            for (int c = b; c * c <= n; c++) {
                for (int d = c; d * d <= n; d++)
                    //Если комбинация подошла, выводим её
                    if (a * a + b * b + c * c + d * d == n) {
                        cout << setw(4) << a;
                        cout << setw(4) << b;
                        cout << setw(4) << c;
                        cout << setw(4) << d << endl;
                    }
            }
        }
    }
    cout << "These are all combinations!\nWIN!\n\n\n\n\n";
    return 0;
}
