## stm_raspi_spi
---
## stm32とraspi3Bとのspi通信を行ったのでここに記録します。
今回のspi通信ではラズパイがマスターでstmがスレーブで設定します。

### raspi(Master)
* NSSは使わない
* GPIOをNcleoのNSS

g++ raspi_spi.cpp -lwiringPi -o spitest
---


### Nucleo(slave)
* NSSをinputで設定する（詳しくはsetting参照）
