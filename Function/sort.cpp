#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>//pair
#include <queue>//Queue
#include <deque>//deque
#include <stack>
using namespace std;

int binarySearch(int arr[],int low,int high,int key){
if(high<low)
    return-1;
int mid = (low + high)/ 2;
if(key == arr[mid])
    return mid;
if(key>arr[mid])
    return binarySearch(arr,(mid+1),high,key);
return binarySearch(arr,low,(mid-1),key);
}

int insertSorted(int arr[],int n,int key,int Size){
if(n >= Size)
    return n;
int i;
for(i = n - 1; (i >= 0 && arr[i] > key);i--)
    arr[i + 1] = arr[i];
arr[i + 1] = key;
return (n + 1);
}

void insertionSort(int arr[], int length) {
    int key,j;
    for (int i = 1; i < length; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int partition (int arr[], int low, int high) {
    int pivot = arr[high];//7
    int i = (low - 1);//1

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {

        int pi = partition(arr, low, high);//1

        quickSort(arr, low, pi - 1);//execute sort left pivot
        quickSort(arr, pi + 1, high);//execute sort right pivot
    }
}
void selectionSort(int arr[], int n) {
    int min;
    for (int i = 0; i < n-1; i++) {
        min= i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min])
                min= j;
        swap(arr[min], arr[i]);
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}


void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (r + l) / 2;
        mergeSort(arr, l, m);    //execute sort left pivot
        mergeSort(arr, m + 1, r);//execute sort right pivot
        merge(arr, l, m, r);
    }
}




void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
//    int arr[] = {12, 11, 13, 5, 6};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    insertionSort(arr, n);
//    printArray(arr, n);

//    int arr1[] = {10, 7, 8, 9, 1, 5};
//    int n1 = sizeof(arr1) / sizeof(arr1[0]);
//    quickSort(arr1, 0, n1 - 1);
//    cout << "Sorted array: ";
//    printArray(arr1, n1);

//    int arr2[] = {64, 25, 12, 22, 11};
//    int n2 = sizeof(arr2)/sizeof(arr2[0]);
//    selectionSort(arr2, n2);
//    cout << "Sorted array: ";
//    printArray(arr2, n2);

//    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
//    int n3 = sizeof(arr3)/sizeof(arr3[0]);
//    bubbleSort(arr3, n3);
//    cout << "Sorted array: ";
//    printArray(arr3, n3);

    int arr4[] = {64, 34, 25, 12, 22, 11, 90};
    int n4 = sizeof(arr4)/sizeof(arr4[0]);
    mergeSort(arr4,0,n4-1);
    cout << "Sorted array: ";
    printArray(arr4, n4);

}