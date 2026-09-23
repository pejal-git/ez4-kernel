BATGBA DEBUGGING OPCODES:
¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯


BATGBA is able to catch some special swi calls in order to make easier debugging of your source code.
These swi calls (num >= 0x50) have no effect on other emulators or hardware, which will simply skip them.

You can use batgba's swis in any gba application, the only thing you need to do is to insert the appropriate 
batgba_dbg.h file in your project. Then you can define or not BATGBA_DEBUG_ENABLE if you want the opcodes to 
be compiled or not.


There are currently only a few opcodes supported, but we are working on it :)


-BATGBA_BREAK(num):
¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
It's usefull if you want to place breakpoints in your code. BATGBA has no source-level debugging for the moment, 
so it's can be difficult to locate your C code in the arm disassembly listing. BATGBA will break on this swi.

-BATGBA_PRINT:
¯¯¯¯¯¯¯¯¯¯¯¯¯
If you want to print for example the value of a variable, you need to :
	-include fonts data in your rom,  
	-put fonts tiles in vram,
	-allocate memory for temporary buffers (sprintf etc..)
	-...
which is really boring, and moreover cause overhead to be added to your rom.
BATGBA emulates a memory space which is not present on the real gba, and others emulators.
This area is mapped at 0x10000000 and contains 1024 bytes. 
This memory is used by the BATGBA_PRINT macro, which will print in the console the string (zero-terminated) 
stored at this address.