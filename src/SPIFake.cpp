#include "ArduinoFake.h"
#include "SPIFake.h"

void SPIClass::begin() { ArduinoFakeInstance(SPI)->begin(); };

void SPIClass::end() { ArduinoFakeInstance(SPI)->end(); };

void SPIClass::beginTransaction(SPISettings settings) {
  ArduinoFakeInstance(SPI)->beginTransaction(settings);
};

void SPIClass::endTransaction(void) {
  ArduinoFakeInstance(SPI)->endTransaction();
};

uint8_t SPIClass::transfer(uint8_t data) {
  return ArduinoFakeInstance(SPI)->transfer(data);
};

uint16_t SPIClass::transfer16(uint16_t data) {
  return ArduinoFakeInstance(SPI)->transfer16(data);
}

uint32_t SPIClass::transfer32(uint32_t data) {
  return ArduinoFakeInstance(SPI)->transfer32(data);
}

void SPIClass::transfer(void *buf, size_t count) {
  return ArduinoFakeInstance(SPI)->transfer(buf, count);
};

void SPIClass::transfer(const void *buf, void *ret, size_t count) {
  return ArduinoFakeInstance(SPI)->transfer(buf, ret, count);
};

SPIClass SPI = SPIFakeProxy(ArduinoFakeInstance(SPI));
