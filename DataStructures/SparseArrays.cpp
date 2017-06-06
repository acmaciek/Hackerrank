#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    
    int num1,num2,counter;
    cin >> num1;
    char s1[num1][20];
    
    for(int i = 0; i < num1; ++i) {
        cin >> s1[i];
    }
    cin >> num2;
    char s2[num2][20];
    for(int j = 0; j < num2; ++j) {
        cin >> s2[j];
    }
    for(int k = 0; k < num2; ++k) {
        counter = 0;
        for(int l = 0; l < num1; ++l) {
            if(strcmp(s1[l],s2[k]) == 0) {
                counter++;
            }
		}
        cout<<counter<<endl;
	}
    return 0;
}
