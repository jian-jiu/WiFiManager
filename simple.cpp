#include "WiFiManager.h"
#include "simple.h"

String size(uint32_t paramBytes)
{
    const uint32_t flashChipSizeBytes = paramBytes;
    const uint32_t flashChipSizeKb = flashChipSizeBytes / 1024; // KB
    const uint32_t mb = flashChipSizeKb / 1024; // MB

    const unsigned long kb = flashChipSizeKb % 1024;
    const unsigned long bytes = flashChipSizeBytes % 1024;

    String str = "";
    if (mb > 0)
    {
        str += String(mb) + "mb ";
    }
    if (kb > 0)
    {
        str += String(kb) + "kb ";
    }
    if (bytes > 0)
    {
        str += String(bytes) + "bytes";
    }

    return str;
}
