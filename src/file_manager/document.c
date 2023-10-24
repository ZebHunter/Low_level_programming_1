#include "document.h"


struct file* createFile(const char* name)
{
	struct file* file = malloc(sizeof(struct file));
	if (file) {
		file->f = fopen(name, "w+b");
		file->header = (struct document_header) { sizeof(document_header) + 0,
						0, 0, 0 };
		return file;
		//Дописать лист индексов
	}
	return NULL;
}

struct file* loadFile(const char* name)
{
	struct file* file = malloc(sizeof(file));
	if (file) {
		file->f = fopen(name, "r+b");
		return file;
	}
	if (!closeFile(file)) return CLOSE_WRONG;

	return CLOSE_OK;
}

enum close_status closeFile(struct file* file)
{
	if (fclose(file->f) == 0) return CLOSE_OK;
	else return CLOSE_WRONG;
}

enum write_status writeHeader(struct file* file)
{
	int64_t save_pos = ftell(file->f);
	rewind(file->f);
	if (!fwrite(&file->header, sizeof(document_header), 1, file->f)) {
		return WRITE_WRONG;
	}
	fseek(file->f, save_pos, SEEK_SET);
	return WRITE_OK;
}

/*block_index getIndex(struct file* file, uint64_t index_number)
{
	return;
}*/

enum write_status writeNewIndexes(struct file* file, uint64_t count)
{
	return write_status();
}
