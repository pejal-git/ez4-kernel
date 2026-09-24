# EZ Flash IV & EZ Flash Reform
![Static Badge](https://img.shields.io/badge/status-in_progress-white?style=flat&color=%233498eb)
![GitHub commit activity](https://img.shields.io/github/commit-activity/w/pejal-git/ez4-kernel?style=flat&color=%233498eb)
![Visitors](https://api.visitorbadge.io/api/visitors?path=https%3A%2F%2Fgithub.com%2Fpejal-git%2Fez4-kernel&label=visitors&countColor=%233498eb&style=flat&labelStyle=none)

---

## Introduction

[EZ Flash IV](https://www.ezflash.cn/product/ez-flash-iv/) and [EZ Flash Reform](https://www.ezflash.cn/product/reform/) are a part of many flash cartridges (flash carts) produced by [EZ-FLASH](https://www.ezflash.cn/).  

It is used to play digital game backups (ROMs), homebrew software, and emulators on original retro handheld consoles - Nintendo Game Boy Advance (GBA) and Nintendo DS / DS Lite (NDS).   

Both of these flash carts have been discontinued and no longer produced, but may still be obtained as second-hand or used products from online marketplaces. They have since been succeeded by the [EZ Flash Omega](https://www.ezflash.cn/product/omega/).  

Both the EZ Flash IV and EZ Flash Reform share the same **EZ4 kernel**. the latest official kernel released is [EZ4 Kernel 2.05](https://www.ezflash.cn/zip/ez4_20180104.zip).

---

## Table of Contents (Summary)
[Hardware Overview](docs/01-Hardware-Overview.md#hardware-overview)
- [EZ Flash IV](docs/01-Hardware-Overview.md#ez-flash-iv)
- [EZ Flash Reform](docs/01-Hardware-Overview.md#ez-flash-reform)
- [Comparison](docs/01-Hardware-Overview.md#comparison)  

[EZ4 Quick Tutorial](docs/02-EZ4-Quick-Tutorial.md#ez4-quick-tutorial)
- [Updating Firmware](docs/02-EZ4-Quick-Tutorial.md#updating-firmware)
- [Settings](docs/02-EZ4-Quick-Tutorial.md#settings)
- [Launch a Game](docs/02-EZ4-Quick-Tutorial.md#launch-a-game)
- [Save Backup](docs/02-EZ4-Quick-Tutorial.md#save-backup)
- [Advance Features](docs/02-EZ4-Quick-Tutorial.md#advance-features)
- [Default Hotkeys](docs/02-EZ4-Quick-Tutorial.md#default-hotkeys)

[EZ4 Kernel Modding Guides](docs/03-EZ4-Kernel-Modding-Guide/01-EZ4-Kernel-Modding-Guide.md)
- [Tools](docs/03-EZ4-Kernel-Modding-Guide/02-Tools.md)
- [Skin Customization Guide](docs/03-EZ4-Kernel-Modding-Guide/03-Skin-Customization-Guide.md)
- [Help Text Editing Guide](docs/03-EZ4-Kernel-Modding-Guide/04-Help-Text-Editing-Guide.md)
- Text Patching Guide
- Compiling Guide
- Testing Guide
- Update Firmware  

Known Limitations 

[Resources](#resources)  

[Licensing](#licensing)

---

## Table of Contents (Extended)
[Hardware Overview](docs/01-Hardware-Overview.md#hardware-overview)
- [EZ Flash IV](docs/01-Hardware-Overview.md#ez-flash-iv)
- [EZ Flash Reform](docs/01-Hardware-Overview.md#ez-flash-reform)
- [Comparison](docs/01-Hardware-Overview.md#comparison)  

[EZ4 Quick Tutorial](docs/02-EZ4-Quick-Tutorial.md#ez4-quick-tutorial)
- [Updating Firmware](docs/02-EZ4-Quick-Tutorial.md#updating-firmware)
- [Settings](docs/02-EZ4-Quick-Tutorial.md#settings)
- [Launch a Game](docs/02-EZ4-Quick-Tutorial.md#launch-a-game)
  - [PSRAM Mode](docs/02-EZ4-Quick-Tutorial.md#1-psram-mode)
  - [NORFLASH Mode](docs/02-EZ4-Quick-Tutorial.md#2-nor-flash-mode)
- [Save Backup](docs/02-EZ4-Quick-Tutorial.md#save-backup)
- [Advance Features](docs/02-EZ4-Quick-Tutorial.md#advance-features)
  - [Auto Patch Engine (APE)](docs/02-EZ4-Quick-Tutorial.md#auto-patch-engine-ape)
  - [Global Soft Reset and Sleep (GSS)](docs/02-EZ4-Quick-Tutorial.md#global-soft-reset-and-sleep-gss)
  - [Hard Reset](docs/02-EZ4-Quick-Tutorial.md#hard-reset)
- [Default Hotkeys](docs/02-EZ4-Quick-Tutorial.md#default-hotkeys)
  - [File Browser](docs/02-EZ4-Quick-Tutorial.md#file-browser)
  - [NOR Flash Game List](docs/02-EZ4-Quick-Tutorial.md#nor-flash-game-list)
  - [In-Game](docs/02-EZ4-Quick-Tutorial.md#in-game)
  - [During Kernel Boot](docs/02-EZ4-Quick-Tutorial.md#during-kernel-boot)
  
[EZ4 Kernel Modding Guides](docs/03-EZ4-Kernel-Modding-Guide/01-EZ4-Kernel-Modding-Guide.md)
- [Tools](docs/03-EZ4-Kernel-Modding-Guide/02-Tools.md)
  - [Windows Tools](docs/03-EZ4-Kernel-Modding-Guide/02-Tools.md#1-windows-tools)
  - [Linux Tools](docs/03-EZ4-Kernel-Modding-Guide/02-Tools.md#2-linux-tools)
- [Skin Customization Guide](docs/03-EZ4-Kernel-Modding-Guide/03-Skin-Customization-Guide.md)
  - [Prerequisites](docs/03-EZ4-Kernel-Modding-Guide/03-Skin-Customization-Guide.md#1-prerequisites)
  - [Skin Components](docs/03-EZ4-Kernel-Modding-Guide/03-Skin-Customization-Guide.md#2-skin-components)
  - [Skin Editing](docs/03-EZ4-Kernel-Modding-Guide/03-Skin-Customization-Guide.md#3-skin-editing)
  - [Converting Images](docs/03-EZ4-Kernel-Modding-Guide/03-Skin-Customization-Guide.md#4-converting-images)
- [Help Text Editing Guide](docs/03-EZ4-Kernel-Modding-Guide/04-Help-Text-Editing-Guide.md)
  - [Width Limit](docs/03-EZ4-Kernel-Modding-Guide/04-Help-Text-Editing-Guide.md#width-limit)
  - [Blank Lines](docs/03-EZ4-Kernel-Modding-Guide/04-Help-Text-Editing-Guide.md#blank-lines)
  - [Dividers](docs/03-EZ4-Kernel-Modding-Guide/04-Help-Text-Editing-Guide.md#dividers)
  - [Text Border](docs/03-EZ4-Kernel-Modding-Guide/04-Help-Text-Editing-Guide.md#text-border)
- Text Patching Guide
  - Prerequisites
  - Patch Kernel
- Compiling Guide
  - Prerequisites
  - Build Results
- Testing Guide
  - Prerequisites
  - Load kernel
  - Key Controls
- Update Firmware  

Known Limitations  

[Resources](#resources)  

[Licensing](#licensing)

---

## Resources

- Official EZFlash Website: https://www.ezflash.cn/  
- EZ Flash Forum (GBAtemp.net): https://gbatemp.net/forums/nintendo-gba.339/  
- IrfanView Graphic Viewer: https://www.irfanview.com/  
- EZ-Flash_Guide: https://github.com/ChimeraGaming/EZ-Flash_Guide

## Licensing
The documentation and original content in this repository are licensed under the [MIT License](LICENSE).

This repository also bundles third-party tools, which are subject to their own respective licenses:
* **EZ4 Kernel 2.05** (located in /src/zip/ez4_20180104.zip): Proprietary Freeware by [EZ-Flash](https://www.ezflash.cn/)
* **Lunar IPS** (located in /src/EZ4-Mod-Pack/Tools/LunarIPS/Lunar IPS.exe): Freeware License by [FuSoYa](https://fusoya.eludevisibility.org/)
* **EZPDA RomBuildPro** (located in src/EZ4-Mod-Pack/Tools/RomBuildPro/RomBuildPro.exe): Proprietary Freeware by [www.HappyApple.net](https://web.archive.org/web/20041203114416/http://www.happyapple.net/)
* **batgba** (located in src/EZ4-Mod-Pack/Tools/batgba/batgba.exe): Freeware License by [batgba Team](https://batgba.zophar.net/)

* **Placeholder_Name** (located in `/path/path`): License under the [LICENSE_NAME] (/path/path/LICENSE) by [Original_Author]
