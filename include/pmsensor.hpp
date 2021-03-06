#include <hpma115S0.h>
#include "hal.hpp"

#define SENSOR_INTERVAL 1000 * 60 * 3  // 3 minutes => more is better for the battery
#define SENSOR_SAMPLE 1000 * 35        // 30 seconds => less is better for the battery
#define SENSOR_RETRY 1000              // Sensor read retry

void pmsensorInit();
void pmsensorRead();
void pmsensorLoop(bool isBleConnected);
bool pmsensorDataReady();
bool pmsensorIsEnable();

String getStringPM1();
String getStringPM25();
String getStringPM10();
uint16_t getPM1();
uint16_t getPM25();
uint16_t getPM10();
