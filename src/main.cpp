#include <iostream>
using namespace std;

void  _bubblesort_(void * _array_,void (*foo) (void *, int _i, int _k),int _tam_){
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
			foo(_array_,k,k+1);//comparar y cambiar posicion
	return;
}

void  _b_int_ (void* vector, int _i,int _k){
	int temp;
	int *_vector_=(int*)vector;
	if(_vector_[_i]<_vector_[_k]) return;
	temp=_vector_[_k];
	_vector_[_k]=_vector_[_i];
	_vector_[_i]=temp;
	return;
}

void  _b_float_ (void* vector, int _i,int _k){
	float temp;
	float *_vector_=(float*)vector;
	if(_vector_[_i]<_vector_[_k]) return;
	temp=_vector_[_k];
	_vector_[_k]=_vector_[_i];
	_vector_[_i]=temp;
	return;
}

void  _b_double_ (void* vector, int _i,int _k){
	double temp;
	double *_vector_=(double*)vector;
	if(_vector_[_i]<_vector_[_k]) return;
	temp=_vector_[_k];
	_vector_[_k]=_vector_[_i];
	_vector_[_i]=temp;
	return;
}

void  _b_char_ (void* vector, int _i,int _k){
	char temp;
	char *_vector_=(char*)vector;
	if(_vector_[_i]<_vector_[_k]) return;
	temp=_vector_[_k];
	_vector_[_k]=_vector_[_i];
	_vector_[_i]=temp;
	return;
}

int main(){
	//int i = 0;
	int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
	float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_,5);	
	for(int i=0;i<5;i++)
		cout<<_array_1[i]<<", ";
	cout<<endl;
	_bubblesort_(_array_2,_b_float_,5);
	for(int i=0;i<5;i++)
		cout<<_array_2[i]<<", ";
	cout<<endl;
	_bubblesort_(_array_3,_b_double_,5);
	for(int i=0;i<5;i++)
		cout<<_array_3[i]<<", ";
	cout<<endl;
	_bubblesort_(_array_4,_b_char_,6);
	for(int i=0;i<6;i++)
		cout<<_array_4[i]<<", ";
	cout<<endl;

    return 0;
}
