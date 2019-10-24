#include "share_memory.h"

int main()
{
    char buffer1[] = {0x11, 0x12, 0x13, 0x14, 0x15};
    double buffer[5] = {0};
    unsigned int length = sizeof(buffer);

    CShareMemory csm("txh", 1024);

    while (1)
    {
        csm.GetFromShareMem(buffer, length);
        for (int i = 0; i < 5; i++)
        {
            printf("%.2lf ", buffer[i]);
        }
        printf("\n");
    }
    return 0;
}