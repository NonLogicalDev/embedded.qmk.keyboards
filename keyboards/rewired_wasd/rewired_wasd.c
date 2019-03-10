/* Copyright 2019 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "rewired_wasd.h"

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up

	matrix_init_user();
}

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)

	matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	// put your per-action keyboard code here
	// runs for every action, just before processing by the firmware

	return process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
	// put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
	led_set_user(usb_led);
}

void keyboard_pre_init_user(void) {
  // Set up the LED
  DDRD  |= (1<<6);
  // Turn on the LED
  PORTD |= (1<<6);

  
  // START: KEYBOARD STATUS LEDS //
  
  /// NOTE: This keyboard has both LEDs' anodes connected to +5V line.
  //        Meaning that LEDs are *Active LOW*. To turn them off the
  //        voltage on the cathode side should match the 5V line.
  //
  //        (i.e pins for those LEDs should be set to HIGH to turn
  //        them OFF and set to LOW to turn them ON).
  
  // Set up the Keyboard Status LEDs.
  DDRE |= (1<<0);
  DDRE |= (1<<1);
  
  // Turn off Keyboard Status LEDs.
  PORTE |= (1<<0); // (Does not work on my keyboard, probably fried it accidentally)
  PORTE |= (1<<1); // (This one works and is used for caps lock)
  
  // END: KEYBOARD STATUS LEDS //
}

// Defining LED settings here, as they are global and are not dependent
// on the layout.
void led_set_user(uint8_t usb_led) {
  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    PORTE &= ~(1<<1);
  } else {
    PORTE |= (1<<1);
  }
}
