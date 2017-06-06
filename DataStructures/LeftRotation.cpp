#include <iostream>
#include <vector>
using namespace std;

void shiftBy(int numOfInt,int *array) {

	for(int j = 0; j < numOfInt; ++j) { 
    	if(j == 0) {
        	array[numOfInt] = array[j];
            array[j] = array[j + 1];
            }
        else{
            array[j] = array[j + 1];
            }
        }
}

int main() {
    
    int numOfInt = 0;
    int numOfRotations = 0;
    
    cin >> numOfInt >> numOfRotations;
    
    int array[numOfInt];
    for(int i = 0; i < numOfInt; ++i) {
        cin >> array[i];
    }
    while(numOfRotations > 0) {
    	shiftBy(numOfInt, array);
        numOfRotations--;
    }
    for(int k = 0; k < numOfInt; ++k) {
        cout<<array[k]<<" ";
    }
	return 0;
}





