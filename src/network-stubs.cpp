#include "configuration.h"

#if (HAS_ETHERNET == 0)

bool initEthernet()
{
    return false;
}

bool isEthernetAvailable()
{
    return false;
}

#endif
