#ifndef __BSP_UART_H
#define __BSP_UART_H

#include "stdio.h"
#include "main.h"

void uart_init(void);
void uart_send_char(u8 ch);
u8 uart_receive_char(void);

#endif /* __BSP_UART_H */
