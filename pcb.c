//Name: Rayan Bouamrane
//ID: 260788250

#include <stdlib.h>
#include "pcb.h"

PCB *makePCB(int start, int end) {
    PCB *p = malloc(sizeof(PCB));
    (*p).PC = start;
    (*p).start = start;
    (*p).end = end;
    return p;
}