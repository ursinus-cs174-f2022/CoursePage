#include <stdio.h>


int main() {
    int arr[4] = {100, 200, 500, 1000};
    int* ptr = arr + 4;
    printf("%i\n", *ptr);
    return 0;
}
