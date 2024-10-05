#ifndef PIECE_H
#define PIECE_H
#include "Employee.h"

class PieceWorker: public Employee{

	private:
        double wagePerPiece;   
        unsigned quantity;  
	public:
        PieceWorker(char*, char*, int, int, int, double = 0.0, unsigned = 0, int =0);
        void setWage(double);
        void setQuantity(unsigned);
        virtual double earnings();
        virtual void print();
   
};
PieceWorker::PieceWorker(char *FN, char *LN, int D, int M, int Y, double wagePerPiece, unsigned quantity, int Code):Employee(FN,LN,D,M,Y,Code){
   this->wagePerPiece = wagePerPiece;
   this->quantity = quantity;
}
void PieceWorker::setWage(double wagePerPiece){
    this->wagePerPiece = wagePerPiece;
}
void PieceWorker::setQuantity(unsigned quantity){
   this->quantity = quantity;
}
double PieceWorker::earnings(){
    return wagePerPiece*quantity;
}

void PieceWorker::print(){
	Employee::print();
    cout<<" Piece Worker's salary: $"<<PieceWorker::earnings()<<endl;
    cout << endl;

}
#endif

