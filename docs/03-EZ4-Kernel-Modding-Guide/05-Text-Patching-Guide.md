[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Help_Text_Editing_Guide-blue)](04-Help-Text-Editing-Guide.md)
[![Static Badge](https://img.shields.io/badge/Next-Build_Kernel_Guide-blue)](06-Build-Kernel-Guide.md)

---

# Text Patching Guide
In this guide, we will patch the built EZ4 Kernel file (ezfla_up.bin) with modifications / improvements.

For EZ4 Kernel, here are the 3 most recommended patches:
| Patch name | Description                  |
|------------|------------------------------|
| 8Kb        | Make 8,192 bytes show as 8Kb |
| font       | Change default font to clear looks font |
| text       | Translations improvement      |

## Prerequisites
- [Lunar IPS](https://fusoya.eludevisibility.org/lips/)
- IPS patch files

> [!TIP]
> Both of the prerequisites are included in ([EZ4-Mod-Pack.zip](../../src/zip/EZ4-Mod-Pack.zip))

## Patch the kernel

#### 1. Run `Lunar IPS.exe`
If you're on Linux, run `Lunar IPS.exe` via wine:
```
wine ~/EZ4-Mod-Pack/Tools/LunarIPS/'Lunar IPS.exe'
```

#### 2. Click `Apply IPS Patch`
A window will appear with the title "Select IPS File to Use".  
Open folder Tools > LunarIPS > patches (`EZ4-Mod-Pack/Tools/LunarIPS/patches/`).  
You'll see 8Kb.ips, font.ips, text.ips.  
Select one (eg: 8Kb.ips), then click Open.  

A new window will appear after selecting with the title "Select File to Patch".  
Click the "green arrow" to return to previous folder.  
Open Workspace folder (`EZ4-Mod-Pack/Workspace`).  
From the window, `Files of type:` select `Most Common ROM Files` by default.  
Change it to `All Files(*.*)`, then select `ezfla_up.bin`.  
Click Open.  

Another window will appear showing "The file was successfully patched!".  
Click OK.  

Repeat the steps for other patches (eg: font.ips and text.ips).

---

[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Help_Text_Editing_Guide-blue)](04-Help-Text-Editing-Guide.md)
[![Static Badge](https://img.shields.io/badge/Next-Build_Kernel_Guide-blue)](06-Build-Kernel-Guide.md)
