#ifndef MAIN_H
#define MAIN_H
#include "Boss.h"
#include "HourLy.h"
#include "Piece.h"
#include "Commission.h"

int main(){
    Boss boss("BOSS","A",24,12,2002,5000,00001);
    boss.print();
    HourlyWorker workerA("WORKER","A",1,1,1990,200,4,00002);
    workerA.print();
    PieceWorker workerB("WORKER","B",2,2,1990,100,4,00003);
    workerB.print();
    CommissionWorker workerC("WORKER","C",3,3,1990,450,10,4,00004);
    workerC.print();
    return 0;
}
#endif

