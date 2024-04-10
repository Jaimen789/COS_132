#include <iostream>
using namespace std;

int s;
int *globalArray = new int(s);



int partition_asc(int *globalArray, int start, int end){
    int pivot = globalArray[start];

    int count = 0;

    for(int i = start + 1; i <= end; i++){
        if(globalArray[i] <= pivot)
        count++;
    }

    int pivotIndex = start + count;

    swap(globalArray[pivotIndex], globalArray[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (globalArray[i] <= pivot) {
            i++;
        }
 
        while (globalArray[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(globalArray[i++], globalArray[j--]);
        }
    }

    

    return pivotIndex;
}

int partition_dec(int *globalArray, int start, int end) {
    int pivot = globalArray[start];
    int i = start;
    
    for (int j = start + 1; j <= end; j++) {
        if (globalArray[j] > pivot) { // Adjust the comparison for descending order
            i++;
            // Swap elements to move smaller elements to the left
            int temp = globalArray[i];
            globalArray[i] = globalArray[j];
            globalArray[j] = temp;
        }
    }

    // Move the pivot element to its correct position
    int temp = globalArray[i];
    globalArray[i] = globalArray[start];
    globalArray[start] = temp;

    return i;
}





void my_own_quicksort_asc(int *globalArray, int low, int high){
    if(low >= high){
            return;
    }

    int p = partition_asc(globalArray, low, high);

    my_own_quicksort_asc(globalArray, low, p - 1);
    my_own_quicksort_asc(globalArray, p + 1, high);
}

void my_own_quicksort_dec(int *globalArray, int low, int high){
    if(low < high){
        int p = partition_dec(globalArray, low, high);
        my_own_quicksort_dec(globalArray, p + 1, high);
        my_own_quicksort_dec(globalArray, low, p - 1); 
    }     
}

void quicksort(char direction, int lo, int hi){
    if(direction == '<'){
        my_own_quicksort_asc(globalArray, lo, hi);
    }else if(direction == '>'){
        my_own_quicksort_dec(globalArray, lo, hi);
    }else{
        cout << "error";
    }
}




int main(){
    cout << "Enter the size of the array:" << endl;
    cin >> s;

    int l;
    int h;
    char d;

    cout << "Enter the low value: " << endl;
    cin >> l;

    cout << "Enter the high value: " << endl;
    cin >> h;

    cout << "Enter the direction of the sort: < = small to large, > = large to small" << endl;
    cin >> d;

    cout << "Initialize the of the array" << endl;
    for(int j = 0; j < s ; j++){
        cin >> globalArray[j];
    }

    cout << endl;

    


    quicksort(d, l, h);

    cout << "globalArray: " << endl;
    for(int i = 0; i < s; i++){
        cout << globalArray[i] << endl;
    }

    delete[] globalArray;

    return 0;
}

