  #define  pinA 10 //entrada 10
  #define  pinB 9 //entrada 9
  #define  pinC 8 //entrada 8
  #define  pinS 11 //salida 11 rele
  int tempo =4000;/*Una variable puede ser declarada 
en el inicio del programa antes de setup()*/
  bool condicion = -1;
  bool a, b, c = -1;
  bool cond01,cond02,cond03 = -1;
  void setup ()//constituye la preparación del programa 
    
  /*  se incluye la declaración de variables y se trata de la primera función que se ejecuta en el programa. Esta función se ejecuta una 
    única vez y es empleada para configurar el pinMode */
  {
  pinMode (pinA,INPUT);// establese pin como entrada
  pinMode (pinB,INPUT);//establese pin como entrada
  pinMode (pinC,INPUT);//establese pin como entrada
  pinMode (pinS,OUTPUT);//establese pin como salida 
  
  }
  
 void loop(){
 

a = digitalRead(pinA);
b = digitalRead(pinB);
c = digitalRead(pinC);

//condicion = (!a && b && !c) ||(a && b && !c) || (a && b && c);

   cond01 =(!a && b && !c);
   cond02 =(a && b && !c);
   cond03 =(a && b && c); 
   
if (cond01){
     digitalWrite(pinS,HIGH); //activa pin
     delay(4000);// pausa 4 segundos 
 }
   else if (cond02){
     digitalWrite(pinS,HIGH); //activa pin
     delay(4000);// pausa 4 segundos 
   }   
    else if (cond03){
     digitalWrite(pinS,HIGH); //activa pin
     delay(4000);// pausa 4 segundos 
    }  
       
 else{
   digitalWrite(pinS,LOW);//desactivar pin
   /*  Lee el valor desde un pin digital específico.
   Devuelve un valor HIGH o LOW
   */

     delay(4000);//pausa 4 segundos 
 }}
