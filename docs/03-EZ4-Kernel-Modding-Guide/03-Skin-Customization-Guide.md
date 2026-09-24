[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Tools-blue)](02-Tools.md)
[![Static Badge](https://img.shields.io/badge/Next-Help_Text_Editing_Guide-blue)](04-Help-Text-Editing-Guide.md)

---

## Skin Customization Guide

> [!NOTE]
> Section [3. Skin Editing](#3-skin-editing) heavily lean towards using [GIMP](https://www.gimp.org/) (for linux) as guide.  
> You will need to refer to other tutorial for editing pixel image in Windows system.

---

#### 1. Prerequisites
1. Customize Pack / Skin Builder Pack
2. [IrfanView v3.80](https://www.irfanview.com/)
3. [Wine](https://www.winehq.org/) (if you're on Linux)
4. Image Editing program ([GIMP](https://www.gimp.org/) or any pixel art capable editor)

You may use Official [Customize Pack](https://www.ezflash.cn/zip/EZPDA_1.7.5.zip),  
but in this guide, we will be using a modified / remodeled of the original customize pack for ease-of-use.

1. Download [EZ4-Mod-Pack.zip](../../src/zip/EZ4-Mod-Pack.zip) and extract it to your Desktop.

If you're on Linux:
```
# Extract the mod pack
unzip ~/Downloads/EZ4-Mod-Pack.zip
# Copy to desktop
cp -r ~/EZ4-Mod-Pack ~/Desktop
```

---

#### 2. Skin Components
Before editing the skin, we want to identity which component of the skin we want to modify.  
The skin components are located in `EZ4-Mod-Pack/Workspace/Res/.shell/bmp/`  

> [!TIP]  
> You can view the image using any image viewer tools.  
> The image might be small, zoom to see in detail.  

| Skin Component | Description | Relation |
|-----------|-------------|----------|
| arrowL.bmp | Left arrow | Desktop |
| arrowR.bmp | Right arrow | Desktop |
| deskicon.bmp | Desktop icons | Desktop |
| desktop.bmp | Desktop background | Desktop |
| ezoption.bmp | Option window background | Desktop |
| ezpdalogo.bmp | Kernel Boot image | Boot |
| filemng.bmp | File Manager background | File Manager |
| filemnghead.bmp | File Manager title | File Manager |
| icons.bmp | File Manager icons | File Manager |
| itemdisc.bmp | Description background | Description |
| x.bmp | X Button image | Button |
| ok.bmp | OK button image | Button |
| TextScrollBack.BMP | Scroll slider background | Help |
| TextScrollButtonSign.BMP | Scroll slider image | Help |
| TextScrollDown.BMP | Scroll down image | Help |
| TextScrollUp.BMP | Scroll up image | Help |
| txtbg.bmp | Help text background | Help |
| TXTLoadSaver.bmp | Bookmark title | Bookmark |
| txtSaveSaver.bmp | Bookmark title | Bookmark |

---

#### 3. Skin Editing
Create a copy of the `bmp` folder as backup before editing.  
Then create another new folder `new_bmp` to save edited skin.  

For Linux user:
```bash
# Copy bmp folder as backup
cp -r ~/EZ4-Mod-Pack/Workspace/Res/.shell/bmp ~/EZ4-Mod-Pack/Workspace/bmp
# Create new bmp folder for edited skin
mkdir -p ~/EZ4-Mod-Pack/Workspace/new_bmp
```

Now head to `EZ4-Mod-Pack/Workspace/Res/.shell/bmp/` folder and open the skin component you wish to edit.  
In Windows, you may use any image editing program, preferably something that supports:-  
- pixel editing
- layering
- anti-alias
You can also use online image editor.

For our guide, we'll be using Linux's [GNU Image Manipulation Program (GIMP)](https://www.gimp.org/).  

**Load a skin component:**
Open GIMP and click File > Open... then load the skin part you wish to modify.  

> [!TIP]
> You can zoom the image if its small.

**Adding layer:**
- Click Layer > New Layer... then enter layer name, click OK.  
- A new layer will be created (visible on Layer window located on bottom right).  
- You can right click to delete a layer.  
- You can also click Layer > New from visible if you use Rectangle Select Tool.

**The tools you will use most in GIMP:**
1. Rectangle Select Tool (select an area)
2. Bucket Fill Tool (Fill an area)
3. Fuzzy Select Tool (Select similar color region)
4. Move Tool (Move selection)
5. Text Tool (Create text)
6. Pencil Tool
7. Color Picker Tool
8. Selecting the background / foreground color.

**To edit skin part with small pixel:**
- Zoom in until you can see each pixel.
- Click View > Show Grid.
- Click Image > Configure Grid, then change Spacing to 1x1 pixel.

> [!TIP]
> You can also use method above to draw pixel icons.  
> If you don't have idea, refer on internet for pixel icons.  

**If you want to make the edges feel less jagged or boxy:**
- Click Filters > Enhance > Antialias
- You can reapply as much, but I recommend max 3 times.
- Apply only once is enough most of the time.

> [!TIP]
> When you export with a layer hidden, the final result will also show it hidden.  
> On the Layer View window (bottom right), you can click the Eye icon to show or hide a layer.  

**Then to save the changes you made:**
- Click File > Export As... then choose your save folder `~/EZ4-Mod-Pack/Workspace/new_bmp`
- Then enter filename.bmp, click export.
- Window open, just OK and export.

These cover the core steps needed to edit a skin component.  
You may also refer to YouTube or Forums for more advance editing.  

---

#### 4. Converting Images
The bitmap file .bmp or .BMP we exported is too advance for GBA kernel, so we have to use IrfanView to convert the image back to .bmp or .BMP so GBA kernel builder can read and use.

**Open your exported skin part:**
- Click File > Open then open your `~/EZ4-Mod-Pack/Workspace/new_bmp` folder.
- Pick and load your exported skin part.
- Click File > Save as then choose your original skin part, click Save.
- When a prompt asking replace confirmation, pick Yes / Confirm.

**Replace original skin with your new skin:**
- Open File Manager and open `~/EZ4-Mod-Pack/Workspace/new_bmp` folder.
- Copy the new skin and paste into `~/EZ4-Mod-Pack/Workspace/Res/.shell/bmp`.
- When asked to replace, select yes / confirm.

Repeat the [Step 3](#3-skin-editing) and [Step 4](#4-converting-images) until you satisfied.

---

[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Tools-blue)](02-Tools.md)
[![Static Badge](https://img.shields.io/badge/Next-Help_Text_Editing_Guide-blue)](04-Help-Text-Editing-Guide.md)
