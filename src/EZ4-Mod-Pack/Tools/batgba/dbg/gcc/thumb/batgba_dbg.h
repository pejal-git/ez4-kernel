#ifndef BATGBA_DEBUG_INCLUDED
#define BATGBA_DEBUG_INCLUDED

//this file must be compiled with gcc and thumb mode



#define BATGBA_MEM_DBG	    ((unsigned char*) 0x10000000)



#ifdef BATGBA_DEBUG_ENABLE

#define	BATGBA_PRINT				asm ("swi 0x50");
#define BATGBA_BREAK(Num)			asm ("swi "#Num" << 16 + 0x90");
#define BATGBA_TIMING				asm ("swi 0x55");
#define BATGBA_PROFILE_START(Num)		asm ("swi "#Num" << 17 + 0x58"); 
#define BATGBA_PROFILE_STOP(Num)		asm ("swi "#Num" << 17 + 0x59");		

#else

#define	BATGBA_PRINT				
#define BATGBA_BREAK(Num)			
#define BATGBA_TIMING				
#define BATGBA_PROFILE_START(Num)		
#define BATGBA_PROFILE_STOP(Num)		

#endif	




#endif	//BATGBA_DEBUG_INCLUDED
