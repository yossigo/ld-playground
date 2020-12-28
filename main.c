#include <stdio.h>

extern void ver1_main(void);
extern void ver2_main(void);

int main(int argc, char *argv[])
{
    ver1_main();
    ver2_main();
    return 0;
}
