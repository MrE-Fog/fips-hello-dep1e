#include "dep1/dep1.h"

#if _WIN32
#define MY_EXPORT extern "C" __declspec(dllexport)
#else
#define MY_EXPORT
#endif

MY_EXPORT int test_dep1() {
    print_dep1();
    return 0;
}
