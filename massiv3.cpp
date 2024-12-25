#include <iostream>
using namespace std;

int get_first(int number) {
    while (number >= 10)
        number /= 10;

    return number;
}


int main() {
    cout << "n: ";
    unsigned int n;
    cin >> n;
    int mas[100];

    cout << "sequence: ";
    for (unsigned int i = 0; i < n; i++) {
        cin >> mas[i];
        
        if (get_first(mas[i]) == 1) {
            mas[i] = 0;
            continue;
        }
    }
    cout << "answer:   ";
    for (int number : mas) {
        if (number != 0 )
            cout << number << ' ';
    }
    cout << endl;
}