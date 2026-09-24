[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Hardware_Overview-blue)](01-Hardware-Overview.md)
[![Static Badge](https://img.shields.io/badge/Next-EZ4_Kernel_Modding_Guide-blue)](03-EZ4-Kernel-Modding-Guide/01-EZ4-Kernel-Modding-Guide.md)

---

# EZ4 Quick Tutorial

This document is a modified reproduction of the original EZ-Flash IV Quick Turorial ([ez4quickturorial.html](https://www.ezflash.cn/ez4quicktutorial.html))  
re-written in markdown format with better grammar and restructured sentences.
> [!NOTE]
> Rewrite purpose is for easier read and does not meant to replace the original tutorial.

The original file can be viewed from the original source: [ez4quicktutorial.html](https://www.ezflash.cn/ez4quicktutorial.html)

A copy of the original file can be viewed from Web Archive's [ez4quickturorial.html](https://web.archive.org/web/20260418191846/https://www.ezflash.cn/ez4quicktutorial.html) (dated 18 Apr 2026) or obtained from this repository: [/src/ez4quickturorial.html](../src/ez4quickturorial.html).

> [!NOTE]
> The EZ4 Client software is no longer required as of EZ4 Kernel 2.00, ROMs can be copied to the SD card directly.

---

## Updating firmware
1. Prepare an SD Card that has been formatted to FAT32 format.  
  > [!IMPORTANT]
  > - Old EZ Flash IV white sticker version require miniSD or microSD with adapter.  
  > - Maximum supported card size is 2GB.  
  > - Must be formatted to FAT16.  
2. Download the latest firmware (EZ4 kernel 2.05) from either :-
    - [EZ-FLASH Official Website](https://www.ezflash.cn/zip/ez4_20180104.zip).  
    or
    - [/src/zip/ez4_20180104.zip](/src/zip/ez4_20180104.zip) (backup copy of original).
3. Then extract it to the **root** of your SD card.
4. Power on your GBA/NDS while holding the **R** button, the cartridge will automatically enter firmware upgrade procedure.
5. Once upgrade is finished, the new kernel will boot. You can verify the version number in the **top-right corner** of the main menu.
6. After successful upgrade, the `ezfla_up.bin` file can be safely deleted from your SD Card.

> [!TIP]
> Keeping ezfla_up.bin on the SD Card as a backup is recommended.

---

## Settings
From the main menu, select the third icon to open Settings.
- First option: Language - choose between Chinese and English.
- Second option: Saver Manner - Deprecated; no longer in use.

---

## Launch a Game

From the main menu, select the **first icon** to open the file browser, then navigate into the EZ-DISK folder.  
All ROMs stored on your SD card will be listed here.  

There are two mode for launching games: 

#### 1. PSRAM Mode

Best for games **128Mbit (16MB) or smaller**. The game loads quickly, but must reload from the SD card every time the cartridge is powered on.
- In the file browser, press **A** to launch a game in PSRAM mode.

#### 2. NOR FLASH Mode

Works with game of **any size**, up to a combined total of **256Mbit (32MB)** across all stored titles. Writing a game to NOR Flash takes longer than PSRAM loading, but once written, the game launches instantly on every subsequent boot - no reload required.  

You can store multiple games in NOR Flash simultaneously, as long as their combined size does not exceed 256Mbit (32MB). For example, four 8MB games, two 16MB games, or one 16MB game alongside two 8MB games.


> [!CAUTION]
> **Do not use trimmed ROMs in NOR Flash Mode.**  
> Trimmed ROMs may cause write errors or instability.

- In the file browser, press **SELECT** to open the NOR Flash write confirmation prompt.  
Press **A** to confirm, press **B** to cancel.
- Games written to NOR Flash will appear in the main menu alongside the EZ-DISK folder.  
Press **A** to launch them.

---

## Save Backup

The EZ Flash IV use onboard SRAM chip to store in-game save data. Each time the kernel boots, it automatically backs up the SRAM save to a folder named **SAVER** on your SD card.

- To skip the save backup on boot, hold **L** while the kernel is loading.
- When the cartridge battery dies, SRAM chip no longer holds save data.  
This will lead to data loss. Battery replacement is required.

When you don't plan to play in a long duration, power off your GBA / NDS then power it back on to let the SRAM chip save backup to your SD card.  It is safe to power off your GBA / NDS after main menu appears.

> [!TIP]
> It is strongly recommended to regularly back up the **SAVER** folder to your computer to prevent data loss.

---

## Advance Features

### Auto Patch Engine (APE)
Introduced in **EZ4 Kernel 2.00**, the Auto Patch Engine replaces the old EZ4 Client workflow. You can now copy clean, unpatched ROMs directly to your SD card without manual patching required.

On first launch, APE automatically generates a patch file for the ROM and stores it in a folder named **PATCH** on your SD card. On subsequent launches, this patch file is reused, significantly reducing load times.

**Load Time Benchmark (approximate):**
| ROM Size | 1st Launch | 2nd Launch | Old Kernel (1.78) |
|----------|------------|------------|-------------------|
| 32 Mbit  | 27s        | 9s         | 16s               |
| 64 Mbit  | 51s        | 18s        | 25s               |
| 128 Mbit | 100s       | 33s        | 52s               |

### Global Soft Reset and sleep (GSS)
Introduced in **EZ4 Kernel 2.02**, GSS allows you to soft reset back to the kernel or put the console to sleep without powering off.

**Default hotkeys:**
| Action               | Button Combination            |
|----------------------|-------------------------------|
| Soft reset to kernel | **L** + **Up** + **B**        |
| Sleep                | **L** + **Right** + **Start** |
| Wake up              | **Start** + **Select**        |

Some games are incompatible with the GSS patch. To launch a game without applying GSS, press **L** + **B** in the file browser instead of **A**.  

To customize the hotkey combinations, place the included **KEYSET.CFG** file in the **root** of your SD card and edit it accordingly.

### Hard Reset
Some games with anti-piracy protection require a hard reset before launching correctly. Press **L** + **A** in the file browser to launch a game with a hard reset applied.

You can also configure global hard reset on launch behavior by editing the **KEYSET.CFG** file.

---

## Default Hotkeys

#### File Browser
| Button     | Action                                      |
|------------|---------------------------------------------|
| A          | Launch game (PSRAM Mode) / Confirm          |
| B          | Go up one folder / Cancel                   |
| Select     | Write game to NOR Flash                     |
| L + Select | Write game to NOR Flash (without GSS patch) |
| L + A      | Launch game with hard reset                 |
| L + B      | Launch game without GSS patch               |

#### NOR Flash Game List
| Button | Action                                     |
|--------|--------------------------------------------|
| A      | Launch game                                |
| Start  | Format NOR Flash (erases all stored games) |
| Select | Delete the most recently written game      |

#### In-Game
| Button         | Action               |
|----------------|----------------------|
| L + Up + B     | Soft reset to kernel |
| L + R + Start  | Sleep                |
| Start + Select | Wake up from sleep   |

#### During Kernel Boot
| Button | Action                      |
|--------|-----------------------------|
| L      | Skip save backup            |
| R      | Enter firmware upgrade mode |

---

## Reference
EZ-Flash. (n.d.). EZ4 Quick Tutorial. https://www.ezflash.cn/ez4quicktutorial.html

---

[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Hardware_Overview-blue)](01-Hardware-Overview.md)
[![Static Badge](https://img.shields.io/badge/Next-EZ4_Kernel_Modding_Guide-blue)](03-EZ4-Kernel-Modding-Guide/01-EZ4-Kernel-Modding-Guide.md)
