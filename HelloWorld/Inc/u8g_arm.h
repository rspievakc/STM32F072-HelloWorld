#ifndef _U8G_ARM_H
#define _U8G_ARM_H

//adjust this path:
#include "u8g.h"

//main com function. read on...
uint8_t u8g_com_hw_i2c_fn(u8g_t *u8g, uint8_t msg, uint8_t arg_val, void *arg_ptr);

#endif
