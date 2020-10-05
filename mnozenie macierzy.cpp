#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
main()
{
	int w,w1,k,k1,w2,k2;
	
	cout<<"podaj wielkosc ilosc wierszy i kolumn tablicy A"<<endl;
	cout<<"Wiersze : ";
	cin>>w;
	cout<<endl;
	cout<<"kolumny : ";
	cin>>k;
	cout<<endl;
	cout<<"podaj wielkosc ilosc wierszy i kolumn tablicy B"<<endl;
	cout<<"Wiersze : ";
	cin>>w1;
	cout<<endl;
	cout<<"kolumny : ";
	cin>>k1;
	cout<<endl;
	
	//----------------------------------------------------------------
	
	srand(time(NULL));
	
	//----------------------------------------------------------------
	
	int T[w][k], T1[w1][k1];
	int i,j,i1,j1;
	
	//----------------------------------------------------------------
		
	cout<<"Tablica A: "<<endl;
	for(i=0;i<w;i++)
	{
		for(j=0;j<k;j++)
		{
			T[w][k]=rand()%9+1;
			cout<<T[w][k]<<" ";
		}cout<<endl;
	}
	cout<<endl;
	cout<<"Tablica B "<<endl;
	for(i1=0;i1<w1;i1++)
	{
		for(j1=0;j1<k1;j1++)
		{
			T1[w1][k1]=rand()%9+1;
			cout<<T1[w1][k1]<<" ";
		}cout<<endl;
	}
	cout<<endl;
	
	//----------------------------------------------------------------
		
	int T2[w2][k2];
	
	//----------------------------------------------------------------
		
	if(w==k1)
	{
	//	for(int i2=0;i2<w;i2++)
	//	{
	//		for(int j2=0;j2<k1;j2++)
	//		{
				
				cout<<T2[w2][k2];
	//		}cout<<endl;
	//	}
	}
	else
	cout<<"liczba kolumn jest niezgodna z liczba wierszy"<<endl;
}
