nclude <bits/stdc++.h>

using namespace std;

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    int A;
    int B;
    cin >> b0 >> b1 >> b2;
    // Write Your Code Here
    if(a0>b0){
        A++;
    }
    if(a1>b1){
        A++;
    }
    if(a2>b2){
        A++;
    }
    if(a0<b0){
        B++;
    }
    if(a1<b1){
        B++;
    }
    if(a2<b2){
        B++;
    }
    cout<<A<<" "<<B;
    return 0;
}


