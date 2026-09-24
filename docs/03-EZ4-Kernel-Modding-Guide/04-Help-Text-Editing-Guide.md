[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Skin_Customization_Guide-blue)](03-Skin-Customization-Guide.md)
[![Static Badge](https://img.shields.io/badge/Next-Text_Patching_Guide-blue)](05-Text-Patching-Guide.md)

---

# Help Text Editing Guide

In EZ4 Kernel, help menu can be accessed from the fourth icon on desktop.  
This help menu will display any text you put in `~/EZ4-Mod-Pack/Workspace/Res/.shell/help.txt`.  

You can open this file in any text editor and write guides, information, or anything you'd like to display in the kernel's help screen.

## Width Limit

The help screen has a display width of 38 characters. Line rendering depends on the length of each line in help.txt:

| Line Length	    | Behavior                                            |
|-----------------|-----------------------------------------------------|
| ≤ 37 characters	| Renders as-is                                       |
| = 38 characters	| Renders as-is, blank line automatically added after |
| > 38 characters	| Hard-wrapped at the 38th character                  |

> [!WARNING]
> **Hard wrap cuts at the character boundary, not at word boundaries.**  
> A word may be split mid-character across two lines.

**Example - Help.txt**
```
Short line.
This is an example text. This is an ex
This is an example text. This is an example text.
```
**Rendered output:**
```
Short line.
This is an example text. This is an ex

This is an example text. This is an ex
ample text.
```
> [!WARNING]
> **Watch out for accidental blank lines.** If your text naturally lands on exactly 38 characters, an unintended blank line will be inserted mid-paragraph. Adjust the line by one character either way to avoid this.

---

## Blank Lines
A blank line in help.txt renders as a blank line in the output as expected.

**Example - Help.txt:**
```
Line one.

Line two.
```
**Rendered Output:**
```
Line one.

Line two.
```

---

## Dividers
A common pattern for visually separating sections is to fill a line with exactly **38 repeated characters**. Since a 38-character line automatically gets a blank line added after it, this produces a clean divider effect.

**Example - Help.txt:**
```
Section One
======================================
Content of section one.

Section Two
--------------------------------------
Content of section two.
```
**Rendered Output:**
```
Section One
======================================

Content of section one.

Section Two
--------------------------------------

Content of section two.
```
> [!NOTE]
> The divider effect is not special rendering of specific characters,  
> it is purely a consequence of the 38-character auto blank line rule.  
> Any character repeated exactly 38 times will produce the same result.

---

## Text Border
Below are ready-to-use border styles for the help screen.   
All border lines are kept at 37 characters or fewer to avoid triggering the auto blank line.

> [!NOTE]
> You can mix and match border characters to your preference.  
> The examples below are starting points, not strict templates.

**Decorative corner**:
```
 .-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.
! Cartridge      : EZ-FLASH Reform !
: Kernel         : EZ4 Kernel 2.05 :
. Skin           : EZ Flat IV      .
 `-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-'
```
 **Box**:
```
+-----------------------------------+
. Content here                      .
. Content here                      .
+-----------------------------------+
```
**Double-line Box:**
```
+===================================+
| Content here                      |
| Content here                      |
+===================================+
```
**Top & Bottom Dividers Only:**
```
-------------------------------------
Content here
Content here
-------------------------------------
```
**Dotted:**
```
.....................................
: Content here                      :
: Content here                      :
.....................................
```
**Star:**
```
*-----------------------------------*
* Content here                      *
* Content here                      *
*-----------------------------------*
```

---

[![Static Badge](https://img.shields.io/badge/Home-README.md-blue)](../../README.md)
[![Static Badge](https://img.shields.io/badge/Previous-Skin_Customization_Guide-blue)](03-Skin-Customization-Guide.md)
[![Static Badge](https://img.shields.io/badge/Next-Text_Patching_Guide-blue)](05-Text-Patching-Guide.md)

