//Даны три числа A, B, C. Найдите среди них максимальное и минимальное.

#include <iostream>

using namespace std;

int main() {
    int A, B, C, max, min;
    if (A > B > C) {
        A = max; C = min;
        }
    if (B > A > C) {
        B = max; C = min;
        }
    if (C > B > A) {
        C = max; A = min;
        }
    if (A > C > B) {
        A = max; B = min;
        }
    if (B > B > A) {
        B = max; A = min;
        }
    if (C > A > B) {
        C = max; B = min;
        }
}