# display_mouse_sim
Minimalistic mouse automation functions.

## Functions

- **display_mouse_button_press(button)**  
  Presses the given mouse button (analogous to `keyboard_key_press`)
- **display_mouse_button_release(button)**  
  Releases the given mouse button (analogous to `keyboard_key_release`)
- **display_mouse_button_check_direct(button)**  
  Checks if the given mouse button is currently held down (analogous to `keyboard_check_direct`)
- **display_mouse_wheel_scroll(amount)**  
  Sends a scroll wheel event.  
  Usually, amount of `120` is one scroll up and `-120` is one scroll down, but you may find that many applications don't actually care about amount at all, only the direction.

Supported mouse buttons are `mb_left`, `mb_right`, and `mb_middle`.

## Example
Create:
```
left_down = 0;
```
Step:
```
var left_prev = left_down;
left_down = keyboard_check_direct(vk_shift);
if (left_down && !left_prev) display_mouse_button_press(mb_left);
if (!left_down && left_prev) display_mouse_button_release(mb_left);

if (keyboard_check_direct(vk_lalt)) display_mouse_wheel_scroll(120); // up
if (keyboard_check_direct(vk_ralt)) display_mouse_wheel_scroll(-120); // down
```
This would allow you to press the left mouse button by pressing Shift and scroll up/down by pressing Left Alt and Right Alt accordingly.

## Installing

- **GameMaker 8.1 and older:**  
  Add the DLL as an included file.  
  Add the scripts using menu:Scripts➜Import Scripts
- **GameMaker: Studio:**  
  Import the GMEZ by right-clicking Extensions folder in resource tree and picking "Import extension"
- **GameMaker Studio 2**
  Import the YYMP by drag and dropping it onto your workspace or picking menu:Tools➜Import Local Package

## Meta

**Author:** [YellowAfterlife](https://github.com/YellowAfterlife)  
**License:** MIT
