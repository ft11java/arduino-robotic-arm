#include <Servo.h>    //servo kutuphanesi yazilima dahil ediliyor

Servo sg1;      //1. servo motor nesnesi olusturuluyor
Servo sg2;      //2. servo motor nesnesi olusturuluyor
Servo sg3;      //3. servo motor nesnesi olusturuluyor
Servo sg4;      //4. servo motor nesnesi olusturuluyor

int servoDeger = 0;   //servo motora gonderilecek degeri tutan degisken tanimlaniyor
char gelenVeri;       //bluetooth sensorunden gelen veriyi tutacak degisken tanimlaniyor

void setup() {
  Serial.begin(9600);   //seri port baglantisi aciliyor
  sg1.attach(6);        //1. servo motorun sinyal pini arduinonun 6. pwm pini olarak tanımlanıyor
  sg2.attach(9);        //2. servo motorun sinyal pini arduinonun 9. pwm pini olarak tanımlanıyor
  sg3.attach(10);       //3. servo motorun sinyal pini arduinonun 10. pwm pini olarak tanımlanıyor
  sg4.attach(11);       //4. servo motorun sinyal pini arduinonun 11. pwm pini olarak tanımlanıyor
}



void sg1Yukari()    //1.servo motorun yukari yonlu harekiti icin fonsiyon tanimlamasi yapiliyor
{
  servoDeger = sg1.read();      //1. servo motorun mevcut degeri okunarak servoDeger degiskenine ataniyor
  Serial.println(servoDeger);   //1. servoDeger degiskeni seri port ekranina yazdiriliyor
  
  if (servoDeger + 1 <= 180)    //servoDeger degiskenine 1 ekleniyor eger bu deger 180'den kucuk veya esit ise if blogunu icindeki kodlar işleniyor
  {
    sg1.write(servoDeger + 1);  //1. servo motora servoDeger degiskeniyle 1'in toplamından elde edilen deger gonderilor ve 1. servo motorun bu aciya gitmesi saglaniyor
    delay(15);                  //program akisi 15 milisaniye bekletiliyor sebebi servo motorun mekanik olması ve bu mekanik yapinin yazilimin hizina yetisememesidir.
  }
}

void sg1Asagi()     //1.servo motorun asagi yonlu harekiti icin fonsiyon tanimlamasi yapiliyor
{
  servoDeger = sg1.read();      //1. servo motorun mevcut degeri okunarak servoDeger degiskenine ataniyor
  Serial.println(servoDeger);   //1. servoDeger degiskeni seri port ekranina yazdiriliyor
 
  if (servoDeger - 1 >= 0 )     //servoDeger degiskeninden 1 cikartiliyor eger bu deger 0'dan buyuk veya esit ise if blogunun icindeki kodlar işleniyor
  {
    sg1.write(servoDeger - 1);  //1. servo motora servoDeger degiskeninden 1'in cikartilmasiyla elde edilen deger gonderilor ve 1. servo motorun bu aciya gitmesi saglaniyor
    delay(15);                  //program akisi 15 milisaniye bekletiliyor sebebi servo motorun mekanik olması ve bu mekanik yapinin yazilimin hizina yetisememesidir.
  }
}



void sg2Yukari()    
{
  servoDeger = sg2.read();      //2. servo motorun mevcut degeri okunarak servoDeger degiskenine ataniyor
  Serial.println(servoDeger);   //2. servoDeger degiskeni seri port ekranina yazdiriliyor
  
  if (servoDeger + 1 <= 180)    //servoDeger degiskenine 1 ekleniyor eger bu deger 180'den kucuk veya esit ise if blogunu icindeki kodlar işleniyor
  {
    sg2.write(servoDeger + 1);  //2. servo motora servoDeger degiskeniyle 1'in toplamından elde edilen deger gonderilor ve 1. servo motorun bu aciya gitmesi saglaniyor
    delay(15);                  //program akisi 15 milisaniye bekletiliyor sebebi servo motorun mekanik olması ve bu mekanik yapinin yazilimin hizina yetisememesidir.
  }
}

