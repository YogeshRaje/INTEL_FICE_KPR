
// foo.h
#ifdef __cplusplus
extern "C" {
#endif
int add(int x, int y);
#ifdef __cplusplus

#endif


//#include "foo.h"
#include <iostream>
#include <functional>
int main() {
[out = std::ref(std::cout << "Result from C code: " << add(1, 2))](){
out.get() << ".\n";
}();
return 0;
}
