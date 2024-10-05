//	Name: Duong Quang Minh
//	Class:	Bao dam an toan thong tin

#include <iostream>
using namespace std;

//	FileID:	BubbleSort( Sap Xep Noi Bot)
void Swap(int &a, int &b){
	int temp = a;
	a=b;
	b=temp;
}

void SapXepNoiBot(int a[],int n){
	int temp;
	for( int i=0; i<n-1; i++){
		for( int j=n-1;j>i;j--)
			if(a[j]<a[j-1])
				Swap(a[j],a[j-1]);
	}
}

//	FileID:	BinarySearch( Tim Kiem Nhi Phan)

int BinarySearch(int x, int a[],int n){
	int left =0; 
	int right =n-1; 
	int mid; 

	while (left <= right ){
    	mid = (left + right) / 2;
    	if (a[mid]== x) 
        	return mid;
    	else
        	if (a[mid]<x)
        		left = mid +1;
        	else
            	right = mid -1;
  		}
	return -1;
}
void Print(int arr[],int size){
	for(int i = 0; i<(size-1);i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
 	int arr[] = {11,17,4,10,29,18,22,14,1,27,25,2,6};
	int num = sizeof(arr) / sizeof(arr[0]);
	Print(arr,num);
 	SapXepNoiBot(arr,num);
  	Print(arr,num);
	
	
	int x = 12;
  	int result = BinarySearch(x , arr ,n);
  	if (result != -1)
    	printf("%d xuat hien tai  %d", x, result);
  	else
    	printf("%d khong xuat hien ", x);
  	return 0;
}
