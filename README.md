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

## Meta

**Author:** [YellowAfterlife](https://github.com/YellowAfterlife)  
**License:** MIT
