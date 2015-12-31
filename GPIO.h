#ifndef _GPIOH_
#define _GPIOH_

#include <bcm2835.h>

#define ENABLE          RPI_BPLUS_GPIO_J8_15

#define LEVEL1          RPI_BPLUS_GPIO_J8_29
#define LEVEL2          RPI_BPLUS_GPIO_J8_31
#define LEVEL3          RPI_BPLUS_GPIO_J8_33
#define LEVEL4          RPI_BPLUS_GPIO_J8_35
#define LEVEL5          RPI_BPLUS_GPIO_J8_37
#define LEVEL6          RPI_BPLUS_GPIO_J8_32
#define LEVEL7          RPI_BPLUS_GPIO_J8_36
#define LEVEL8          RPI_BPLUS_GPIO_J8_38

/**
 * Turn off all LEDs and finalize SPI.
 */
int initialize_gpios(void);

/**
 * Configures all GPIO modes and initial state.
 */
void restore_gpios();

#endif
