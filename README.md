# Roboterbiene
Die Roboterbiene kann die Luftemperatur messen und entsprechend der gemessenen Werte die Farbe der LED, die auf ihrem Rückensitzt, ändern. In einem Bereich von ungefähr 10 bis 40 Grad Celsius wechselt die Farbe der LED von Blau zu Rot in einem fließenden Übergang. 

![Bild](https://github.com/mnebuhr/roboterbiene/blob/master/media/Roboterbiene.jpg)

### Kollektive Leistung
In der Natur können Bienen ebenfalls ihre Umgebungstemperatur messen und sind in der Lage gezielt ein bestimmtes Raumklima im 
Innern ihres Bienenstocks zu erzeugen. Sie können ihre Körpertemteratur durch Muskelzucken bis 42 Grad Celsius aufheizen und geben die Wärme an den Bienenstock ab. Ist es im Innern des Bienenstocks hingegen zu warm, holen sie Wasser, das durch Verdunstung für Abkühlung sorgt. Während der Brutzeit beheizen oder kühlen die Arbeiterbienen das Brutnest auf eine konstante Temperatur
zwischen 33 und 36 Grad Celsius. 

*"Die Klimatisierung des Brutnestes gehört zu den erstaunlichen Gemeinschaftsleistungen der
Honigbienen, deren Einzelheiten wir erst allmählich zu verstehen beginnen."*
[(Tautz, 2004)](http://www.bienenmachenschule.de/pdf/Heizerbienen.pdf/ "Raumklimatisierung: Meisterleistung der Honigbienen, PDF")

Die kollektive Leistung der Bienen ist messbar. In der Bienenforschung und in der modernen Imkerei werden Bienenstöcke mit
Temperatursensoren ausgestattet. Zeigt die Temperaturkurve konstant 36 Grad Celsius an, dann weiß der Imker, ohne dass er den Deckel des Bienenstocks öffenen muss und damit das Bienenvolk stören würde, dass sich im Innern ein Brutnest befindet. Diese Information ist für ihn sehr nützlich, so weiß er z.B. dass er in dieser Zeit keine Behandlung gegen die Varoamilbe durchführen darf. 

### Der Prototyp

Die Roboterbiene ist mit einem ESP-01, einem Temperatursensor und einer RGB-LED ausgestatt. Ebenso wie die echten Bienen kann die Roboterbiene die Temperatur messen und etsprechend der gemessenen Temperatur eine Aktion durchführen. Anders als die echten Bienen 
beginnt sie nicht damit, Wärme zu erzeugen oder für Abkühlung zu sorgen, sondern sie ändert die Hue-Wert der LED.

Die Biene kann Temperaturunterschiede in einem Bereich von ungefähr 10 bis 40 Grad Celsius unterscheiden. Das ist der Temperaturbereich, in dem eine Biene überleben kann. 

* **10 Grad Celsius -** Erst ab einer Außentemperatur von 10 Grad Celsius verlässt eine Biene ihren Stock. Um Fliegen zu können
muss sie zuerst ihre Flugmuskulatur auf "Betriebstemperatur" bringen.

* **20 Grad Celsius -** Das ist die Wohlfühltemperatur der Bienen. 

* **36 Grad Celsius -** Während der Brutzeit sorgen die Arbeiterbienen im Innern des Brutnestes für eine konstante Temperatur 
von 36 Grad Celsius, weil sich bei diesen Temperaturen die Bienenlarven in ihrem letzten Entwicklungsstadium am besten entwickeln
können.  

* **42 Grad Celsius -** Eine Biene kann sich selber bis zu einer Temperatur von 42 Grad Celsius aufwärmen. Bei höheren Temperaturen stirbt sie.

![](https://github.com/mnebuhr/roboterbiene/blob/master/media/naturTechnik.jpg)

### Natur und Technik

Die Roboterbiene verbindet Natur und Technik. Die Form der Biene ahmt das Aussehen einer echten Biene nach, denn sie besitzt typische Merkmale einer Biene: gestreifter Körper, zwei Flügel, sechs Beine und zwei Fühler. Die Struktur der Flügel wurde der Strukur von echten Bienenflügeln nachempfunden. Gleichzeitig ahmt die Roboterbiene das Aussehen einer Mikrokontroller-Platine nacht. Die Elektronischen Bauteile sind bewusst sichtbar und eingravierte Linien erinnern an Leiterbahnen eines PCB-Bords. 

![Bild](https://github.com/mnebuhr/roboterbiene/blob/master/media/Lasercut.jpg)

### Komposition

Die Roboterbiene als Objekt soll sowohl das Interesse für die Phänomene der Natur sowie für technische und elektronische Elemente und Komponenten wecken. Die kollektiven Leistungen von Bienenvölkern werden gerne und viel untersucht und erforscht. Die Physiognomie der Biene spielt dabei auch eine entscheidende Rolle. Mit ihrem im Schaltkreis integrierten Temperatursensor hebt die Roboterbiene eine physiognomische und die kollektive Leistung der Biene hervor.  

Die Roboterbiene ist gleichzeitig ein elektronisches Spielzeug, bei dem jede einzelne Komponente bewusst gezeigt und nicht abdeckt wird. Bis auf die Widestände, die die Beine der Biene bilden, hat jedes verbaute elektronische Bauteil eine Funktion im Schaltkreis. Die Bloßlegung der technischen Bauteile soll die Technik sichtbar und erfahrbar machen.

Die Roboterbiene ist auch programmierbar. So kann das Verhalten der Biene auf die gemessenen Sensorwerte noch verändert werden. Wie kann die Anzeige der Temperaturwerte optimiert werden? Wie können die einzelnen Temperaturbereiche besser hervorgehoben werden? Kann die Biene mit dem ESP-01 die Sensordaten auch senden? 

![](https://github.com/mnebuhr/roboterbiene/blob/master/media/schaltung.png)
![](https://github.com/mnebuhr/roboterbiene/blob/master/media/Lasercut-vorlage.png)
