/*
  Feliz natal...

  Brincando com leds no arduino
 */

int led[] = {2,3,4}; //defina aqui as portas em que os leds estao
int time = 300; //defina o tempo de espera em milissegundos

void setup() {
  //definindo portas dos leds como OUTPUT
  for(int j = 0; j < sizeof(led); j++ ) {
      pinMode(led[j], OUTPUT);
  }  

}

void loop() {

  //acende todos
  for(int j = 0; j < sizeof(led); j++ ) {
      digitalWrite(led[j], HIGH);  //ligando o led
      delay(time);
  }

//apaga todos
  for(int j = 0; j < sizeof(led); j++ ) {
      digitalWrite(led[j], LOW); //desligando o led
      delay(time);
  }

  //acende e apaga cada um dos leds
  for(int j = 0; j < sizeof(led); j++ ) {
      digitalWrite(led[j], HIGH); //ligando o led
      delay(time);
      digitalWrite(led[j], LOW);   //desligando
      delay(time);
  }
  //acende e apaga cada um dos leds
  for(int j = 0; j < sizeof(led); j++ ) {
      digitalWrite(led[j], LOW); //ligando o led
      delay(time);
      digitalWrite(led[j], HIGH);   //desligando
      delay(time);
      digitalWrite(led[j], LOW);   //desligando
      delay(time);
  }
}
