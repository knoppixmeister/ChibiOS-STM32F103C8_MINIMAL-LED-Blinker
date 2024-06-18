# BluePill-ChibiOS
Green LED blinking app for STM32F103C8 (Blue pill) board with modern code on stable ChibiOS v.21.11.x

How to:
```
git clone https://github.com/knoppixmeister/ChibiOS-STM32F103C8_MINIMAL-LED-Blinker.git --recursive
cd ChibiOS-STM32F103C8_MINIMAL-LED-Blinker
make clean && make && cd build
openocd -f interface/stlink.cfg -f target/stm32f1x.cfg -c init -c "reset halt" -c "flash write_image erase ch.bin 0x08000000"
```

Cfg and Makefile code used from: https://github.com/ChibiOS/ChibiOS/tree/master/demos/STM32/RT-STM32F103-MAPLEMINI

Inspired by code: https://github.com/ddB0515/BluePill-ChibiOS
