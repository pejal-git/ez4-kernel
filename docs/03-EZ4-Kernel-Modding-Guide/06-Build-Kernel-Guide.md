[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Text_Patching_Guide-blue)](05-Text-Patching-Guide.md)
[![Static Badge](https://img.shields.io/badge/Next-Testing_Guide-blue)](07-Testing-Guide.md)

---

# Build Kernel Guide

In this guide, we are going to compile and build the modifications done, so that we can flash the kernel into your EZ Flash IV / EZ Flash Reform cartridge.

## Prerequisites
EZ-Flash uses EZPDA rom builder to build EZ4 kernel.

| No | File                  | Description       |
|----|-----------------------|-------------------|
| 1  | RomBuildPro.exe       | EZPDA Rom Builder |
| 2  | RomBuildPro.rom       | EZ4 Kernel        |
| 3  | Build.bat, Header.bat | build scripts     |

These files are already included in `EZ4-Mod-Pack/Tools/` ([EZ4-Mod-Pack.zip](../../src/zip/EZ4-Mod-Pack.zip)).

For ease of use, you can also find them in `EZ4-Mod-Pack/Workspace/`.

> [!TIP]
> RomBuildPro.rom is the latest EZ4 kernel 2.05  
> If you wish to use older kenel, replace RomBuildPro.rom with the kernel you want to build.  
> You can find it located in `EZ4-Mod-Pack/Workspace/Res/`.

---

## 1. Running the compiler
We will be using the predefined build script `Build.bat` instead of running `RomBuildPro.exe` directly.

For Windows user, you can just run `Build.bat`.

For Linux user, run in terminal using `wine`:
```
wine ~/EZ4-Mod-Pack/Workspace/Build.bat
```

You will see similar output:
```
---------------------- EZPDA Rom Build Program ----------------------
-           (C)2003-2004, ┤≤╖ó @ Http://www.HappyApple.net          -

Source Directory: FileSystem
destination Rom:  ezfla_up.bin
Starting to Compile EZPDA Rom ...

Generate Base Rom ... OK
 Type   Path And FileName                                      FileSize
----- : ---------------------------------------------------- - --------
----
013c:fixme:ver:GetCurrentPackageId (0052FA88 00000000): stub
[DIR] : \.shell\bmp
      : \.shell\bmp\TXTLoadSaver.bmp                         - 18728
      : \.shell\bmp\TextScrollBack.BMP                       - 24
      : \.shell\bmp\TextScrollButtonSign.BMP                 - 24
      : \.shell\bmp\TextScrollDown.BMP                       - 136
      : \.shell\bmp\TextScrollUp.BMP                         - 136
      : \.shell\bmp\Thumbs.db                                - 54784
      : \.shell\bmp\arrowL.bmp                               - 296
      : \.shell\bmp\arrowR.bmp                               - 296
      : \.shell\bmp\deskicon.bmp                             - 11528
      : \.shell\bmp\desktop.bmp                              - 76808
      : \.shell\bmp\ezoption.bmp                             - 76808
      : \.shell\bmp\ezpdalogo.bmp                            - 76808
      : \.shell\bmp\filemng.bmp                              - 65288
      : \.shell\bmp\filemnghead.bmp                          - 11528
      : \.shell\bmp\icons.bmp                                - 8968
      : \.shell\bmp\itemdisc.bmp                             - 20488
      : \.shell\bmp\ok.bmp                                   - 680
      : \.shell\bmp\txtSaveSaver.bmp                         - 18728
      : \.shell\bmp\txtbg.bmp                                - 76808
      : \.shell\bmp\x.bmp                                    - 296
      : \.shell\help.txt                                     - 1437
----- : ---------------------------------------------------- - --------
----
TotalDir: 1,  totalFile: 21
RomFile Size: 962 KB

Error(s): 0  warning(s): 0
```

> [!IMPORTANT]
> Note the end result `Error(s): 0  warning(s): 0`  
> This indicate if your build result success or fail.

> [!TIP]
> If `Build.bat` close itself and you cannot see the build result,  
> Edit `Build.bat` and add `pause` and the end of the line:  
Build.bat:
```
@echo off
cmd /c head FileSystem  ezfla_up.bin
res\RomBuildPro.exe  FileSystem  ezfla_up.bin
pause
```

---

## 2. Successful Build
If you see `Build.bat` shows result: `Error(s): 0 warning(s): 0`, the build was successful and you will see a new file `ezfla_up.bin` will be created in `~/EZ4-Mod-Pack/Workspace/`.   

If `ezfla_up.bin` already exist, running `Build.bat` script will replace the existing file.

You may now copy the `ezfla_up.bin` to the root of your SD Card to flash your cartridge, but it is **HIGHLY RECOMMENDED** to test the newly built kernel first. 

---

## 3. Failed Build

In the case of failed build, you will **NOT** see result: `Error(s): 0 warning(s): 0`.

Instead, you will build result with **Error(s)** or **warning(s)** similar like:
```
---------------------- EZPDA Rom Build Program ----------------------
-           (C)2003-2004, ┤≤╖ó @ Http://www.HappyApple.net          -

Source Directory: FileSystem
destination Rom:  ezfla_up.bin
Starting to Compile EZPDA Rom ...

Generate Base Rom ... OK
 Type   Path And FileName                                      FileSize
----- : ---------------------------------------------------- - --------
----
013c:fixme:ver:GetCurrentPackageId (0052FA88 00000000): stub
[DIR] : \.shell\bmp
      : \.shell\bmp\TXTLoadSaver.bmp                         - 18728
      : \.shell\bmp\TextScrollBack.BMP                       - 24
      : \.shell\bmp\TextScrollButtonSign.BMP                 - 24
      : \.shell\bmp\TextScrollDown.BMP                       - 136
      : \.shell\bmp\TextScrollUp.BMP                         - 136
      : \.shell\bmp\Thumbs.db                                - 54784
      : \.shell\bmp\arrowL.bmp                               - 296
      : \.shell\bmp\arrowR.bmp                               - 296
      : \.shell\bmp\deskicon.bmp                             - 0 [[[ Error ]]]
      : \.shell\bmp\desktop.bmp                              - 76808
      : \.shell\bmp\ezoption.bmp                             - 76808
      : \.shell\bmp\ezpdalogo.bmp                            - 0 [[[ Error ]]]
      : \.shell\bmp\filemng.bmp                              - 65288
      : \.shell\bmp\filemnghead.bmp                          - 11528
      : \.shell\bmp\icons.bmp                                - 0 [[[ Error ]]]
      : \.shell\bmp\itemdisc.bmp                             - 20488
      : \.shell\bmp\ok.bmp                                   - 680
      : \.shell\bmp\txtSaveSaver.bmp                         - 18728
      : \.shell\bmp\txtbg.bmp                                - 76808
      : \.shell\bmp\x.bmp                                    - 296
      : \.shell\help.txt                                     - 1437
----- : ---------------------------------------------------- - --------
----
TotalDir: 1,  totalFile: 21
RomFile Size: 962 KB

Error(s): 3  warning(s): 0
```

The file list will show which file is causing the error or warnings.

This usually resulting from the compiler does not understand modern image format.

You can fix this by converting the failing image with IrfanView (simply opening and re-saving the image will strip and convert modern image to the compiler compatible format).  

Follow steps in [Converting Image](03-Skin-Customization-Guide.md#4-converting-images) for guidance.

Once done, you can run the compiler again.

> [!CAUTION]
> Failed build may generate a corrupted `ezfla_up.bin`.  
> DO NOT flash this kernel to your cartridge!

--- 

[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Text_Patching_Guide-blue)](05-Text-Patching-Guide.md)
[![Static Badge](https://img.shields.io/badge/Next-Testing_Guide-blue)](07-Testing-Guide.md)
