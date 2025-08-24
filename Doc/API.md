# API

```
typedef enum {
  SW_FUNCTION_UNSUPPORTED = 1,
  SW_FUNCTION_SUCCESS,
  SW_FUNCTION_FAIL
} SwitchFunctionReturnValue;
```

## API関数の返り値
メンバ関数はすべてvoidなので，返り値はなし

## クラスオブジェクトの作成と初期化
引数として，デバイス(の制御ライン)が接続されているピン番号と，デバイスタイプを与えて，クラスオブジェクトを作成したうえで，``begin()``を実行．

```
Switch(uint8_t pin, SwitchType type = SWITCH_TYPE_PULL_UP);
SwitchFunctionReturnValue begin(void);
```
デバイスタイプは，端子電圧のHIGH/LOWとデバイスのON/OFFの対応関係で，``SWITCH_TYPE_PULL_UP``もしくは``SWITCH_TYPE_PULL_DOWN``を選択する．
```
typedef enum {
  SWITCH_TYPE_PULL_UP = 1,
  SWITCH_TYPE_PULL_DOWN
} SwitchType;
```

## デバイスのON
引数なしで，メンバ関数``on()``を呼び出すことで，デバイスをONにすることができる．
```
SwitchFunctionReturnValue on(void);
```


## デバイスのOFF
引数なしで，メンバ関数``off()``を呼び出すことで，デバイスをOFFにすることができる．
```
SwitchFunctionReturnValue off(void);
```



<!-- LED 

|種類|名称|コントローラ|動作電圧(V)|
|---|---|---|---|
|モノクロLED|[Grove LED 赤 Arduino用][GroveRedLED]|なし|5|
||[Grove - Circular LED][GroveCircularLED]|MY9221|5|
||[Grove - LED Bar][GroveLEDBar]|MY9221|3.3/5|
|カラーLED|[RGBフルカラーLED 5mm OSTA5131A カソードコモン][OSTA5131A]|なし|5?|
||[チェーン接続可能 Grove RGB LED][GroveChainableRGB_Led]|P9813|5|
||[Grove RGB LED スティック][Grove_RGB_LEDスティック]|WS2813(NeoPixel)|3.3/5|
-->

<!-- Grove LED 赤 Arduino用 -->
[GroveRedLED]: https://wiki.seeedstudio.com/ja/Grove-Red_LED/
<!-- Grove RGB LED スティック -->
[Grove_RGB_LEDスティック]: https://wiki.seeedstudio.com/ja/Grove-RGB_LED_Stick-10-WS2813_Mini/
<!-- チェーン接続可能 Grove RGB LED -->
[GroveChainableRGB_Led]: https://wiki.seeedstudio.com/Grove-Chainable_RGB_LED/
<!-- Grove - LED Bar -->
[GroveLEDBar]: https://wiki.seeedstudio.com/Grove-LED_Bar/
<!-- Grove - Circular LED -->
[GroveCircularLED]: https://wiki.seeedstudio.com/Grove-Circular_LED/
<!-- マイコン内蔵RGBLED 5mm PL9823-F5 -->
[PL9823F5]: https://akizukidenshi.com/catalog/g/g108411/
<!-- RGBフルカラーLED 5mm OSTA5131A カソードコモン -->
[OSTA5131A]: https://akizukidenshi.com/catalog/g/g102476/




<!-- Arduino 本体 -->

|機種名|コア|MCU|動作電圧|
|---|---|---|---|
|[Arduino Nano ESP32][NanoESP32]|Xtensa LX6|ESP32-S3|3.3V|
|[Arduino Mega 2560][Mega2560]|AVR|ATmega2560|5V|
|[Arduino M0 pro][M0Pro]|ARM Cortex-M0+|ATSAMD21G18|3.3V|
|[Arduino UNO R4 WiFi][UnoR4WiFi]|ARM Cortex-M4|RA4M1|5V|
|[Arduino UNO R4 Minima][UnoR4Minima]|ARM Cortex-M4|RA4M1|5V|
|[Arduino Nano 33 IoT][Nano33IoT]|ARM Cortex-M0+|SAMD21|3.3V|
|[Arduino Giga R1 Wifi][GigaR1WiFi]|ARM Cortex-M7|STM32H747XI|3.3V|
|[Arduino MKR WiFi 1010][MKRWiFi1010]|ARM Cortex-M0+|SAMD21|3.3V|
|[Ardino MKR Zero][MKRZero]|ARM Cortex-M0+|SAMD21|3.3V|
|[Arduino Nano RP2040 Connect][NanoRP2040Connect]|ARM Cortex-M0+|Raspberry Pi RP2040|3.3V|

<!-- Arduino Nano ESP32 -->
[NanoESP32]:https://docs.arduino.cc/hardware/nano-esp32/
<!--Arduino Mega 2560-->
[Mega2560]:https://docs.arduino.cc/hardware/mega-2560/
<!--Arduino M0 pro-->
[M0Pro]:https://docs.arduino.cc/retired/boards/arduino-m0-pro/
<!--Arduino UNO R4 WiFi-->
[UnoR4WiFi]:https://docs.arduino.cc/hardware/uno-r4-wifi/
<!--Arduino UNO R4 Minima-->
[UnoR4Minima]:https://docs.arduino.cc/hardware/uno-r4-minima/
<!--Arduino Nano 33 IoT-->
[Nano33IoT]:https://docs.arduino.cc/hardware/nano-33-iot/
<!--Arduino Giga R1 Wifi-->
[GigaR1WiFi]:https://docs.arduino.cc/hardware/giga-r1-wifi/
<!--Arduino MKR WiFi 1010-->
[MKRWiFi1010]:https://docs.arduino.cc/hardware/mkr-wifi-1010/
<!--Ardino MKR Zero-->
[MKRZero]:https://docs.arduino.cc/hardware/mkr-zero/
<!--Arduino Nano RP2040 Connect-->
[NanoRP2040Connect]:https://docs.arduino.cc/hardware/nano-rp2040-connect/




<!--- コメント
[Adafruit Unified Sensor Driver][AdafruitUSD]
[Groveシールド][shield]
[Arduino M0 Pro][M0Pro]
[Arduino Due][Due]
[Arduino Uno R3][Uno]
[Arduino Mega2560 R3][Mega]
[Arduino Leonardo Ethernet][LeonardoEth]
[Arduino Pro mini 328 - 3.3V/8MHz][ProMini]
[ESpr one][ESPrOne]
[ESPr one 32][ESPrOne32]
[Grove][Grove]
[Seed Studio][SeedStudio]
[Arduino][Arduino]
[Sparkfun][Sparkfun]
[スイッチサイエンス][SwitchScience]
--->
