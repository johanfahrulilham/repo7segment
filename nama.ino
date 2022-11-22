const byte numeral[11]={ 
B01110000, //untuk angka J
B11111100, //untuk angka 0
B00101110, //untuk angka H
B11111010, //untuk angka A 
B11101100, //untuk angka N 
B00000000, //tanpa menampilkan apapun
}; 
 
//inisialisasi pin yang digunakan 
const int segmentPins[8]= {2,10,9,8,7,6,5,4}; //dp,g,f,e,d,c,b,a 
 
void setup(){ 
for (int i=0; i < 8; i++){ 
pinMode(segmentPins[i], OUTPUT); 
}} 
 
void loop(){ 
for (int i=0; i <=5; i++){ 
tunjukanAngka(i); 
delay(1000); 
} 
delay(200); } 
 
void tunjukanAngka (int number){ 
boolean isBitSet; 
for (int segment=1; segment < 8; segment++){ 
isBitSet= bitRead(numeral[number], segment); 
digitalWrite(segmentPins[segment], isBitSet); } 
}
