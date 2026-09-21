#include <Arduino.h>
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup()
{
    Keyboard.begin();
    USB.begin();

    // Give Windows time to enumerate the USB HID keyboard.
    delay(5000);

    Keyboard.print("Hello World");
}

void loop()
{
}
