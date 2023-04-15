int infrarrojo= A10;
int valor= 0;
int pin_1 = 8;
int pin_2 = 7;

void setup() {
  Serial.begin(9600);
  pinMode(infrarrojo, INPUT);
  pinMode(pin_1, OUTPUT); 
  pinMode(pin_2, OUTPUT);
 
  
} 
void loop() {

valor = analogRead(infrarrojo);
Serial.println(valor);

if (valor <=300) {
  Serial.println("objeto detectado");
  digitalWrite(pin_1, LOW);
  digitalWrite(pin_2, LOW);
  delay(3000);
  }

  digitalWrite(pin_1, LOW);
  digitalWrite(pin_2, HIGH);
  

  /*digitalWrite(pin_1, HIGH);
  digitalWrite(pin_2, LOW);
  delay(3000); // tiempo para que cambie de dirección  */
/*digitalWrite(pin_1, HIGH);
  digitalWrite(pin_2, LOW);
  analogWrite(pwm, 10);
  delay(3000); // tiempo para que cambie de dirección 

  digitalWrite(pin_1, LOW);
  digitalWrite(pin_2, LOW);
  delay(1000);
  
  digitalWrite(pin_1, LOW);
  digitalWrite(pin_2, HIGH);
  analogWrite(pwm, 150);
  delay(6000);*/
//codigo motor

  //codgo sensor
 
}
