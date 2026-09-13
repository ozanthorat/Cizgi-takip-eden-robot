Projede çalışan diğer ekip arkadaşları: Selman yılmaz, Ramazan karagöz, Ahmet etgül.

Projemizde 2 temel parça olan L298N motor sürücüsü ve Arduino kullanılmıştır.
Ayrıca çizgi tespitinde kullanılan TCRT5000 3'lü kızılötesi sensör, şasi ve 2 adet DC motor kullanılmıştır.

Programın işleyişi oldukça basittir:

Kızılötesi sensörün LED kısmı kızılötesi ışık yayar ve bu ışık beyaz yüzeyden alıcıya geri yansır. Ancak siyah yüzeye kızılötesi ışık gelirse, ışık emilir ve alıcıya yansıyamaz.

Önemli Not: Kullandığımız siyah bant kalın olduğu için kodu buna göre düzenlememiz gerekti. Normalde ileri komutu için sadece ortadaki sensörün 0 olması gerekirken, sol ve sağ sensörler 0 olduğunda da robot ileri gitmektedir.

loop kısmında 4 farklı fonksiyon bulunmaktadır:

ileri()

sag()

sol()

dur()

Bu fonksiyonlar duruma göre çağrılmaktadır. Durum kontrolü kısmında ise if-else komutları kullanılarak o anki sensör verilerine göre işlem yapılmaktadır.

SensorL, SensorC ve SensorR sırasıyla soldaki sensör, ortadaki sensör ve sağdaki sensördür.

Siyah bant geniş olduğundan robotun yönünü şaşırmaması için, örneğin sola dönme şartında ya sadece soldaki sensör 0 olmalı ya da soldaki ve ortadaki sensörler aynı anda 0 olmalıdır. İleri komutunda ise sensör dizilimi 010 olarak okunduğunda robot daha düzgün çalışmaktadır.
