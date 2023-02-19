#include <iostream>
using namespace std;

int main(){

    int largeNumber , convertedNumber , seconds , minutes;
    const int min = 60;
    cout << "Please enter number to convert: " ;
    cin >> largeNumber;

    convertedNumber = largeNumber / min;
    seconds = largeNumber % min;

    cout << "Your number is: " << convertedNumber << " min and " << seconds << " seconds";
}
