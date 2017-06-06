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
    int n;
    cin >> n;
    int max = 0;
    int counter = 0;
    vector<int> height(n);
    for(int i = 0;i < n;i++){
        cin >> height[i];
        if(height[i] >= max){
            max = height[i];
        }
    }
    for(int j = 0; j < n; ++j){
        if(height[j] >= max){
            counter++;
        }
    }
    cout<<counter;
    return 0;
}



