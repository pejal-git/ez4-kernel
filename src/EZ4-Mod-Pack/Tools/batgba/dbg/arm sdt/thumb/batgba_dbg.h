#ifndef BATGBA_DEBUG_INCLUDED
#define BATGBA_DEBUG_INCLUDED

//this file must be compiled with arm sdt and thumb mode



#define BATGBA_MEM_DBG	    ((unsigned char*) 0x10000000)



#ifdef BATGBA_DEBUG_ENABLE

#define	BATGBA_PRINT				__asm (swi 0x50);
#define BATGBA_BREAK(Num)			__asm (swi "#Num" << 16 + 0x90);
#define BATGBA_TIMING				__asm (swi 0x55);
#define BATGBA_PROFILE_START(Num)		__asm (swi "#Num" << 17 + 0x58); 
#define BATGBA_PROFILE_STOP(Num)		__asm (swi "#Num" << 17 + 0x59);		

#else

#define	BATGBA_PRINT				
#define BATGBA_BREAK(Num)			
#define BATGBA_TIMING				
#define BATGBA_PROFILE_START(Num)		
#define BATGBA_PROFILE_STOP(Num)		

#endif	



#endif	//BATGBA_DEBUG_INCLUDED
