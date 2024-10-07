// Deklarasi pin untuk sensor GSR
int GSR_pin = A0; // Pin analog untuk sensor GSR
float Vcc = 5.0;  // Tegangan referensi Arduino (biasanya 5V)
float R_fixed = 10000; // Nilai resistor tetap (10k Ohm)
void setup() {
  Serial.begin(9600); // Memulai komunikasi serial
}

void loop() {
  // Membaca nilai analog dari sensor GSR
  int adc = analogRead(GSR_pin);
  float Vout = Vcc * ((1023 - adc) / 1023.0); 
  float mSimens = ((Vout-1.95)/(4.00-1.95))*(4.10 - 0.60) + 0.60;
 
  Serial.print("Tegangan GSR (V): ");
  Serial.println(Vout,2);
  Serial.print("mSimens: ");
  Serial.println(mSimens,4);
  
  // Menghitung resistansi kulit (dalam Ohm) menggunakan pembagi tegangan
 

  delay(500); // Jeda waktu 500ms untuk pembacaan berikutnya
}
