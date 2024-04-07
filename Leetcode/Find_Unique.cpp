#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    auto start = high_resolution_clock::now(); // Record the starting time

    int m;
    int flag = 0;
    int count;
    cout << "Enter a Value : ";
    cin >> m;

    int size = (2 * m) + 1;
    int arr[size];
    cout << "Enter the Values into the Array!! : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {

        count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count = count + 1;
            }
        }
        if (count == 1) {
            cout << "Ans = " << arr[i] << endl;
        }
    }

    auto stop = high_resolution_clock::now(); // Record the stopping time

    auto duration = duration_cast<milliseconds>(stop - start); // Calculate the duration

    cout << "Execution time: " << duration.count() << " milliseconds" << endl;

    return 0;
}
