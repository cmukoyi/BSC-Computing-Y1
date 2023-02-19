#include <iostream>
using namespace std;

int main(){
    int min1, sec1 , min2 , sec2;
    cin >> min1 >> sec1 >> min2 >> sec2;
    int TotalMin = min1 + min2; 
    int TotalSec = sec1 + sec2;
    if (TotalSec > 60) {
        TotalMin = TotalMin + 1;
        TotalSec = TotalSec - 60 ;
    }
    cout << "Lenghts of tracks: " << TotalMin << " minutes " << "and " << TotalSec << " seconds";


    return 0;
}