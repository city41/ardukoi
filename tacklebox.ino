#include <EEPROM.h>
#include <Arduboy2.h>
#include <math.h>

#include "src/game.h"
#include "src/renderer.h"
#include "src/util.h"
#include "src/sfx.h"
#include "src/tileFloor.h"

Arduboy2Base arduboy;

Renderer renderer(arduboy);
Game game;

void setup() {
    arduboy.boot();
    arduboy.audio.begin();
    BeepPin1::begin();
    randomSeed(analogRead(0));

#ifdef SERIAL_LOG
    Serial.begin(9600);
    delay(1500);
    LOG("setup done");
#endif

    TileDef tile = TileFloor::getTileAt(34, 0);
    LOGV(static_cast<uint8_t>(tile));
}

uint8_t loopCounter = 1;

void loop() {
    if (!arduboy.nextFrame()) {
        return;
    }

    loopCounter += 1;

    if (loopCounter == 61) {
        loopCounter = 1;
    }

    arduboy.clear();
    arduboy.pollButtons();
    BeepPin1::timer();
    
    game.update(loopCounter);
    game.render(loopCounter);
    arduboy.display();
}

