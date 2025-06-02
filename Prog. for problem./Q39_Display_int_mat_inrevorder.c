#include <stdio.h> 
int main() 
{ 
int arr[100], n;

printf("Enter the number of elements: ");
scanf("%d", &n);

printf("Enter %d integers:\n", n);
 for (int i = 0; i < n; i++) { scanf("%d", &arr[i]);
}
printf("Array in reverse order:\n"); for (int i = n - 1; i >= 0; i--) { printf("%d ", arr[i]);
} return 0; }