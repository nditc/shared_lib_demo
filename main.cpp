#include <iostream>
#include <dlfcn.h>

using namespace std;

int main() {
    void* dll_file = dlopen("./fib.dll", RTLD_LAZY);

    int (*fib_func)(int);

    fib_func = (int (*)(int)) dlsym(dll_file, "fib");

    cout << fib_func(5) << endl;

    return 0;
}
