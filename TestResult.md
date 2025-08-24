# 動作確認(簡易版)


## 動作確認結果のまとめ

|機種名|結果|
|---|---|
|[Arduino Nano ESP32][NanoESP32]|◯|
|[Arduino Mega 2560][Mega2560]|◯|
|[Arduino M0 pro][M0Pro]|◯|
|[Arduino UNO R4 Minima][UnoR4Minima]|◯|
|[Arduino Nano 33 IoT][Nano33IoT]|◯|
|[Arduino Giga R1 Wifi][GigaR1WiFi]|◯|
|[Ardino MKR Zero][MKRZero]|◯|
|[Arduino Nano RP2040 Connect][NanoRP2040Connect]||


|内容|意味|
|---|---|
|◯|動作する|
|△|動作電圧の変換等を行えば動作する|
|▲|一部の機能が動作しない|
|✕|動作しない|
|-|原理的に互換性がない|
|未|未検証|


## API一覧

```
SwitchFunctionReturnValue begin(void);
SwitchFunctionReturnValue on(void);
SwitchFunctionReturnValue off(void);
```

```
typedef enum {
  SWITCH_TYPE_PULL_UP = 1,
  SWITCH_TYPE_PULL_DOWN
} SwitchType;
```

## テスト対象API
```
SwitchFunctionReturnValue on(void);
SwitchFunctionReturnValue off(void);
```

## 利用するデバイス
シンプルなON/OFFを目で見て簡単に判定できるように，モノクロLED([Grove LED 赤 Arduino用][GroveRedLED]等)を用いる．

## 動作
- LEDを消す
- スタート合図を待つ
- デバイスをONにし，1秒待ち，デバイスをOFFにし，1秒待つ．これを10回繰り返す．
- 人に確認してもらう．


## テスト結果

|機種名|結果|
|---|---|
|[Arduino Nano ESP32][NanoESP32]|◯|
|[Arduino Mega 2560][Mega2560]|◯|
|[Arduino M0 pro][M0Pro]|◯|
|[Arduino UNO R4 Minima][UnoR4Minima]|◯|
|[Arduino Nano 33 IoT][Nano33IoT]|◯|
|[Arduino Giga R1 Wifi][GigaR1WiFi]|◯|
|[Ardino MKR Zero][MKRZero]|◯|
|[Arduino Nano RP2040 Connect][NanoRP2040Connect]||

|内容|意味|
|---|---|
|◯|動作する|
|△|動作電圧の変換等を行えば動作する|
|✕|動作しない|
|-|原理的に互換性がない|
|未|未検証|

## テスト環境


|ソフトウェア/Arduinoファミリ|モジュール名|開発元|バージョン|
|---|---|---|---|
|Arduino IDE|－|Arduino|2.3.2|
|AVR|Arduino AVR Boards|Arduino|1.8.6|
|ESP32|Arduino ESP32 Boards|Arduino|2.0.18|
|Giga|Arduino Mbed OS Giga Boards|Arduino|4.3.1|
|Nano|Arduino Mbed OS Nano Boards|Arduino|4.3.1|
|M0|Arduino SAMD Boards (32bits ARM Cortex-M0+)|Arduino|1.8.14|
|UnoR4|Arduino Uno R4 Boards|Arduino|1.4.1|

### コンパイルテスト

|Arduino機種|コンパイル結果|
|---|---|
|[Arduino Nano ESP32][NanoESP32]|◯|
|[Arduino Mega 2560][Mega2560]|◯|
|[Arduino M0 pro][M0Pro]|◯|
|[Arduino UNO R4 WiFi][UnoR4WiFi]|◯|
|[Arduino UNO R4 Minima][UnoR4Minima]|◯|
|[Arduino Nano 33 IoT][Nano33IoT]|◯|
|[Arduino Giga R1 Wifi][GigaR1WiFi]|◯|
|[Arduino MKR WiFi 1010][MKRWiFi1010]|◯|
|[Ardino MKR Zero][MKRZero]|◯|
|[Arduino Nano RP2040 Connect][NanoRP2040Connect]|◯|

|内容|意味|
|---|---|
|◯|コンパイル成功|
|△|条件付き|
|✕|コンパイルできない|
|-|原理的に互換性がない|
|未|未検証|

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
