#include <iostream>
#include <vector>

using namespace std;
void insertionSort(vector<int>& arr){

    int n = arr.size();
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for (; j>=0; j--)
         {
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }           
         }
         
         arr[j+1] = temp;
    }

}

void printArray(vector<int> arr){

    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << " " <<arr[i];

    }
    
}

int main(){

    vector<int> arr= {2,12,5,8,6,1,9};
    insertionSort(arr);
    printArray(arr);

    
    return 0;
}