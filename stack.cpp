#include <iostream>
#define MAX_SIZE 100
using namespace std;

class Stack {
private:
  int top;
  int arr[MAX_SIZE];

public:
  Stack() {
    top = -1;
  }

  void push(int value) {
    if (top >= MAX_SIZE - 1) {
      cout << "Tumpukan penuh, tidak dapat melakukan push." << endl;
    } else {
      top++;
      arr[top] = value;
      cout << "Pushed " << value << " ke dalam tumpukan." << endl;
    }
  }

  void pop() {
    if (top < 0) {
      cout << "Tumpukan kosong, tidak dapat melakukan pop." << endl;
    } else {
      int poppedValue = arr[top];
      top--;
      cout << "Popped " << poppedValue << " dari tumpukan." << endl;
    }
  }

  void display() {
    if (top < 0) {
      cout << "Tumpukan kosong." << endl;
    } else {
      cout << "Isi tumpukan: ";
      for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;
    }
  }
};

int main() {
  Stack stack;

  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.display();

  stack.pop();
  stack.display();

  stack.pop();
  stack.pop();
  stack.display();

  return 0;
}