void sg2Asagi()     //2.servo motorun asagi yonlu harekiti icin fonsiyon tanimlamasi yapiliyor
{
  servoDeger = sg2.read();      //2. servo motorun mevcut degeri okunarak servoDeger degiskenine ataniyor
  Serial.println(servoDeger);   //2. servoDeger degiskeni seri port ekranina yazdiriliyor
 
  if (servoDeger - 1 >= 0 )     //servoDeger degiskeninden 1 cikartiliyor eger bu deger 0'dan buyuk veya esit ise if blogunun icindeki kodlar işleniyor
  {
    sg2.write(servoDeger - 1);  //2. servo motora servoDeger degiskeninden 1'in cikartilmasiyla elde edilen deger gonderilor ve 1. servo motorun bu aciya gitmesi saglaniyor
    delay(15);                  //program akisi 15 milisaniye bekletiliyor sebebi servo motorun mekanik olması ve bu mekanik yapinin yazilimin hizina yetisememesidir.
  }
}



void sg3Yukari()    
{
  servoDeger = sg3.read();      //3. servo motorun mevcut degeri okunarak servoDeger degiskenine ataniyor
  Serial.println(servoDeger);   //3. servoDeger degiskeni seri port ekranina yazdiriliyor
  
  if (servoDeger + 1 <= 180)    //servoDeger degiskenine 1 ekleniyor eger bu deger 180'den kucuk veya esit ise if blogunu icindeki kodlar işleniyor
  {
    sg3.write(servoDeger + 1);  //3. servo motora servoDeger degiskeniyle 1'in toplamından elde edilen deger gonderilor ve 1. servo motorun bu aciya gitmesi saglaniyor
    delay(15);                  //program akisi 15 milisaniye bekletiliyor sebebi servo motorun mekanik olması ve bu mekanik yapinin yazilimin hizina yetisememesidir.
  }
}

void sg3Asagi()     //2.servo motorun asagi yonlu harekiti icin fonsiyon tanimlamasi yapiliyor
{
  servoDeger = sg3.read();      //3. servo motorun mevcut degeri okunarak servoDeger degiskenine ataniyor
  Serial.println(servoDeger);   //3. servoDeger degiskeni seri port ekranina yazdiriliyor
 
  if (servoDeger - 1 >= 0 )     //servoDeger degiskeninden 1 cikartiliyor eger bu deger 0'dan buyuk veya esit ise if blogunun icindeki kodlar işleniyor
  {
    sg3.write(servoDeger - 1);  //3. servo motora servoDeger degiskeninden 1'in cikartilmasiyla elde edilen deger gonderilor ve 1. servo motorun bu aciya gitmesi saglaniyor
    delay(15);                  //program akisi 15 milisaniye bekletiliyor sebebi servo motorun mekanik olması ve bu mekanik yapinin yazilimin hizina yetisememesidir.
  }
}



void sg4Yukari()    
{
  servoDeger = sg4.read();      //4. servo motorun mevcut degeri okunarak servoDeger degiskenine ataniyor
  Serial.println(servoDeger);   //4. servoDeger degiskeni seri port ekranina yazdiriliyor
  
  if (servoDeger + 1 <= 180)    //servoDeger degiskenine 1 ekleniyor eger bu deger 180'den kucuk veya esit ise if blogunu icindeki kodlar işleniyor
  {
    sg4.write(servoDeger + 1);  //4. servo motora servoDeger degiskeniyle 1'in toplamından elde edilen deger gonderilor ve 1. servo motorun bu aciya gitmesi saglaniyor
    delay(15);                  //program akisi 15 milisaniye bekletiliyor sebebi servo motorun mekanik olması ve bu mekanik yapinin yazilimin hizina yetisememesidir.
  }
}

