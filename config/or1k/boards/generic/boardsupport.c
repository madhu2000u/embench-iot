#include <support.h>

void
initialise_board ()
{
 __asm__ volatile ("" : : : "memory");
}

void
start_trigger ()
{
 __asm__ volatile ("" : : : "memory");
}

void
stop_trigger ()
{
 __asm__ volatile ("" : : : "memory");
}