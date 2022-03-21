#ifndef _table_h
#define _table_h
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
#include <fstream>
using namespace std;


template <typename T, typename V>
class table
{
public:
	T data;
	V* next;
	V* prev;
	table() 
	{
		this->next = nullptr;
		this->prev = nullptr;
	};
	void Add(V*, V*);
	V* search(int,V*);
	int len(V* head);
	V* getTail(V*);
	V* load_from_file(string, V*, size_t, ...);
	virtual void splitStrings(string, va_list*);

};









template <typename T, typename V>
V* table<T, V>::load_from_file(string path, V* head, size_t count_param, ...) {
	/*ifstream fin;
	string CommonPath = "D:\\Database\\"+path;
	fin.open(CommonPath);
	fin.imbue(locale(""));
	V* cur = head;
	V* add_elem = nullptr;
	va_list factor; //указатель va_list
	if (!fin.is_open()) {
		cout << "Файл не может быть открыт" << endl;
	}
	else {
		if (!fin.eof()) {
			while (!fin.eof()) {
				va_start(factor, count_param); // устанавливаем указатель
				add_elem = cur->load_elem_from_file(fin, factor);
				head = head->push(add_elem, head);
				va_end(factor); // завершаем обработку параметров
			}
		}
	}
	fin.close();
	return head;*/
	V* head = new V;
	va_list factor;
	string stroke;
	ifstream file(filename);
	getline(file, stroke);
	head->splitString(stroke, level_list, sector_list);
	while (getline(file, stroke)) {
		va_start(factor, count_param);
		V* object = new V;
		object->splitString(stroke, level_list, sector_list);
		Add(head, object);
		va_end(factor);
	}
	file.close();
	return head;

}
template <typename T, typename V>
void table<T, V>::splitStrings(string stroke, va_list* param) {
	
	V* temp = nullptr;
	return temp;
}






template <typename T, typename V>
V* table<T, V>::getTail(V* head)
{
	V* temp;
	temp = head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}

	return temp;
}


template <typename T, typename V>
void table<T, V>::Add(V* head, V* elem)
{
	V* tail;
	if (head == NULL)
	{
		head = elem;
		elem->prev = NULL;
		elem->next = NULL;
	}
	else
	{

		if (head->next == NULL)
		{
			head->next = elem;
			elem->prev = head;
			elem->next = NULL;
			head->prev = NULL;

		}
		else
		{
			tail = getTail(head);
			tail->next = elem;
			elem->prev = tail;
		}


	}
}




template <typename T, typename V>
V* table<T, V>::search(int id, V* head)
{
	while (id != head->data.id)
	{
		head = head->next;
	}
	return head;
}

template <typename T, typename V>
int table<T, V>::len(V* head)
{
	int count;
	count = 0;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}

template <typename V>
V* getTail(V* head)
{
	V* tail;
	tail = new V;
	tail = head;
	if (tail == nullptr)
	{
		return head;
	}
	else
	{
		while (tail->next != nullptr)
		{
			tail = tail->next;
		}
		return tail;
	}
	
}

#endif