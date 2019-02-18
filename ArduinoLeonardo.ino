#include <SoftwareSerial.h>
                           
#include <Keyboard.h>


void setup() {
          // joystick eje Y                          // Iniciamos emulacion raton.
  Keyboard.begin();   
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A3,INPUT);
  pinMode(A5,INPUT);// Iniciamos emulacion teclado.
  /*comVirtual.flush();                  // Vacia el buffer de entrada.
  delay(500);
  comVirtual.begin(9600);             // Inicializa com virtual
  comVirtual.print("Iniializando salida datos ...");*/
}


void volt(int W,int* S,int* A,int* D,char w,char a,char b,char c){
 if (W>815&&W<1100){
  ////datos de comprobación
  Serial.print("\n letra");
  Serial.print(w);
  Serial.print("\n  \n");
   Serial.print("\n imprime W ");
 Serial.print(W);
  Serial.print("\n imprime S");  
  Serial.print(*S);
 Serial.print("\n imprime A"); 
  Serial.print(*A);
 Serial.print("\n imprime D");
  Serial.print(*D);
  //////////////aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaawaaaawwwwwwaaaaaaaaaaaaawddaaddwwwddwwwdwwddwddwwwwwwddwwwddwwwwwwwwwwdddddddddddddddddwwddddwwwwddddddddDDAWSaaaddaadawwddddddaddddddw
  Keyboard.press(w);
  delay(100);
   
  *A=0;
  *S=0;
  *D=0;
  
  Keyboard.release (w);

  
  
  
  
   }}
 

void loop() {
int D = A0,d = analogRead(D), S = A3,s = analogRead(S),A = A1, a = analogRead(A), W= A2,w = analogRead(W);  

 if (d>s && d>a && d>w)  
volt(d,&s,&w,&a,'d','w','s','a');
 if (w>s && w>a && w>d) 
volt(w,&d,&s,&a,'w','d','s','a');
 if (a>s && a>w && a>d) 
volt(a,&w,&d,&s,'a','d','w','s');
 if (s>w && s>a && s>d) 
volt(s,&d,&w,&a,'s','d','w','a');
////AWAWAWAWAWAWAAWAWAAWAWAWAWAWWWDWDWDWDWWWDWADWWWWWAWWWWDWADWDWADWADWddddddddddsddsddsddsddsWDWADWADWAwwwwwwwwdwwwwdwwwdwwdwwdwwddwwwwdwwwwddwwwddwwwwwwwdwwwddwwdwwwwwwwwwwwwwwddwwwwwwwwwwdd

    /*        
    if (arriba==0) {
       Keyboard.press('w');
       delay(100);
       Keyboard.release ('w');
   
    } 
    if (abajo=0) {
       Keyboard.press('s');
       delay(100);
       Keyboard.release ('s');
   
    } 
     if (izquierda=0) {
       Keyboard.press('a');
       delay(100);
       Keyboard.release ('a');
   
    } 
     if (derecha=0) {
       Keyboard.press('d');
       delay(100);
       Keyboard.release ('d');
   
    }*/ 
  


}

