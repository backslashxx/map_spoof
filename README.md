## basic map spoof

apply kernel.diff, build driver

Usage:
```
gcc userspace.c -o reboot
./reboot 0x11111111 11001 arm64-v8a.so
./reboot 0x11111111 11003 1
```

- Prebuilt binaries: https://github.com/backslashxx/map_spoof/actions
- No warranties.
- No support.
- No.
