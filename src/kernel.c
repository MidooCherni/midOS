#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
kmain()
{
	isr_install();
	clearScreen();
	print("midOS 0.1 - Experimental operating system, coded and designed by Midoo.\nInspired by the style of UNIX and MS-DOS.\n\n");
	print("MOTD 3/14/2019: i'm ALIVE, FOOL\n");
	launch_shell(0);    
}
