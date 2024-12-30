                 //solve the bug Tomorrow
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int next_permutation(vector <int> arr[],int n){
    int piv = -1;
    for(int i = n-2;i >= 0;i--){
        if(arr[i] < arr[i+1]){
            piv = i;
            break;
        }
    }
    if(piv == -1){
        reverse(arr.begin(),arr.end());
        return -1;
    }
    //2
    for(int i = n-1;i > piv;i--){
        if(arr[i] > arr[piv]){
            swap(arr[i],arr[piv]);
                break;
        }
    }
    //3
    int i = piv+1,j = n - 1;
    while(i <= j){
        swap(arr[i],arr[j]);
            i++;
            j--;
    }

}
int main(){
    vector<int> arr = {1,2,3};
    int n = sizeof(arr)/sizeof(0);
}