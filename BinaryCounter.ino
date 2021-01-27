int values[4];
int limit = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int decimal = limit;
  do {
    for(int i=0; i<4; i++) {
      values[i] = decimal % 2;
      decimal /= 2;
    }
  }while (decimal!=0);

  for (int j=3; j>=0; j--) {
    led(j, values[j]);
  }
  
  delay(2000);
  
  limit++;
  if (limit>15) {
    limit = 0;
  }
}

void led(int n, int value) {
  switch (n){
    case 0:
      if (value) {
        digitalWrite(13, HIGH);
      } else {
        digitalWrite(13, LOW);
      }
      break;
    case 1:
      if (value) {
        digitalWrite(12, HIGH);
      } else {
        digitalWrite(12, LOW);
      }
      break;
    case 2:
      if (value) {
        digitalWrite(11, HIGH);
      } else {
        digitalWrite(11, LOW);
      }
      break;
    case 3:
      if (value) {
        digitalWrite(10, HIGH);
      } else {
        digitalWrite(10, LOW);
      }
      break;
  }
}
