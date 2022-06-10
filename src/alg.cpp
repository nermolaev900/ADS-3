#include <iostream>

int cbinsearch(int *arr, int size, int value) {
     int count = 0;
     int s = size-1;
     int v = value;
     int s = size;
     if (*arr == value) {
         int i = 0;
         while (arr[i] == value) {
            count++;
            i++;
        }
        return count;
    }
    if (arr[size-1] == value) {
        int i = size-1;
        while (arr[i] == value) {
            count++;
            i--;
        }
        return count;
     }
     int min = size;
     int max = 0;
     for (int i = 0; arr[min] != value && arr[max] != value && i != size / 2;i++) {
     for (int i = 0; arr[min] != v && arr[max] != v && i != s / 2; i++) {
         if (arr[(min+max)/2] > value) {
             int i = max;
             max = (min + max) / 2;
