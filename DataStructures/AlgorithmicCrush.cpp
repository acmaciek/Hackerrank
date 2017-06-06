#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int size;
	long int operations;
	long int num1,num2,sum,i,j,max=0,x=0;
    
    cin>>size>>operations;
    long int *list = new long int[size+1]();
    
    for(i=0;i<operations;i++)
    {
        cin>>num1>>num2>>sum;
        list[num1]+=sum;
        if((num2+1)<=size) list[num2+1]-=sum;
    }
    
    for(i=1;i<=size;i++)
    {
        x=x+list[i];
        if(max<x) max=x;
    }
    cout<<max;
    return 0;
}
