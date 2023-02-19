#include <iostream>

using namespace std;

int main(){

	
	int const maxItemsInBox = 10;
	int numberOfBoxesNeeded , itemsLeftOver , numberItemsReceived ;

	cout << "Enter number of items received: " ;
	cin >> numberItemsReceived;

	numberOfBoxesNeeded = numberItemsReceived / maxItemsInBox;
	itemsLeftOver = numberItemsReceived % maxItemsInBox;
	
	cout << "We will need  " << numberOfBoxesNeeded << " boxes ";
	cout << itemsLeftOver << " items will be left over";





}