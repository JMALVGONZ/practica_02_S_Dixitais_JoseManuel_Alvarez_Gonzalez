/*
programa que permite escoller o led que se acende en función
do valor dunha variable de tipo string.Facemolo de duas formas,
a primeira asignando a variable da cor no comando string, e da
segunda introducindo a variable escrita no terminal do monitor

Autor:Jose Manuel Álvarez González
Data: 24 de Novembro 2026

*/
//Asignamos a variable 
/*
String color = "verde" ; 

//declaramos os pins
void setup (){
pinMode(12,OUTPUT); 
pinMode(11,OUTPUT);
pinMode (10,OUTPUT);
pinMode (9,OUTPUT);
pinMode (8,OUTPUT);
pinMode (7,OUTPUT);
              
}

void loop (){
  
  //se a variable cor está en verde, que se encenda o led
  //VERDE , en caso contrario o LED vermello
  
  if (color== "verde"){
    digitalWrite (12,HIGH);
    Serial.print ("LED verde aceso;");
    delay (500);
    digitalWrite (12,LOW);
    Serial.println ("LED verde apagado;");
    delay (500);
  }
 
  
  else if (color=="vermello"){
    digitalWrite (11,HIGH);
    Serial.print ("LED vermello aceso;");
    delay (500);
    digitalWrite (11,LOW);
    Serial.println ("LED vermello apagado;");
    delay (500);
    
  }
 
  else if (color =="amarelo"){
    digitalWrite (10,HIGH);
    Serial.print ("LED amarelo aceso;");
    delay (500);
    digitalWrite (10,LOW);
    Serial.println ("LED amarelo apagado;");
    delay (500);
     }
  else if (color =="naranxa"){
    digitalWrite (9,HIGH);
    Serial.print ("LED naranja aceso;");
    delay (500);
    digitalWrite (9,LOW);
    Serial.println ("LED naranja apagado;");
    delay (500);
     }
  else if (color =="blanco"){
    digitalWrite (8,HIGH);
    Serial.print ("LED blanco aceso;");
    delay (500);
    digitalWrite (8,LOW);
    Serial.println ("LED blanco apagado;");
    delay (500);
     }
  else if (color =="azul"){
    digitalWrite (7,HIGH);
    Serial.print ("LED azul aceso;");
    delay (500);
    digitalWrite (7,LOW);
    Serial.println ("LED azul apagado;");
    delay (500);
     }
  else {
    Serial.println ( "selecciona led");
  }
  
 }
 */


String color = "" ; 

void setup (){
pinMode(12,OUTPUT); 
pinMode(11,OUTPUT);
pinMode (10,OUTPUT);
pinMode (9,OUTPUT);
pinMode (8,OUTPUT);
pinMode (7,OUTPUT);

             
Serial.begin (9600); // establece a comunicacion con arduino
}

void loop (){
  if (Serial.available() ) {
    color=Serial.readString ();} // lee o valor que introducimos no monitor
  
  if (color== "verde"){
    digitalWrite (12,HIGH);
    Serial.print ("LED verde aceso;");
    delay (500);
    digitalWrite (12,LOW);
    Serial.println ("LED verde apagado;");
    delay (500);
  }
 
  
  else if (color=="vermello"){
    digitalWrite (11,HIGH);
    Serial.print ("LED vermello aceso;");
    delay (500);
    digitalWrite (11,LOW);
    Serial.println ("LED vermello apagado;");
    delay (500);
    
  }
 
  else if (color =="amarelo"){
    digitalWrite (10,HIGH);
    Serial.print ("LED amarelo aceso;");
    delay (500);
    digitalWrite (10,LOW);
    Serial.println ("LED amarelo apagado;");
    delay (500);
     }
  else if (color =="naranja"){
    digitalWrite (9,HIGH);
    Serial.print ("LED naranja aceso;");
    delay (500);
    digitalWrite (9,LOW);
    Serial.println ("LED naranja apagado;");
    delay (500);
     }
  else if (color =="blanco"){
    digitalWrite (8,HIGH);
    Serial.print ("LED blanco aceso;");
    delay (500);
    digitalWrite (8,LOW);
    Serial.println ("LED blanco apagado;");
    delay (500);
     }
  else if (color =="azul"){
    digitalWrite (7,HIGH);
    Serial.print ("LED azul aceso;");
    delay (500);
    digitalWrite (7,LOW);
    Serial.println ("LED azul apagado;");
    delay (500);
     }
  else {
    Serial.println ( "selecciona led"); // indicamos que introduzamos a cor que queremos
  }
  
 }
 
  
  