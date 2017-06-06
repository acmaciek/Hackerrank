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

int k = 0;
int maxScore = 0;
int scores[16];

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int i = 0;i < 6;i++){
        for(int j = 0;j < 6;j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0;i <4;i++){
        for(int j = 0;j < 4;j++){
            scores[k] =arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                        k++;
                    }
                }
    maxScore = scores[0];
    for(int i = 0; i < 16; ++i){
        if (scores[i] >= maxScore){
            maxScore = scores[i];
        }
    }
    cout<<maxScore;
    return 0;
}
