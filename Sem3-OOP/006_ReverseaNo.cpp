#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0,neg=0;

  if(num<0){num=-num;neg=1;}

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

if(neg==1){num=-num;}
  
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
