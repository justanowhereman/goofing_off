#include<iostream>
#include<string.h>

using namespace std;

int main()
{

    int arr[]={1,2,3,4,5,6};

    void search();{

        int len = sizeof(arr)/sizeof(arr[0]);
        int val=0;
        cout<<"enter search key: "; cin>> val;

        // searching
        int low = 0;
        int high = len-1;
        int mid = (low+high)/2;

        for (int i=0; i < len; i++){

            if (arr[mid] == val){
                cout<<"found at index: "<<mid<<endl;
                break;
            } else if (arr[mid] < val){
                low = mid+1;
                mid = (low+high)/2;
            } else if (arr[mid] > val){
                high = mid-1;
                mid = (low+high)/2;
            } else {
                cout<<"not found"<<endl;
                break;
            }
        }
    }

    return 0;
}