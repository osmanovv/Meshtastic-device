#include "configuration.h"
#include <Arduino.h>

#if HAS_WIFI
#include "WiFiServerAPI.h"

static WiFiServerPort *apiPort;

void initApiServer(uint16_t port)
{
    // Start API server on port 4403
    if (!apiPort) {
        apiPort = new WiFiServerPort(port);
        LOG_INFO("API server listening on TCP port %d\n", port);
        apiPort->init();
    }
}

WiFiServerAPI::WiFiServerAPI(WiFiClient &_client) : ServerAPI(_client)
{
    LOG_INFO("Incoming wifi connection\n");
}

WiFiServerPort::WiFiServerPort(uint16_t port) : APIServerPort(port) {}
#endif
