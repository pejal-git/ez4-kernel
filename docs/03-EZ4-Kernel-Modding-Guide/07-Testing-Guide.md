[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Build_Kernel_Guide-blue)](06-Build-Kernel-Guide.md)
[![Static Badge](https://img.shields.io/badge/Next-Flashing_Kernel_Guide-blue)](08-Flashing-Kernel-Guide.md)

---

# Testing Guide

For testing guide, we will test on GBA Emulator first before testing on real GBA hardware.  
EZ4 kernel can be loaded and tested using many, but not all GBA Emulator.  

The best known emulator for testing is batgba Emulator.

## Prerequisites
For testing the kernel, we will need both:
- batgba emulator - `batgba.exe`
- EZ4 kernel - `ezfla_up.bin`

You can find the batgba emulator packed in [EZ4-Mod-Pack.zip](../../src/zip/EZ4-Mod-Pack.zip), located in `EZ4-Mod-Pack/Tools/batgba/`


## 1. Run Emulator
Run `batgba.exe` located in EZ4-Mod-Pack/Tools/batgba/batgba.exe

For Linux user, run via wine:
```
wine ~/EZ4-Mod-Pack/Tools/batgba/batgba.exe
```

## 2. Load Kernel
Open your File Explorer and locate kernel file `ezfla_up.bin` in `/EZF4/Workspace/`.

Drag your kernel `ezfla_up.bin` into the batgba Emulator window. Alternatively, you can use batgba menu:-

- Click File > Load rom file and run.
- Then browse to `EZF4/Workspace/`.
- Select your `kernel ezfla_up.bin`.

## 3. Kernel Testing
You can test the loaded kernel with default hotkeys:
| Button | Hotkeys |
|--------|---------|
| A      | V       |
| B      | B       |
| Select | Space   |
| Start  | Return  |
| L      | F       |
| R      | G       |
|Up,Down,Left,Right | Arrow Keys |

If you wish to change the hotkeys, click Options > Keys.

- Press B (your screen may flash a few times)
- Keep pressing B until you arrived at your desktop.
- Now you can explore the modification you made.
- Check if you like the changes or if you see any flaws that needs fixing.

> [!NOTE]
> If you modify File Manager icons, you will still require Flashing as the emulator can't emulate SD Card.

---

[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Build_Kernel_Guide-blue)](06-Build-Kernel-Guide.md)
[![Static Badge](https://img.shields.io/badge/Next-Flashing_Kernel_Guide-blue)](08-Flashing-Kernel-Guide.md)
