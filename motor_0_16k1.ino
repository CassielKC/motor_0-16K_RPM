#define E1 8  // Enable Pin for motor 1
#define I1 10     // Control pin 1 for motor 1
#define I2 9     // Control pin 2 for motor 1

void setup()
{
    pinMode(8,OUTPUT);
 	pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(A0,INPUT); 
}
void loop()
{
  		int val;
  		val=analogRead(A0);
  		val = map(val, 0, 1023, 0, 250);
    	digitalWrite(E1, HIGH);     
        analogWrite(I1, 0);     
        analogWrite(I2, val);
}