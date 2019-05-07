int sound;
int stan = 0;
#define interruptPin 2

void zmien() {
  stan++;
  if (stan>6) stan=0;
}


void setup() //zamienic 0 i 6
{
  pinMode(0, OUTPUT); 
  pinMode(1, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(interruptPin, INPUT);
  pinMode(A0, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), zmien, RISING);
  
}

void loop() 
{
  switch (stan)
  {
  case 0: //muzyka
    sound = analogRead(A0); 
    Serial.println(sound);
    //sound/=3;
    switch (sound) 
    {
    case 0:
      PORTD = B00000000;
      PORTB &= ~_BV(PB1); 
      break;
    case 1:
      PORTD = B00000001;
      PORTB &= ~_BV(PB1); 
      break;
    case 2:
      PORTD = B00000011;
      PORTB &= ~_BV(PB1); 
      break;
    case 3:
      PORTD = B00001011;
      PORTB &= ~_BV(PB1); 
      break;
    case 4:
      PORTD = B00011011;
      PORTB &= ~_BV(PB1); 
      break;
    case 5:
      PORTD = B00111011;
      PORTB &= ~_BV(PB1); 
      break;
    default:
      PORTD = B00111011;
      PORTB |= _BV(PB1);
      break;
    }
    //delay(10);
    break;


  
  case 1: //ciagle on
    PORTD = B00111011;
    PORTB |= _BV(PB1);
    delay(500);
    break;


    
  case 2: //on off 1s
    PORTD = B00111011;
    PORTB |= _BV(PB1);
    delay(1000);
    PORTD = B00000000;
    PORTB &= ~_BV(PB1); 
    delay(1000);
    break;


    
  case 3: //on off 0,25s
    PORTD = B00111011;
    PORTB |= _BV(PB1);
    delay(250);
    PORTD = B00000000;
    PORTB &= ~_BV(PB1); 
    delay(250);
    break;


    
  case 4: //gora
    PORTD = B00000000;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00000001;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00000011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00001011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00011011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00111011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00111011;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00111010;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00111000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00110000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00100000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00000000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00000000;
    PORTB &= ~_BV(PB1); 
    break;

   case 5: //gora/dol
    PORTD = B00000000;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00000001;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00000011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00001011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00011011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00111011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00111011;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00111010;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00111000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00110000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00100000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00000000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00000000;
    PORTB &= ~_BV(PB1); 

    
    PORTD = B00000000;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00000000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00100000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00110000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00111000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00111010;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00111011;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00111011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00011011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00001011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00000011;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00000001;
    PORTB &= ~_BV(PB1); 
    delay(50);
    PORTD = B00000000;
    PORTB &= ~_BV(PB1); 
    break;


  case 6: //deszcz
    PORTD = B00000000;
    PORTB &= ~_BV(PB1);
    delay(50);
    PORTD = B00000000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00100000;
    PORTB |= _BV(PB1);
    delay(50);
    PORTD = B00110000;
    PORTB &= ~_BV(PB1);
    delay(50);
    PORTD = B00011000;
    PORTB &= ~_BV(PB1);
    delay(50);
    PORTD = B00001010;
    PORTB &= ~_BV(PB1);
    delay(50);
    PORTD = B00000011;
    PORTB &= ~_BV(PB1);
    delay(50);
    PORTD = B00000001;
    PORTB &= ~_BV(PB1);
    delay(50);
    PORTD = B00000000;
    PORTB &= ~_BV(PB1);
    delay(50);
    break;
  default:
    break;
    }
}
