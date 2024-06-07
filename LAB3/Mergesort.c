#include <stdio.h>
#include <stdlib.h>

void Merge(int A[], int l, int mid, int h) {
    int i, j, k;
    int B[100];
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= h) {
        B[k++] = A[j++];
    }
    for (int i = l; i <= h; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int n) {
    int p, i, l, mid, h;
    for (p = 2; p <= n; p *= 2) {
        for (i = 0; i + p - 1 < n; i += p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (p / 2 < n) {
        Merge(A, 0, (p / 2) - 1, n - 1);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    MergeSort(A, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Merge(int A[], int l, int mid, int h) {
    int i, j, k;
    int B[100];
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= h) {
        B[k++] = A[j++];
    }
    for (int i = l; i <= h; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int n) {
    int p, i, l, mid, h;
    for (p = 2; p <= n; p *= 2) {
        for (i = 0; i + p - 1 < n; i += p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (p / 2 < n) {
        Merge(A, 0, (p / 2) - 1, n - 1);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    MergeSort(A, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Merge(int A[], int l, int mid, int h) {
    int i, j, k;
    int B[100];
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= h) {
        B[k++] = A[j++];
    }
    for (int i = l; i <= h; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int n) {
    int p, i, l, mid, h;
    for (p = 2; p <= n; p *= 2) {
        for (i = 0; i + p - 1 < n; i += p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (p / 2 < n) {
        Merge(A, 0, (p / 2) - 1, n - 1);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    MergeSort(A, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Merge(int A[], int l, int mid, int h) {
    int i, j, k;
    int B[100];
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= h) {
        B[k++] = A[j++];
    }
    for (int i = l; i <= h; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int n) {
    int p, i, l, mid, h;
    for (p = 2; p <= n; p *= 2) {
        for (i = 0; i + p - 1 < n; i += p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (p / 2 < n) {
        Merge(A, 0, (p / 2) - 1, n - 1);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    MergeSort(A, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Merge(int A[], int l, int mid, int h) {
    int i, j, k;
    int B[100];
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= h) {
        B[k++] = A[j++];
    }
    for (int i = l; i <= h; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int n) {
    int p, i, l, mid, h;
    for (p = 2; p <= n; p *= 2) {
        for (i = 0; i + p - 1 < n; i += p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (p / 2 < n) {
        Merge(A, 0, (p / 2) - 1, n - 1);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    MergeSort(A, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Merge(int A[], int l, int mid, int h) {
    int i, j, k;
    int B[100];
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= h) {
        B[k++] = A[j++];
    }
    for (int i = l; i <= h; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int n) {
    int p, i, l, mid, h;
    for (p = 2; p <= n; p *= 2) {
        for (i = 0; i + p - 1 < n; i += p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (p / 2 < n) {
        Merge(A, 0, (p / 2) - 1, n - 1);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    MergeSort(A, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Merge(int A[], int l, int mid, int h) {
    int i, j, k;
    int B[100];
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= h) {
        B[k++] = A[j++];
    }
    for (int i = l; i <= h; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int n) {
    int p, i, l, mid, h;
    for (p = 2; p <= n; p *= 2) {
        for (i = 0; i + p - 1 < n; i += p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (p / 2 < n) {
        Merge(A, 0, (p / 2) - 1, n - 1);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    MergeSort(A, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Merge(int A[], int l, int mid, int h) {
    int i, j, k;
    int B[100];
    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h) {
        if (A[i] < A[j]) {
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid) {
        B[k++] = A[i++];
    }
    while (j <= h) {
        B[k++] = A[j++];
    }
    for (int i = l; i <= h; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int n) {
    int p, i, l, mid, h;
    for (p = 2; p <= n; p *= 2) {
        for (i = 0; i + p - 1 < n; i += p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            Merge(A, l, mid, h);
        }
    }
    if (p / 2 < n) {
        Merge(A, 0, (p / 2) - 1, n - 1);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    MergeSort(A, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
