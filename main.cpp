// HW1-2: trying to find illogical parentheses counts
// environment: Clion 2021.3.2
// C++ type: C++ 11
// gcc type: gcc version 8.1.0
#include <iostream>
#include <string>

using namespace std;

// get parentheses size and user input to build an array(Should store size of arr)
int get_parentheses_and_build_stack(const string& info, char*& arr) {
    cout << info;
    string input;
    getline(cin, input);
    arr = new char[input.size()];
    for (int i = 0; i < input.size(); i++) {
        arr[i] = input[i];
    }
    return int(input.size());
}

//show stack status
void show_stack(const int& arr_size, char*& arr) {
    cout << "=====Stack Status======" << endl;
    cout << "Element counts: " << arr_size << endl;
    for (int i = 1; i <= arr_size; i++) {
        if (i == 1)cout << "Top: ";
        else cout << "     ";
        cout << arr[arr_size - i] << endl;
    }
    cout << "=======================" << endl;
}

// pop stack top item and return it
char pop(int& arr_size, char*& arr) {
    // empty array(use '!' as representation)
    if (arr_size == 0)return '!';
    else{
        char pop_item = arr[arr_size-1];
        arr_size--;
        return pop_item;
    }
}


int main() {

    // create array to simulate stack
    char* arr;
    int arr_size = get_parentheses_and_build_stack("Enter parentheses: ", arr);

    show_stack(arr_size, arr);
    char pop_item = pop(arr_size, arr);
    show_stack(arr_size, arr);

    // deallocate memory space
    arr = nullptr;
    delete arr;

    system("pause");
    return 0;
}
