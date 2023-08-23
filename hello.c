#include <stdio.h>
#include<hello/hello.h>
#include <uk/alloc.h>
#include <stdlib.h>
void pr()
{
      // flexos_nop_gate(0, 0, printf, "begin!!!!!!!!!!!!!!!");
   flexos_gate(libc, printf, "begin!!!!!!!!!!!!!!!");
}
