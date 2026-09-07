#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {5, 4, 2, 6, 9, 1};

    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        
        while(arr[j] > key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}