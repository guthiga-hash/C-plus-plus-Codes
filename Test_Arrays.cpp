#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int inArray[] = {1, 3, 5};
    int size = sizeof(inArray) / sizeof(inArray[0]);

    cout << "Input array, inArray:" << endl;
    for (int i = 0; i < size; i++) {
        cout << inArray[i] << " ";
    }
    cout << endl;

    cout << "Output array:" << endl;
    for (int i = 0; i < size; i++) {
        double result = exp(inArray[i]);   // e^x
        cout << result << endl;
    }

    return 0;
}
