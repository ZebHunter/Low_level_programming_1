#include "../include/schema_manager/element.h"


element* createElement(const char* key, element el){
	if (key && key <= 12) {
		element* elem = malloc(sizeof(element));
		*elem = el;
		memset(elem->key, 0, 13);
		strncpy(elem->key, key, 13);
		return *elem;
	}
	return NULL;
}

element* readElement() {

}

enum write_status writeElement() {

}

void destroyElement(element* el) {
	free(el);
}
