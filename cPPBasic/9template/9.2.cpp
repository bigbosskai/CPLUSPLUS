#include<iostream> 
using namespace std;

template<typename ElementType>
void SortBubble(ElementType *a,int size){
	int i,work;
	ElementType temp;
	for(int pass=1; pass<size; pass++){
		work=1;
		for(i=0; i<size-pass; i++){
			if( a[i] > a[i+1] ){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				work=0;
			}
		}
		if(work) break;//���ĳһ��ʲôҲû�����ǲ��Ǿ����Ѿ���������أ� 
	}
}
