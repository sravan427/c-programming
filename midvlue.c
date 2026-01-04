#include <stdio.h>
int main() {
    int n;
    int key = 40;
    int low = 0, high = n-1, mid;
    printf("Enter n size :");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers :",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    printf("Not Found");
}
