#include "hal.h"
#include "ch.h"

/*
 * Blinker thread, times are in milliseconds.
*/
static THD_WORKING_AREA(waThread1, 128);
static __attribute__((noreturn)) THD_FUNCTION(Thread1, arg) {
	(void) arg;

	chRegSetThreadName("blinker");

	while (true) {
		palClearPad(GPIOC, GPIOC_LED);
		chThdSleepMilliseconds(1000);

		palSetPad(GPIOC, GPIOC_LED);
		chThdSleepMilliseconds(1000);
	}
}

int main(void) {
	halInit();
	chSysInit();

	chThdCreateStatic(waThread1, sizeof(waThread1), NORMALPRIO, Thread1, NULL);

	while(true) {
		// palSetPad(GPIOC, GPIOC_LED);
		// chThdSleepMilliseconds(500);

		// palSetPad(GPIOC, 13);

		// palClearPad(GPIOC, GPIOC_LED);
		chThdSleepMilliseconds(1000);
	}

  return 0;
}
