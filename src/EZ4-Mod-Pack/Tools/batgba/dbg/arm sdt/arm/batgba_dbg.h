#ifndef BATGBA_DEBUG_INCLUDED
#define BATGBA_DEBUG_INCLUDED

//this file must be compiled with arm sdt and arm mode



#define BATGBA_MEM_DBG	    ((unsigned char*) 0x10000000)




#ifdef BATGBA_DEBUG_ENABLE

#define	BATGBA_PRINT				__asm (swi 0x500000);
#define BATGBA_BREAK(Num)			__asm (swi "#Num" << 16 + 0x900000);
#define BATGBA_TIMING				__asm (swi 0x550000);
#define BATGBA_PROFILE_START(Num)		__asm (swi "#Num" << 17 + 0x580000); 
#define BATGBA_PROFILE_STOP(Num)		__asm (swi "#Num" << 17 + 0x590000);		

#else

#define	BATGBA_PRINT				
#define BATGBA_BREAK(Num)			
#define BATGBA_TIMING				
#define BATGBA_PROFILE_START(Num)		
#define BATGBA_PROFILE_STOP(Num)		

#endif	





#endif	//BATGBA_DEBUG_INCLUDED
	