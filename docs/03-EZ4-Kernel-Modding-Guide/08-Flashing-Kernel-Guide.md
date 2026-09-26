[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Testing_Guide-blue)](07-Testing-Guide.md)

---

# Flashing Kernel Guide

In this guide, we will be flashing EZ4 kernel into the EZ Flash IV or EZ Flash Reform cartridge.

Flashing can either upgrade or downgrade your kernel version depends on what you want to achieve.  

But beware that flashing unidentified kernel or corrupted kernel may brick your flash cart.

> [!WARNING]
> Make sure you test your kernel before flashing into real GBA hardware.  
> This would avoid issue such as accidentally bricking your cartridge.

---

## 1. Preparation
You will require an SD Card reader to transfer your new kernel into the SD Card.

**For EZ Flash IV old cartridge with miniSD (white sticker):**  
You will require:- 
- mini SD or micro SD Card with adapter no more than 2GB formatted to FAT16
- You can change back to larger SD Card after flashing.
- kernel ezfla_up.bin must be placed on root of the SD Card.

**For EZ Flash IV new cartridge (black sticker) & EZ Flash Reform**  
You will require:-
- The SD Card must be formatted to FAT32
- kernel ezfla_up.bin must be placed on root of the SD Card.

---

## 2. Flash Kernel

> [!WARNING]
> Ensure your GBA battery is not in the red to avoid bricking your cartridge during upgrade.  
> DO NOT TURN OFF your GBA while flashing/updating is in progress.

Flashing steps:-

- Insert your SD Card into the EZ Flash IV / Reform cartidge and insert into the GBA.
- Turn on your GBA and HOLD `R` key, the card will load into upgrade firmware mode.
- Let it finish naturally and the kernel will boot automatically after upgrade finished.
- You can delete the `ezfla_up.bin` later, but keeping it as backup is always handy.

--- 

[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Testing_Guide-blue)](07-Testing-Guide.md)
