/**************************************************************************************************************************************************
***************************************************************************************************************************************************
 Proje / Project   		: Pratik Motor Sürme Kütüphanesi / Handy Motor Drive Library
 Yazan/Author      		: Çağlar YALÇIN - caglar-yalcin@hotmail.com
 Açıklama/Description  	: Bu kütüphane aynı anda iki motoru bir satırda en fazla 15 karakter ile sürmeyi kolaylaştırmak için oluşturulmuştur.
						  This library makes easy to drive two motors with just one row, maximum 15 characters.
****************************************************************************************************************************************************
***************************************************************************************************************************************************/

#include "Arduino.h" 
#include "HMD.h" 

hmdclass::hmdclass(){
}

void hmdclass::SETUP(int a,int b,int c, int d){
	OUT1=a;
	OUT2=b;
	OUT3=c;
	OUT4=d;
    pinMode(OUT1, OUTPUT); //MAKE THE PINS OUTPUT
	pinMode(OUT2, OUTPUT);
	pinMode(OUT3, OUTPUT);
	pinMode(OUT4, OUTPUT);
	
}


//GO FORWARD
void hmdclass::forward(){
	digitalWrite(OUT1,HIGH); //SET THE OUT1-OUT3 HIGH TO GO FORWARD
	digitalWrite(OUT2,LOW); 
	digitalWrite(OUT3,HIGH); 
	digitalWrite(OUT4,LOW); 
}

//GO BACKWARD
void hmdclass::backward(){
	digitalWrite(OUT1,LOW); //SET THE OUT2-OUT4 HIGH TO GO BACKWARD
	digitalWrite(OUT2,HIGH); 
	digitalWrite(OUT3,LOW); 
	digitalWrite(OUT4,HIGH); 
}

//TURN LEFT
void hmdclass::left(){
	digitalWrite(OUT1,LOW); //SET THE OUT3 HIGH TO TURN LEFT
	digitalWrite(OUT2,LOW); 
	digitalWrite(OUT3,HIGH); 
	digitalWrite(OUT4,LOW); 
}

//TURN RIGHT
void hmdclass::right(){
	digitalWrite(OUT1,HIGH); //SET THE OUT1 HIGH TO TURN RIGHT
	digitalWrite(OUT2,LOW); 
	digitalWrite(OUT3,LOW); 
	digitalWrite(OUT4,LOW); 
}

//STOP
void hmdclass::stop(){
	digitalWrite(OUT1,LOW); //SET THE ALL PINS LOW TO STOP THE MOTORS
	digitalWrite(OUT2,LOW); 
	digitalWrite(OUT3,LOW); 
	digitalWrite(OUT4,LOW); 
}

//FORWARD FOR X TIME
void hmdclass::forwardt(int time){
	digitalWrite(OUT1, HIGH); //SET THE OUT1-OUT3 HIGH TO GO FORWARD
	digitalWrite(OUT2, LOW);
	digitalWrite(OUT3, HIGH);
	digitalWrite(OUT4, LOW);
	delay(time);
	stop();
}


hmdclass HMD = hmdclass();