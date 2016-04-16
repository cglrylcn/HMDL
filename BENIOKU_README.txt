/**************************************************************************************************************************************************
***************************************************************************************************************************************************
 Proje / Project   	: Pratik Motor S�rme K�t�phanesi / Handy Motor Drive Library
 Yazan/Author      	: �a�lar YAL�IN - caglar-yalcin@hotmail.com
 A��klama/Description  	: Bu k�t�phane ayn� anda iki motoru bir sat�rda en fazla 15 karakter ile s�rmeyi kolayla�t�rmak i�in olu�turulmu�tur.
			  This library makes easy to drive two motors with in just one row, maximum 15 characters.
****************************************************************************************************************************************************
***************************************************************************************************************************************************/

Arduino Program�nda kullan�labilecek Fonksiyonlar(Functions that can be used in the arduino sketch)
	#include "HMD.h" K�t�phaneyi kullanabilmek i�in program�n en �st�ne eklenmeli	|	To use the library must be written on the top of the sketch
	HMD.SETUP(IN1,IN2,IN3,IN4); Motor s�r�c�s�n�n ba�land��� giri� bacaklar�	|	Motor driver's connected input pins
				    Arduino yaz�l�m�nda void setup(){ } i�inde olmal�  	|	Must be in void setup(){ } on the arduino sketch	

    		HMD.forward();			�leri Git			 	|	Go Forward
    		HMD.backward();			Geri Git				|	Go Backward
    		HMD.left();			Sola D�n				|	Turn Left
    		HMD.right();			Sa�a D�n				|	Turn Right
    		HMD.stop();			Dur					|	Stop	
    		HMD.forwardt(time);		X milisaniye ileri git			|	Go Forward for X miliseconds

Ayr�ca HMD_Example klas�r� i�inde "HMD.pdsprj" ve "HMD_Example.cpp.hex" dosyas�n� kullanarak Proteus ISIS �zerinden sim�lasyonunu yapabilirsiniz.(Proteus i�in Arduino k�t�phanesi y�kl� olmas� gerekmektedir.)
Also you can simulate the HMD Library on Proteus ISIS with Arduino Library for ISIS.