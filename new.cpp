#include <stdio.h>
#include <math.h>

int main() {
    int N; // Size of the matrix
    printf("Enter the size of the matrix: ");
    scanf("%d", &N);

    double A[N][N]; // Matrix A
    double x0[N]; // Initial guess for dominant eigenvector

    // Get the matrix elements from the user
    printf("Enter the elements of the matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    // Get the initial guess for the dominant eigenvector
    printf("Enter the initial guess for the dominant eigenvector:\n");
    for (int i = 0; i < N; i++) {
        scanf("%lf", &x0[i]);
    }

    int numIterations; // Number of iterations for the Power Method
    printf("Enter the number of iterations for the Power Method: ");
    scanf("%d", &numIterations);

    double x[N], lambda, error;
    int i, j, k;

    // Power Method
    for (k = 0; k < numIterations; k++) { // Perform the specified number of iterations
        // Compute the matrix-vector product Ax
        double temp[N];
        for (i = 0; i < N; i++) {
            temp[i] = 0;
            for (j = 0; j < N; j++) {
                temp[i] += A[i][j] * x0[j];
            }
        }

        // Normalize the result to get the next approximation
        double norm = 0;
        for (i = 0; i < N; i++) {
            norm += temp[i] * temp[i];
        }
        norm = sqrt(norm);
        for (i = 0; i < N; i++) {
            x0[i] = temp[i] / norm;
        }

        // Print the current approximation
        printf("Iteration %d:\n", k + 1);
        for (i = 0; i < N; i++) {
            printf("x[%d] = %.6f\n", i, x0[i]);
        }
    }

    // Rayleigh Quotient
    double num = 0, den = 0;
    for (i = 0; i < N; i++) {
        num += A[i][i] * x0[i] * x0[i];
        den += x0[i] * x0[i];
    }
    lambda = num / den;
    printf("\nDominant eigenvalue: %.6f\n", lambda);

    return 0;
}