void sg4Asagi()     //2.servo motorun asagi yonlu harekiti icin fonsiyon tanimlamasi yapiliyor
{
  servoDeger = sg4.read();      //4. servo motorun mevcut degeri okunarak servoDeger degiskenine ataniyor
  Serial.println(servoDeger);   //4. servoDeger degiskeni seri port ekranina yazdiriliyor
 
  if (servoDeger - 1 >= 0 )     //servoDeger degiskeninden 1 cikartiliyor eger bu deger 0'dan buyuk veya esit ise if blogunun icindeki kodlar işleniyor
  {
    sg4.write(servoDeger - 1);  //4. servo motora servoDeger degiskeninden 1'in cikartilmasiyla elde edilen deger gonderilor ve 1. servo motorun bu aciya gitmesi saglaniyor
    delay(15);                  //program akisi 15 milisaniye bekletiliyor sebebi servo motorun mekanik olması ve bu mekanik yapinin yazilimin hizina yetisememesidir.
  }
}



void loop() {

  if (Serial.available())   //bluetooth sensorunden herhangi bir veri gelirse if blogunun icinde bulunan kodlar islenecektir
  {   
    gelenVeri = Serial.read();    //bluetooth sensorunden gelen deger gelenVeri degiskenine atanmaktadır
    Serial.println(gelenVeri);    //gelenVeri degiskeninin icindeki deger seri port ekranina yazdiriliyor


    //********************1. servo motor kontrolunun baslangici
    if (gelenVeri == 'F') {     //gelenVeri degiskeninin icindeki deger F'ye esit ise if blogunun icindeki komutlar islenmektedir 
      sg1Yukari();              //sg1Yukari fonksiyonu cagrilmakta bu sayede 1. servo motorun yukari yonlu hareketi gerceklesmektedir
    }

    if (gelenVeri == 'B') {    //gelenVeri degiskeninin icindeki deger B'ye esit ise if blogunun icindeki komutlar islenmektedir 
      sg1Asagi();              //sg1Asagi fonksiyonu cagrilmakta bu sayede 1. servo motorun asagi yonlu hareketi gerceklesmektedir 
    }   
    //****************1. servo motor kontrolunun bitisi

    
     //******************2. servo motor kontrolunun baslangici
    if (gelenVeri == 'L') {     //gelenVeri degiskeninin icindeki deger L'ye esit ise if blogunun icindeki komutlar islenmektedir 
      sg2Yukari();              //sg2Yukari fonksiyonu cagrilmakta bu sayede 2. servo motorun yukari yonlu hareketi gerceklesmektedir
    }

    if (gelenVeri == 'R') {   //gelenVeri degiskeninin icindeki deger R'ye esit ise if blogunun icindeki komutlar islenmektedir 
     sg2Asagi();              //sg2Asagi fonksiyonu cagrilmakta bu sayede 2. servo motorun asagi yonlu hareketi gerceklesmektedir 
    }   
    //****************2. servo motor kontrolunun bitisi


     //*******************3. servo motor kontrolunun baslangici
    if (gelenVeri == 'G') {   //gelenVeri degiskeninin icindeki deger G'ye esit ise if blogunun icindeki komutlar islenmektedir 
      sg3Yukari();            //sg3Yukari fonksiyonu cagrilmakta bu sayede 3. servo motorun yukari yonlu hareketi gerceklesmektedir
    }

    if (gelenVeri == 'I') {   //gelenVeri degiskeninin icindeki deger I'ye esit ise if blogunun icindeki komutlar islenmektedir 
      sg3Asagi();             //sg3sagi fonksiyonu cagrilmakta bu sayede 3. servo motorun asagi yonlu hareketi gerceklesmektedir 
    }   
    //****************3. servo motor kontrolunun bitisi


      //*****************4. servo motor kontrolunun baslangici
    if (gelenVeri == 'H') {   //gelenVeri degiskeninin icindeki deger H'ye esit ise if blogunun icindeki komutlar islenmektedir 
     sg4Yukari();              //sg4Yukari fonksiyonu cagrilmakta bu sayede 4. servo motorun yukari yonlu hareketi gerceklesmektedir
    }

    if (gelenVeri == 'J') {   //gelenVeri degiskeninin icindeki deger J'ye esit ise if blogunun icindeki komutlar islenmektedir 
      sg4Asagi();             ////sg4sagi fonksiyonu cagrilmakta bu sayede 4. servo motorun asagi yonlu hareketi gerceklesmektedir 
    }  
    //****************4. servo motor kontrolunun bitisi
  }

}
