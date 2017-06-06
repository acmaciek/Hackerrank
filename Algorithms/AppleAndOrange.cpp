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
    int s;
    int t;
    int countO = 0;
    int countA = 0;
    
    cin >> s >> t;
     
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
 
   for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    	if(apple[apple_i] + a >=s &&apple[apple_i] + a <=t){
        	countA++;
    	}
    }
   vector<int> orange(n); 
   	for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
        if(orange[orange_i] + b >=s &&orange[orange_i] + b <=t){
        	countO++;
    }
    }
    cout<<countA<<endl;
    cout<<countO<<endl;
    return 0;
}


