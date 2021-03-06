/*
 * paging.h
 * 
 * Copyright 2017 Obiwac
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#ifndef PAGING_H
	#define PAGING_H
	
	#include "../types.h"
	#include "../screen.h"
	
	#include "../interrupts/isr.h"
	#include "../interrupts/irq.h"
	
	void blank_pages(void);
	void map_page(uint32 physical_address, uint32 virtual_address, int _size);
	void identity_paging(uint32 from, int _size);
	void init_paging(void);
	
#endif
