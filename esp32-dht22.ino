const int dacPin = 25; // пін ЦАП
const int ledPin = 2;  // пін світлодіода
int dacValue = 0;      // початкове значення ЦАП

void setup() {
  // ініціалізація пінів
  pinMode(ledPin, OUTPUT);
  dacWrite(dacPin, dacValue); // встановити початкове значення ЦАП
}

void loop() {
  // збільшувати значення ЦАП від 0 до 255
  for (dacValue = 0; dacValue <= 255; dacValue++) {
    dacWrite(dacPin, dacValue); // встановити нове значення ЦАП
    analogWrite(ledPin, dacValue); // встановити яскравість світлодіода
    delay(10); // затримка
  }

  // зменшувати значення ЦАП від 255 до 0
  for (dacValue = 255; dacValue >= 0; dacValue--) {
    dacWrite(dacPin, dacValue); // встановити нове значення ЦАП
    analogWrite(ledPin, dacValue); // встановити яскравість світлодіода
    delay(10); // затримка
  }
}

