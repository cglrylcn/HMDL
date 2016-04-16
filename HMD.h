/**************************************************************************************************************************************************
***************************************************************************************************************************************************
 Proje / Project   		: Pratik Motor Sürme Kütüphanesi / Handy Motor Drive Library
 Yazan/Author      		: Çağlar YALÇIN - caglar-yalcin@hotmail.com
 Açıklama/Description  	: Bu kütüphane aynı anda iki motoru bir satırda en fazla 15 karakter ile sürmeyi kolaylaştırmak için oluşturulmuştur.
						  This library makes easy to drive two motors with just one row, maximum 15 characters.
****************************************************************************************************************************************************
***************************************************************************************************************************************************/

#ifndef HMD_h
#define HMD_h



class hmdclass { 
public:				
	hmdclass();	
	int OUT1,OUT2,OUT3,OUT4;
	//void INS(int a,int b,int c, int d);
	
	void SETUP(int a,int b,int c, int d);			
    void forward();
	void forwardt(int time);
	void backward();
	void left();
	void right();
	void stop();
};
extern hmdclass HMD; 	
#endif