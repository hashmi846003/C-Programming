//WAP to find the common elements between two arrays and print the
//element with the maximum frequency.
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 2, 3, 2};
    int arr2[] = {2, 3, 6, 7, 2, 3, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int freq[1000] = {0};  

    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                freq[arr1[i]]++;
            }
        }
    }

    
    int maxFreq = 0, element = -1;
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            element = i;
        }
    }

    if (element != -1)
        printf("Element with maximum frequency among common elements: %d (frequency: %d)\n", element, maxFreq);
    else
        printf("No common elements found.\n");

    return 0;
}