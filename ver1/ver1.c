#include "ver1.h"

void ver1_main(void) __attribute((visibility ("default")));
void ver1_main(void)
{
    func_a();
    func_b();
}
