                       //In this program same bug but Logic is currat
#include<iostream>
using namespace std;

void merge_sort(int arr[],int arr1[],int n,int m){
    int idx = m+n - 1,i = m - 1,j = n - 1;
    while(i >= 0 && j >= 0){
        if(arr[i] >= arr1[j]){
            arr[idx]  = arr[i];
            idx--;
            i--;
        }else{
            arr[idx] = arr1[j];
            idx--;
            j--;
        }
    }
    //anthor loop
    while(j >= 0){
        arr[idx] = arr1[j];
        idx--;
        j--;
    }
}
int main(){
    int arr[] = {1,2,3};
    int arr1[] = {2,5,6};
    int m = sizeof(arr)/sizeof(0);
    int n = sizeof(arr1)/sizeof(0);
    merge_sort(arr,arr1,m,n);
    for(int i = 0;i <= n;i++){
        cout<<arr[i]<<" ";
    }


}