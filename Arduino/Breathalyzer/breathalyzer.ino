
// Definicoes dos pinos ligados ao sensor 
int pin_d0 = 7;
int pin_a0 = A2;

void setup()
{
  // Define os pinos de leitura do sensor como entrada
  pinMode(pin_d0, INPUT);
  pinMode(pin_a0, INPUT);
 
  // Inicializa a serial
  Serial.begin(115200);
}

void loop()
{
  // Le os dados do pino digital D0 do sensor
  int valor_digital = digitalRead(pin_d0);
  // Le os dados do pino analogico A0 do sensor
  int valor_analogico = analogRead(pin_a0);
Serial.println(valor_analogico);
delay(1000);
}
