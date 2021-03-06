/*	Copyright (c) 2013, 2014 Adam Dej
	
	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE. */

#ifndef __DRAWING_1BIT_H
#define __DRAWING_1BIT_H

#include <stdbool.h>

#include "../display_device.h"

bool draw_line_1bit(uintpix x0, uintpix y0, uintpix x1, uintpix y1, bool color, DISPLAY_1BIT *display);
bool draw_rectangle_1bit(uintpix x0, uintpix y0, uintpix x1, uintpix y1, bool color, DISPLAY_1BIT *display);
bool draw_triangle_1bit(uintpix x0, uintpix y0, uintpix x1, uintpix y1, uintpix x2, uintpix y2, bool color, DISPLAY_1BIT *display);
bool draw_circle_1bit(uintpix xm, uintpix ym, uintpix r, bool color, DISPLAY_1BIT *display);
bool draw_ellipse_1bit(uintpix x0, uintpix y0, uintpix x1, uintpix y1, bool color, DISPLAY_1BIT *display);
bool fill_triangle_1bit(uintpix x0, uintpix y0, uintpix x1, uintpix y1, uintpix x2, uintpix y2, bool color, DISPLAY_1BIT *display);
bool fill_circle_1bit(uintpix xm, uintpix ym, uintpix r, bool color, DISPLAY_1BIT *display);
bool fill_ellipse_1bit(uintpix x0, uintpix y0, uintpix x1, uintpix y1, bool color, DISPLAY_1BIT *display);

bool draw_bitmap_1bit(uintpix x0, uintpix y0, const uint8_t *bitmap, uint8_t(*read_byte)(const uint8_t *address), DISPLAY_1BIT *display);
bool draw_text_1bit(uintpix x0, uintpix y0, const char *string, const uint8_t *font, uint8_t(*read_byte)(const uint8_t *address), DISPLAY_1BIT *display);


#endif