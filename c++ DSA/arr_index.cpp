#include<bits/stdc++.h>
using namespace std;
int main() {
    int marks[5] = {22,54,-8,1,6};

    int samle = INT_MAX;
    int lagest = INT_MIN;
    int minindex = 0;
    int maxindex = 5;

    for(int i = 0;i < 5;i++){

        if(marks[i] < marks[minindex]){
            minindex = i;
        }

        if(marks[i] > marks[maxindex]){
            maxindex = i;
        }
    }
    cout<<"INDEX = "<<minindex<<endl;
    cout<<"MAX INDEX = "<<maxindex<<endl;
    return 0;
}