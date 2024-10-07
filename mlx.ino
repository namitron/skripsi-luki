// Pin sensor
const int pulsePin = A0;  // Pin untuk membaca data dari sensor

// Variabel untuk menyimpan data
int pulseValue = 0;       // Untuk menyimpan nilai dari sensor

void setup() {
  // Inisialisasi Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Membaca nilai dari sensor
  pulseValue = analogRead(pulsePin);
  
  // Mencetak nilai ke Serial Monitor
  Serial.print("Pulse Value: ");
  Serial.println(pulseValue);

  // Menunggu sedikit sebelum membaca lagi
  delay(100);  // Delay 100 ms
}
