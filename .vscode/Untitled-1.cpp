#include <iostream>
using namespace std;

int main() {
    int arr[5] ={10, 20, 30, 40, 50};

    int sum = 0;
    for (int i = 0; i < 5 ;i++) {
        cout << arr[i] <<" ";

    sum += arr[i];

}
cout << "\n总和: " << sum << endl;

    return 0;
} 