#include <stdio.h>
#include "ds.h"

int main() {
    int sLen1 = 0, sLen2 = 0;
    printf("\n Enter sizes for two stacks, one at a line below: ");
    scanf("%d", &sLen1);
    scanf("%d", &sLen2);

    if (sLen1 + sLen2 < 0) {
        printf("\n Can't create stack having negative size.");
    } else {
        int arr[sLen1 + sLen2];
        createStacksFromArray(arr, sLen1, sLen2);
    }

    return 0;
}