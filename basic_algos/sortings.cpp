#include<iostream>
#include<string.h>

void insertion(int arr[], int size);
void bubble(int arr[]);
void selection(int arr[]);
void quick(int arr[]);
void merge(int arr[]);
void out(int arr[], int size);

int main(){

    int grr [] = {5,2,7,1,8,4,9,0,6,3};
    int size = sizeof(grr) / sizeof(grr[0]);
    
    insertion(grr, size);

    return 0;
}

void insertion(int arr[], int size){

    /*
        * Logic- compare the two adjacent elements 
    */

    int temp = 0;

    for (int i=0; i<size-1; i++){
        
        if(arr[i] > arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        } 
    }

    out(arr, size);
}

void out(int arr[], int size){
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}