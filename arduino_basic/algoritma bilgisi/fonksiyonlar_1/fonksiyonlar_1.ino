/*
   Parametre almayan değer döndürmeyen fonksiyonlar 
   Fonksiyonlar -1
   
*/

const int led_pin = 3; //pinler atandı
const int buton_pin = 4;
const int buzzer_pin = 2;

int buton_durum = 0; //butonun durumunu saklayacak olan değişken

void basla() // değer döndürmeyen parametre almayan "basla" fonskiyonu
{
  digitalWrite(led_pin, HIGH); // ledi yak
  delay(200); //bekle
  digitalWrite(led_pin, LOW); //ledi söndür
  delay(200); //bekle
}

void baslama() // değer döndürmeyen parametre almayan "baslama" fonskiyonu
{
  digitalWrite(buzzer_pin, HIGH); //buzzer çal
  delay(200); //bekle
  digitalWrite(buzzer_pin, LOW); // buzzer sustur
  delay(200); //bekle
}


void setup()
{
  pinMode(led_pin ,   OUTPUT); // led pini çıkış atandı
  pinMode(buton_pin,   INPUT); // bton pini giriş atandı
  pinMode(buzzer_pin, OUTPUT); // buzzer pini çıkış atandı
}

void loop()
{
  buton_durum = digitalRead(buton_pin); // buton pinini oku, sonucu durum değişkenine kaydet
  if (buton_durum == HIGH) // buton durumu 1 ise
  {
    basla(); // basla adlı fonksiyonu çağır
  }
  else if (buton_durum == LOW)  //buton durumu 0 ise
  {
    baslama();// baslama adlı fonksiyonu çağır
  }
}

