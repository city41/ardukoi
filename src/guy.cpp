#include "guy.h"
#include "renderer.h"
#include "state.h"
#include "maskBitmaps.h"
#include "nonMaskBitmaps.h"

extern Renderer renderer;

int16_t Guy::x = 16 * 36;
int16_t Guy::y = 16 * 20 + 6;

bool Guy::isActive = false;
/* uint8_t Guy::startingActiveHour = 4; */
uint8_t Guy::startingActiveHour = 0;
/* uint8_t Guy::endingActiveHour = 9; */
uint8_t Guy::endingActiveHour = 23;

void Guy::update(bool isActive, bool justBecameActive) {
    uint8_t hour = State::getCurrentHour();

    Guy::isActive = (isActive && Guy::isActive || State::gameState.canChooseProMode) || (justBecameActive && hour >= startingActiveHour && hour <= endingActiveHour);
}

void Guy::render(uint8_t frame) {
    if (isActive) {
        renderer.drawPlusMask(x, y, fishingGuy_plus_mask, 0);
        renderer.drawPlusMask(x + 10, y, fishingPole_plus_mask, 0);
        renderer.drawOverwrite(x + 34, y + 5, bobber_tiles, static_cast<uint8_t>(frame > 30), 0, Xor);
    }
}