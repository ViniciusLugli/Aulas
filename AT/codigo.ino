// C++ code
//
const int led1 = 4; 
const int led2 = 3;
const int led3 = 2;
const int led4 = 9;
const int led5 = 8;
const int led6 = 7;
const int led7 = 6;
const int led8 = 5;
const int led9 = 11;
const int led10 = 10; 

void setup()
{
    pinMode(led1, OUTPUT); 
    pinMode(led2, OUTPUT); 
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT); 
    pinMode(led5, OUTPUT); 
    pinMode(led6, OUTPUT); 
    pinMode(led7, OUTPUT); 
    pinMode(led8, OUTPUT); 
    pinMode(led9, OUTPUT); 
    pinMode(led10, OUTPUT); 
 
}

void loop()
{
 
   digitalWrite (led1, HIGH);
   digitalWrite (led6, HIGH); 
   digitalWrite (led8, HIGH); 
   digitalWrite (led9, HIGH);
   delay(3000);
   digitalWrite (led1, LOW);
   digitalWrite (led2, HIGH);
   digitalWrite (led6, HIGH);
   digitalWrite (led8, HIGH);
   digitalWrite (led9, HIGH);
   delay(3000);
   digitalWrite (led2, LOW);
   digitalWrite (led9, LOW);
   digitalWrite (led3, HIGH); 
   digitalWrite (led10, HIGH);
   delay(2000);
   digitalWrite (led6, LOW);
   digitalWrite (led8, LOW); 
   digitalWrite (led3, LOW); 
   digitalWrite (led10, LOW); 
   digitalWrite (led7, HIGH); 
   digitalWrite (led3, HIGH); 
   digitalWrite (led4, HIGH); 
   digitalWrite (led10, HIGH);
   delay(3000);
   digitalWrite (led3, HIGH); 
   digitalWrite (led4, LOW); 
   digitalWrite (led5, HIGH); 
   digitalWrite (led7, HIGH); 
   digitalWrite (led10, HIGH); 
   delay(3000);
   digitalWrite (led3, HIGH); 
   digitalWrite (led5, LOW); 
   digitalWrite (led6, HIGH); 
   digitalWrite (led7, LOW);
   digitalWrite (led8, HIGH);
   digitalWrite (led10, HIGH);
   delay(2000);
    digitalWrite (led3, LOW);
   digitalWrite (led6, LOW);
   digitalWrite (led8, LOW); 
   digitalWrite (led10, LOW);
   delay(3);
 
}
