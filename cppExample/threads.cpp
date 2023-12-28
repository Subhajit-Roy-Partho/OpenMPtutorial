#include <iostream>
#include "omp.h"
using namespace std;

int main() {
    double A[1000];
    int tmp=0;
    // omp_set_num_threads(4); // call only 4 threads
    #pragma omp parallel num_threads(4)
    {
        int ID = omp_get_thread_num(); // rank
        int numThreads = omp_get_num_threads(); // total number of threads
        cout << "ID = " << ID << endl;
        cout << "numThreads = " << numThreads << endl;
        #pragma omp atomic
            tmp++;
        #pragma omp critical // only one thread can execute this block at a time
        {
            cout << "This is a critical section ID = "<< ID << endl;
            cout << "tmp = " << tmp << endl;
        }

    }
    cout<<"All done"<< endl; // This is barrier
    return 0;
}