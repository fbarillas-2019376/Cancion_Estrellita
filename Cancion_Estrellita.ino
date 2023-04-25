/*
   Fundacion Kinal
   Centro Educativo Tecnico Laboral KINAL
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital 
   Francisco Javier Barillas Velasquez
   2019376
*/
//Defino mis notas Musicales
  int TRIG = 2; 
  int ECHO = 3;
  int BUZZ = 11;
  int DO  = 261;
  int RE  = 294;
  int MI  = 329;
  int FA  = 349;
  int SOL = 392;
  int LA  = 440;
  int SI  = 493;
  long DISTANCIA;
void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZ, OUTPUT);
}
void loop() {
  MEDICION();
  Letras_Musicales();
}
  int MEDICION(){
  long T; 
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIG, LOW);
  T = pulseIn(ECHO, HIGH);
  DISTANCIA = T/58.2;
  delay(50);
  return DISTANCIA;
  }
 
  void Letras_Musicales(){
    if (DISTANCIA > 0 && DISTANCIA <= 4) { 
    tone(BUZZ, DO, 500);
    delay(1);  
    }
    else if (DISTANCIA > 4 && DISTANCIA <= 9) { 
    tone(BUZZ, RE, 500);
    delay(1);    
    } 
    else if (DISTANCIA > 9 && DISTANCIA <= 14) { 
    tone(BUZZ, MI, 500);  
    delay(1);
    } 
    else if (DISTANCIA > 14 && DISTANCIA <= 19) { 
    tone(BUZZ, FA, 500);
    delay(1); 
    } 
    else if (DISTANCIA > 19 && DISTANCIA <= 24) { 
    tone(BUZZ, SOL, 500);
    delay(1);
    } 
    else if (DISTANCIA > 24 && DISTANCIA <= 29) { 
    tone(BUZZ, LA, 500);
    delay(1);
    } 
    else if (DISTANCIA > 29 && DISTANCIA <= 34) { 
    tone(BUZZ, DO, 1000);
    delay(100); 
    } 
    else if (DISTANCIA > 34 && DISTANCIA <= 39) { 
    tone(BUZZ, SOL, 1000);
    delay(100); 
    }  
    else if (DISTANCIA > 39 && DISTANCIA <= 44) { 
    tone(BUZZ, RE, 1000);
    delay(100); 
    }
    else {
    noTone(BUZZ); 
    }
  delay(1000);  //Un segundo para que pueda volver empezar
}
