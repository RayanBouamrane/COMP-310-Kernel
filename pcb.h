//Name: Rayan Bouamrane
//ID: 260788250

#ifndef PCB_H
#define PCB_H

typedef struct {
    int PC;
    int start;
    int end;
} PCB;

PCB *makePCB(int start, int end);

#endif //PCB_H