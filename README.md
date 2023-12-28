# OpenMPtutorial
Tutorial for OpenMP

#### Critial Points

- Code below is allowed
```cpp
#pragma omp critical // only one thread can execute this block at a time
        {
            cout << "This is a critical section ID = "<< ID << endl;
        }
```

- Code below is wrong
```cpp
#pragma omp critical{ // only one thread can execute this block at a time
            cout << "This is a critical section ID = "<< ID << endl;
        }
```