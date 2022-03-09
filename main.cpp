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
        else cout<<"     ";
        cout << arr[arr_size - i] << endl;
    }
    cout << "=======================" << endl;
}

// pop function also return the pop item

// push function with given input
void push(int& arr_size, char*& arr, char push_item){
    arr_size++;

}

int main() {

    char* arr;
    int arr_size = get_parentheses_and_build_stack("Enter parentheses: ", arr);

    show_stack(arr_size, arr);

    system("pause");
    return 0;
}
