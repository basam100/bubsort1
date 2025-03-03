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
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[smallest])
                smallest = j;
        if (smallest != i)
        swap2(&arr[smallest], &arr[j]);
        }
            

    }
}



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

    return 0;
}
