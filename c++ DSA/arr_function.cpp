#include<bits/stdc++.h>
using namespace std;
int linear(int arr[],int sz,int tar ){ 
    for(int i = 0;i < sz;i++){
        if(i == tar){
            return i;
        }
    }
    return -1;
}
void reverse(int arr[] ,int sz){
    int end = sz-1;
    int start = 0;
    while (start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
} 
int sumARR(int arr[],int sz){
    int sum = 0;
    for(int i = 0;i < sz;i++){
        sum += arr[i];
    }
    return sum;
}
int productARR(int arr[],int sz){
    int product = 1;
    for(int i = 0;i < sz;i++){
        product *= arr[i];
    }
    return product;
}
int minARR(int arr[],int sz){
    int minarr = INT_MAX;
    for(int i = 0;i < sz;i++){
        minarr = min(arr[i],minarr);
    }
    return minarr;
}
int maxARR(int arr[],int sz){
    int maxarr = INT_MIN;
    for(int i = 0;i < sz;i++){
        maxarr = max(arr[i],maxarr);
    }
    return maxarr;
}
void swapARR(int arr[],int sz){
   int minarr = minARR(arr,sz);
    int maxarr = maxARR(arr,sz);

    if(sz < 2){
        cout<<"ERROR!";
    }
    swap(arr[minarr],arr[maxarr]);
    
    cout<<"swap min and max = ";
    for(int i = 0;i < sz;i++){
        cout<<arr[i];
    }
   

}

int main(){
    int arr[] = {1,2,3,5,6};
    int size = 5;
    int target = 3;
    cout<< " find elemate = "<<linear(arr,size,target)<<endl;
    reverse(arr,size);
    cout<<"reverse array = ";
    for(int i = 0;i < size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"sum of the arr = "<<sumARR(arr,size)<<endl;
    cout<<"product of arr = "<<productARR(arr,size)<<endl;
    swapARR(arr,size);

}