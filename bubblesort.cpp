#include <iostream>
using namespace std;
                                                      void andhika(int arr[], int size) {                     for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // Tukar elemen jika elemen saat ini lebih besar dari elemen berikutnya
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90, 70};
  int size = sizeof(arr) / sizeof(arr[0]);

  andhika(arr, size);

  cout << "Array yang diurutkan: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
