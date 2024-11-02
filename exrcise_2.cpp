#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int positives = 0;
    int negatives = 0;
    int zeroes = 0;
    int consecutive_zeros = 0;

    cout << "Enter a sequence of numbers (terminate with two consecutive zeros, e.g., 0 0): ";

    while (true) {
        cin >> num;

        if (num == 0) {
            consecutive_zeros++;
            if (consecutive_zeros == 2) {
                break; // Exit the loop when two consecutive zeros are entered
            }
        } else {
            if (num < 0) {
                negatives++;
            } else if (num > 0) {
                positives++;
            } else {
                zeroes++;
            }
            consecutive_zeros = 0; // Reset consecutive_zeros count
        }
    }

    cout << "Positive numbers: " << positives << " Negative numbers: " << negatives << " Zeroes: " << zeroes << endl;

    return 0;
}
