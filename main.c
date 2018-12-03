#include <omp.h>
#include <stdio.h>

void some_function(int, int);

void integral_of_sine(int, int, int);

int main() {
    double begin_time = omp_get_wtime();
#pragma omp parallel num_threads(100)
    {
        int ID = omp_get_thread_num();
        some_function(ID, ID);
    }
    printf("done after %e msec\n", omp_get_wtime() - begin_time);
    return 0;
}

void some_function(int a, int b) {
    printf("%d*%d = %d\n", a, b, a + b);
}

void integral_of_sine(int from, int to, int steps) {

}