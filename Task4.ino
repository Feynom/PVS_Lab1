const int ledPin = 2;        // пін світлодіода
const int ledChannel = 0;    // номер каналу PWM
const int frequency = 5000;  // частота PWM (Гц)
const int resolution = 8;    // розрядність (біти)

void setup() {
  // ініціалізація каналу PWM
  ledcSetup(ledChannel, frequency, resolution);
  // прив'язка каналу PWM до піну світлодіода
  ledcAttachPin(ledPin, ledChannel);
}

void loop() {
  // збільшувати яскравість світлодіода від 0 до 255
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    ledcWrite(ledChannel, dutyCycle); // встановити нове значення ШІМ
    delay(10); // затримка
  }

  // зменшувати яскравість світлодіода від 255 до 0
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    ledcWrite(ledChannel, dutyCycle); // встановити нове значення ШІМ
    delay(10); // затримка
  }
}
