#ifndef BATGBA_DEBUG_INCLUDED
#define BATGBA_DEBUG_INCLUDED

//this file must be compiled with gcc and arm mode



#define BATGBA_MEM_DBG	    ((unsigned char*) 0x10000000)




#ifdef BATGBA_DEBUG_ENABLE

#define	BATGBA_PRINT				asm ("swi 0x500000");
#define BATGBA_BREAK(Num)			asm ("swi "#Num" << 16 + 0x900000");
#define BATGBA_TIMING				asm ("swi 0x550000");
#define BATGBA_PROFILE_START(Num)		asm ("swi "#Num" << 17 + 0x580000"); 
#define BATGBA_PROFILE_STOP(Num)		asm ("swi "#Num" << 17 + 0x590000");		

#else

#define	BATGBA_PRINT				
#define BATGBA_BREAK(Num)			
#define BATGBA_TIMING				
#define BATGBA_PROFILE_START(Num)		
#define BATGBA_PROFILE_STOP(Num)		

#endif	



#endif	//BATGBA_DEBUG_INCLUDED
