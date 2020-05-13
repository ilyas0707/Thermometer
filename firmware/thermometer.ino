#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,8,7,6,5);
int tempPin = A0;   
int temp;	

void setup() {
	Serial.begin(9600);
	lcd.begin(16,2);  
}

void loop() {  
	temp = readTemp();    
	lcd.print("TEMP: ");
	lcd.print(temp);      
	lcd.print("C ");
	lcd.setCursor(0,1);   
	delay(200);
	lcd.clear();
}

int readTemp() { 
	temp = analogRead(tempPin);
	return ((( temp * 5 ) / 1024.0) - 0.5) * 100;
}

  