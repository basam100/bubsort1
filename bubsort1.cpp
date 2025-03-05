#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



void fillArray(int arr[], int size, int max) {
    srand(time(0));


    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max + 1);
        cout << arr[i] << " ";

    }


}

void displayArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";

    }


}




void swap2(int* a, int* b) {
    int c = *a;

    *a = *b;
    *b = c;


}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {


        for (int j = 0; i < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap2(&arr[j], &arr[j + 1]);
            }
        }

    }





}

void selectionSort(int arr[], int size) {

    for (int i = 0; i < size - 1; i++) {
        int smallest = i;
        for (int j = i ; j < size; j++) {
            if (arr[j] < arr[smallest])
                smallest = j;
            swap2(&arr[smallest], &arr[i]);



        }
    }
}
int binarySearch(int arr[], int size, int key) {
    
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (key == arr[mid]) {
            return mid;
     
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;



};



int main()
{
    const int SIZE = 10;
    int ans;
    cout << "what is the max of your array numbers?: ";
    cin >> ans;
    int list[SIZE];
    fillArray(list, SIZE, ans);
    selectionSort(list, SIZE);
    cout << endl;
    displayArray(list, SIZE);
    cout << endl << "What number did you want to search for?: ";
    cin >> ans;
    int result = binarySearch(list, SIZE, ans);
    if (result == -1) {
        cout << endl << "Not found!";
    }
    else {
        cout << endl << ans << " was found at index: " << result;
    }
    return 0;
}
