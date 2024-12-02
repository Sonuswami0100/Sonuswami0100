#include<iostream>
#include<algorithm>
using namespace std;
int maxsum(int arr[],int size){
    int maxsum , currsum;
    for(int i = 0;i < size;i++){
        currsum += arr[i];
        maxsum = max(currsum,maxsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    return maxsum;
}
int main(){
    int arr[] = {3,-4,5,-1,7,-8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxsum(arr,size);
}