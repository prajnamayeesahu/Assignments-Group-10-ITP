#include <iostream>
using namespace std;
int DecimalToBinary(int n) {
    int binary = 0, place = 1;
    while (n > 0){
        int r = n % 2;
        binary = binary + (r * place);
        n /= 2;
        place *= 10;
    }
    return binary;
}
int DecimalToOctal(int n) {
    int oct = 0, place = 1;
    while (n > 0){
        int r = n % 8;
        oct = oct + (r * place);
        n /= 8;
        place *= 10;
    }
    return oct;
}
int main()
{
    int n;
    cout << "Enter a Decimal number : ";
    cin >> n;
    cout << "Binary : " << DecimalToBinary(n) << endl;
    cout << "Octal : " << DecimalToOctal(n) << endl;
    return 0;
} 