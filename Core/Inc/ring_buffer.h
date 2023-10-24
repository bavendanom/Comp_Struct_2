/*
 * ring_buffer.h
 *
 *  Created on: Oct 23, 2023
 *      Author: braya
 */

#ifndef INC_RING_BUFFER_H_
#define INC_RING_BUFFER_H_

#include <stdint.h>

typedef struct{ // es la definicion de un tipo - tipo que estamos utilizando
	uint8_t *buffer; // apuntador de memorioa  "*" es un apuntador a memoria
	uint16_t head; //cabeza - escribe un nuevo dato
	uint16_t tail; //cola - lee el datao anantiguo

	// el buffer esta lleno cuando la cabeza alcance la cola
	uint16_t capacity; //capacidad
	uint8_t is_full; //indica si el buffer esta lleno

}ring_buffer_t;


// los argumentos son las estructura que se quiere inicializar, la posicion d memoria donde queremos ubicar los datos, capacidad
void ring_buffer_init(ring_buffer_t *ring_buffer, uint8_t *buffer, uint16_t capacity);

#endif /* INC_RING_BUFFER_H_ */
