#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float positive=0;
    float negative = 0;
    float zero = 0;
    cin >> n;
    vector<int> arr(n);
    
	for(int i = 0;i < n;i++){
       cin >> arr[i];
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]<0){
            negative++;
        }
        else
            zero++;
    }
    cout<<positive/n<<endl;
    cout<<negative/n<<endl;
    cout<<zero/n<<endl;
    return 0;
}
