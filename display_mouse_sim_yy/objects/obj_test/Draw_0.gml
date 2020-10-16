draw_set_font(fnt_test);
draw_set_color(c_white);
draw_text(5, 5,
	"Left down: " + string(display_mouse_button_check_direct(mb_left))
	+ "\nRight down: " + string(display_mouse_button_check_direct(mb_right))
	+ "\nMiddle down: " + string(display_mouse_button_check_direct(mb_middle))
);
