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
    
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        int x = grade % 5;
        int y = grade / 5;
        
        if(grade == 39||grade == 38){
            grade = 40;
            cout<<grade<<endl;
        }
        else if(x<3||grade<38){
           cout<<grade<<endl;
       }
       else if(x >= 3){
           grade = 5*y + 5;
           cout<< grade<<endl;
       }
     }
    return 0;
}


