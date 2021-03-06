#ifdef __cplusplus
template <typename T>
using Box = T*;
#endif


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct NotReprC_Box_i32;

typedef struct NotReprC_Box_i32 Foo;

struct MyStruct {
  int32_t *number;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void drop_box(int32_t *x);

void drop_box_opt(int32_t *x);

void root(const Foo *a, const struct MyStruct *with_box);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
