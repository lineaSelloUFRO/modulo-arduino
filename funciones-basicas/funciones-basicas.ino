void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}

void loop() {
  int year = 2022;  
  Serial.print("Ejecutando este programa en el año ");
  Serial.println(year);  
  digitalWrite(7, HIGH);
  delay(1000); 
  digitalWrite(7, LOW);
  delay(1000); 
}