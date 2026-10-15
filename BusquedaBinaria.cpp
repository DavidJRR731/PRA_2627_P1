#include<iostream>
#include<vector.h>
#include<chrono.h>
using namespace std;
template<typename T>

int BusquedaBinaria(T val, vector& v,int ini,int fin){
	if(ini>fin){
		cout<<"No se encuentra dentro del array"<<"\n";
		return -1;
	}
	int medio=(ini+fin)/2;
	if(v[medio]==X){
		return medio;
	}
	else if(v[medio]>X){
		return BusquedaBinaria(T,v[],ini,medio-1);
	}
	else{
		return BusquedaBinaria(T,v[],medio+1,fin);
	}
}

void Quickshort(vector& v,int ini,int fin){
	if(ini<fin){
		int pivot=Partition(v,ini,fin);
		Quickshort(v,ini,pivot-1);
		Quickshort(v,pivot+1,fin);
	}
}

int partition(vector& v,int ini,int fin){
	int x=v[fin];
	int i=ini;
	for(j=ini;j<=fin-1;j++){
		if(v[j]<=x){
			swap(v[i],v[j]);
			i+=1;
		}
	}

	swap(v[i],v[j]);
	return i;
}

