var left_prev = left_down;
left_down = keyboard_check_direct(vk_shift);
if (left_down && !left_prev) display_mouse_button_press(mb_left);
if (!left_down && left_prev) display_mouse_button_release(mb_left);

if (keyboard_check_direct(vk_lalt)) display_mouse_wheel_scroll(120); // up
if (keyboard_check_direct(vk_ralt)) display_mouse_wheel_scroll(-120); // down