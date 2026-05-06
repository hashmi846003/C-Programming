#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prefix[n+1];
    prefix[0] = 0;

    // Build prefix sum
    for (int i = 0; i < n; i++) {
        prefix[i+1] = prefix[i] + arr[i];
    }

    // Query sum of [1..3]
    int L = 1, R = 3;
    int sum = prefix[R+1] - prefix[L];
    printf("Sum from %d to %d = %d\n", L, R, sum);

    return 0;
}
