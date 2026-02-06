#include <stdio.h>

#if defined(_WIN32)
#elif defined(__unix__)
#endif

int main(int argc, char* argv[]) {
    printf("Hello, World\n");
    return 0;
}