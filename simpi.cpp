#include <iostream>
using namespace std;
bool is_prime(int j) {
    for (int i = 2; i <= sqrt(j); i++)
        if (j % i == 0) return false;
    return true;
}

int main (){
    cout << "n: ";
    unsigned int n;
    cin >> n;
    bool has_prime;

    
    if (is_prime(n))
        cout << "Simple";
    else 
        cout << " No simple";
}