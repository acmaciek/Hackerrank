#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int sum1=0;
    int sum2=0;
    cin >> n;
    int a[n][n];
    
	for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        sum1 += a[i][i];
    }
    int j = 0;
    for(int i = n-1;i >= 0;i--){
        sum2 += a[i][j];
        j++;
    }
    cout<<abs(sum1-sum2);
    return 0;
}



