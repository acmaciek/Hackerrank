nclude <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int sum = 0;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
       cin >> arr[i];
        sum+=arr[i];
    }
     cout<<sum<<endl;
    return 0;
}


