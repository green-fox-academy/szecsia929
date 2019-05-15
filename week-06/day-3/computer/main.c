#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer pc;
    pc.bits = 64;
    pc.ram_size_GB = 16;
    pc.cpu_speed_GHz = 2.8;
    printf("Bits: %d, Ram: %d, CPU: %.1f\n", pc.bits, pc.ram_size_GB, pc.cpu_speed_GHz);

    Notebook notebook;
    notebook.bits = 32;
    notebook.ram_size_GB = 4;
    notebook.cpu_speed_GHz = 2.1;
    printf("Bits: %d, Ram: %d, CPU: %.1f\n", notebook.bits, notebook.ram_size_GB, notebook.cpu_speed_GHz);

    return 0;
}