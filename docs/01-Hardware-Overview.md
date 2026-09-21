# Hardware Overview

## EZ Flash IV

The EZ Flash IV is a flash cartridge compatible with the Game Boy Advance, Game Boy Advance SP, Game Boy Micro, Nintendo DS, and DS Lite.  

It uses a MicroSD card (SDHC supported on later hardware revisions) for storage and contains onboard NOR flash and PSRAM for running games.  

There is two version of EZ Flash IV, the older White version (2006) and newer Black version (2014).  

The older EZ Flash IV (White version) require MiniSD / MicroSD with adapter (max 2GB) formatted to FAT16 for upgrading EZ4 kernel.

**Key specifications:**
- Storage: MiniSD (White version), MicroSD / MicroSDHC card (Black version)
- NOR Flash memory: 256 Mbit (32MB) - used for persistent ROM storage
- PSRAM cache: 128 Mbit (16MB) - used for temporary ROM loading
- Compatible with: All GBA / NDS console
- Kernel: EZ4 kernel compatible (Old White version) / EZ4 kernel (Newer Black version)
- ROM size limit: Up to 128 Mbit (16MB); larger ROMs must be written to NOR
- Battery: Soldered (CR2025)

## EZ Flash Reform

The EZ Flash Reform is the successor to the EZ Flash IV, sharing the same EZ4 kernel while refining the hardware design (smaller form factor).  
It retains full compatibility with the same cartridge slot and software ecosystem.

**Key specifications:**
- Storage MicroSD / MicroSDHC card (up to 32GB)
- Compatible with: All GBA / NDS console
- Kernel: EZ4 kernel (latest official: 2.05)
- Same NOR/PSRAM architecture as the EZ Flash IV
- Reduced PCB size
- Two spare case: Compatible with GBA / NDS
- Battery: Replaceable (CR1220)

## Comparison

| Feature           | EZ Flash IV         | EZ Flash Reform                            |
|-------------------|---------------------|--------------------------------------------|
| Kernel            | EZ4 compatible      | EZ4                                        |
| Storage           | MicroSD / MicroSDHC | *(same)*                                   |
| Form Factor       | GBA cartridge       | GBA / NDS Slot-2 cartridge (revised shell) |
| Battery           | Soldered (CR2025)   | Replaceable (CR1220)                       |
| Successor         | EZ Flash Reform     | EZ Flash Omega                             |
| Production status | Discontinued        | *(same)*                                   |

**EZ Flash IV** vs **EZ Flash Reform** PCB:
<img width="680" alt="reborn05-740x425" src="https://github.com/user-attachments/assets/e6ab9c35-1a7e-4ad5-a91c-e4e068625eb4" />

**EZ Flash Reform** GBA / NDS Case:
<img width="680" height="490" alt="reform04-740x490" src="https://github.com/user-attachments/assets/2ac3034e-6ebf-46a6-8f89-781a6692d937" />

## Reference
1. EZ-FLASH. (n.d.-a). EZ-FLASH IV (discontinued). Retrieved September 22, 2026, from https://www.ezflash.cn/product/ez-flash-iv/
2. EZ-FLASH. (n.d.-a). EZ-FLASH Reform (discontinued). Retrieved September 22, 2026, from https://www.ezflash.cn/product/reform/
3. EZ-FLASH. (n.d.). [EZ Flash IV vs EZ Flash Reform PCB]. Retrieved 22 Sept 2026 from https://www.ezflash.cn/wp-content/uploads/2017/10/reborn05-740x425.jpg
4. EZ-FLASH. (n.d.). [EZ Flash Reform GBA / NDS Case]. Retrieved 22 Sept 2026 from https://www.ezflash.cn/wp-content/uploads/2017/10/reform04-740x490.jpg








