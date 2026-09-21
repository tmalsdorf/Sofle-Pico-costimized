# M1 — USB HID Keyboard

Milestone goal: prove that the Lonely Binary ESP32-S3 N16R8 can enumerate as a native USB HID keyboard and type text into a host computer.

## Hardware

- Lonely Binary ESP32-S3 N16R8
- 16 MB flash
- 8 MB PSRAM
- Native USB-C port labeled `USB`

Use the native `USB` connector for HID operation. The `UART` connector is not used for the keyboard data path.

## Development environment

- VS Code
- PlatformIO
- Arduino framework for ESP32-S3

## Expected behavior

After reset, the firmware starts native USB, waits 5 seconds for the host to enumerate the HID device, and types:

```text
Hello World
```

## Build and upload

From PlatformIO:

1. Build the `lonely-binary-esp32s3` environment.
2. Upload to the board.
3. Focus a text editor before the 5-second delay expires.

If automatic upload cannot connect after HID firmware has been flashed, enter the ESP32-S3 bootloader manually:

1. Hold `BOOT`.
2. Press and release `RESET`.
3. Release `BOOT`.
4. Upload again.

## Status

M1 verified on hardware: the ESP32-S3 successfully enumerated as a USB HID keyboard and typed `Hello World` into Windows.
