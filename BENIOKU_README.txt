/**************************************************************************************************************************************************
***************************************************************************************************************************************************
 Proje / Project   	: Pratik Motor Sürme Kütüphanesi / Handy Motor Drive Library
 Yazan/Author      	: Çaðlar YALÇIN - caglar-yalcin@hotmail.com
 Açýklama/Description  	: Bu kütüphane ayný anda iki motoru bir satýrda en fazla 15 karakter ile sürmeyi kolaylaþtýrmak için oluþturulmuþtur.
			  This library makes easy to drive two motors with in just one row, maximum 15 characters.
****************************************************************************************************************************************************
***************************************************************************************************************************************************/

Arduino Programýnda kullanýlabilecek Fonksiyonlar(Functions that can be used in the arduino sketch)
	#include "HMD.h" Kütüphaneyi kullanabilmek için programýn en üstüne eklenmeli	|	To use the library must be written on the top of the sketch
	HMD.SETUP(IN1,IN2,IN3,IN4); Motor sürücüsünün baðlandýðý giriþ bacaklarý	|	Motor driver's connected input pins
				    Arduino yazýlýmýnda void setup(){ } içinde olmalý  	|	Must be in void setup(){ } on the arduino sketch	

    		HMD.forward();			Ýleri Git			 	|	Go Forward
    		HMD.backward();			Geri Git				|	Go Backward
    		HMD.left();			Sola Dön				|	Turn Left
    		HMD.right();			Saða Dön				|	Turn Right
    		HMD.stop();			Dur					|	Stop	
    		HMD.forwardt(time);		X milisaniye ileri git			|	Go Forward for X miliseconds

Ayrýca HMD_Example klasörü içinde "HMD.pdsprj" ve "HMD_Example.cpp.hex" dosyasýný kullanarak Proteus ISIS üzerinden simülasyonunu yapabilirsiniz.(Proteus için Arduino kütüphanesi yüklü olmasý gerekmektedir.)
Also you can simulate the HMD Library on Proteus ISIS with Arduino Library for ISIS.