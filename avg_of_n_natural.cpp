#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    float avg;
    
    cout << "Enter the number of natural numbers to find their average: ";
    cin >> n;

    int i = 1;

    while (i <= n) {
        sum = sum + i;
        i++;
    }

    avg = static_cast<float>(sum) / n;  // Cast one of the operands to float for accurate division
    cout << "Average of the first " << n << " natural numbers is: " << avg;

    return 0;
}
