#ifndef CHECK_H
#define CHECK_H
#include <stdlib.h>

void init(int* tab, int w, int h) {
	vekt v;
	int length = 0; // ca�a wielko��
	int size = 0; // ilo�� zmiennych w �rodku
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			length += tab[i][j];
		}
	}
	length *= 9;
	v = (vekt*)malloc(length * sizeof(vekt));
}

void resize(vekt v, int length) {
	v = (vekt*)realloc(p, length * sizeof(vekt));
	//TO-DO zmieni� na temp = realloc w ifie by zapobiec wycieku pami�ci
}

void check(int* tab, int w, int h) {

}

void release(vekt v) {
	free(v);
	v = NULL;
}

#endif