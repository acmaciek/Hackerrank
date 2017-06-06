#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    long int sum = 0;
    long int sumArr[5];
    long int temp = 0;
    long int temp1 = 0;
    
	cin >> a >> b >> c >> d >> e;
    long int array[5] ={a,b,c,d,e};
    sum = a+b+c+d+e;
    for(int i = 0; i < 5;i++){
        sumArr[i] = sum - array[i];
            temp1= sumArr[1];
    }
    for(int i = 0;i<5;i++){
        if(temp<sumArr[i]){
            temp = sumArr[i];
        }
        if(temp1>sumArr[i]){
            temp1 = sumArr[i];
        }
    }
    cout<<temp1<<" "<<temp<<endl;
  	 return 0;
}



