#include <iostream>
using namespace std;

int main() {
    int n = 7;

    for (int i = 0; i < n; i++) {

        int spaces = abs(n / 2 - i) * 2 - 1;

        if (spaces < 0)
            spaces = 0;

        int stars = (i <= n / 2) ? i + 1 : n - i;

        for (int j = 0; j < stars; j++) {

            cout << "*";

            if (j != stars - 1) {
                if (stars == 1)
                    break;

                cout << " ";

                if (spaces > 0)
                    for (int k = 0; k < spaces; k++)
                        cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}