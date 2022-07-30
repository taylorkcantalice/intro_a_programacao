#include <iostream>

using namespace std;

int main(){
    int B, C;

    cin >> B >> C;

    (B+C)%2 == 0 ? (cout << "Bino") : (cout << "Cino");

    return 0;
}