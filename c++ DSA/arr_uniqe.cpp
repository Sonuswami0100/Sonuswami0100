#include<bits/stdc++.h>
using namespace std;
int unique(int arr[],int sz){
    
    for(int i = 0;i < sz;i++){
        bool unique = true;
        for(int j = 0;j < sz;j++){
            if(i != j && arr[i] == arr[j]){
                 unique = false;
                 break;
            }
        }
        if(unique){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

}
int main(){
    int arr1[] = {1,2,3,6,4,2,1};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    unique(arr1,size);


}