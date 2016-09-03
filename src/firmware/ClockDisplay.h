#pragma once

#include <TimeLib.h>
#include <Adafruit_NeoPixel.h>
#include <Scheduler.h>

/**
 * Represents the various animations.
 */
enum Animation {

    ANIM_DISCRETE,
    ANIM_CONTINUOUS,
    ANIM_BAR,

    NUM_ANIMATIONS
};

/**
 * Displays data on the clock.
 */
class ClockDisplayTask : public Task {

public:

    /**
     * Constructs a new ClockDisplayTask.
     */
    ClockDisplayTask();

    /**
     * Displays the time on the clock face.
     * 
     * @param   t   The time to display
     */
    void displayTime(time_t t);

    /**
     * Sets the brightness of the pixels.
     *
     * @param[in]  unscaledBrightness   The new brightness value between 1 and 100
     */
    void setBrightness(int unscaledBrightness);

protected:
    /**
     * Initializes the clock display.
     */
    void setup();

    /**
     * Updates the clock face with the current time.
     */
    void loop();

private:

    void discreteAnimation(time_t t);
    void continuousAnimation(time_t t);
    void barAnimation(time_t t);

    void printTime(time_t t);
    void updateNightMode(time_t t);

    uint32_t addColors(uint32_t a, uint32_t b);
    uint32_t scaleColor(uint32_t color, float scale);
    uint8_t gamma(uint8_t x);
    uint32_t perceived(uint32_t color);

    Adafruit_NeoPixel pixels;
    float brightness;
};

extern ClockDisplayTask clock_display_task;
