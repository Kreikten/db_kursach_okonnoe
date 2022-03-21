#ifndef struct_h
#define struct_h
#define _CRT_SECURE_NO_WARNINGS
#include "_table.h"




typedef struct data
{
	int day;
	int month;
	int year;
}Datetime;
typedef struct _nationality
{
	int id;
	string nation;
}Nationality_;
typedef struct _religion
{
	int id;
	string religion;

}Religion_;
typedef struct _gender
{
	int id;
	string gender;

}Gender_;
typedef struct _comfortlevel
{
	int id;
	string level;

}ComfortLevel_;
typedef struct _worktype
{
	int id;
	string type;

}WorkType_;


class Nationality : public table<Nationality_, Nationality>
{
public:

	string toStringAll()
	{
		string s;
		Nationality* temp;
		temp = this;
		while (temp != nullptr)
		{
			s = s + temp->toString() + "\n";
			temp = temp->next;
		}
		
		return s;
	}
	string toString()
	{
		string s;
		s = s + this->data.nation + "|" + to_string(this->data.id) + "\n";
		return s;
	}
	void splitString(string stroke)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.nation = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	Nationality* readFromFile(string filename)
	{
		Nationality* head = new Nationality;
		
		string stroke;
		bool f; bool check;
		ifstream file(filename);
		
		f = true;
		getline(file, stroke);
		head->splitString(stroke);
		while (getline(file, stroke)) {
			Nationality* object = new Nationality;
			object->splitString(stroke);
			Add(head,object);
		}
		file.close();
		return head;
	}
};
class Religion : public table<Religion_, Religion>
{
public:
	string toStringAll()
	{
		string s;
		Religion* head;
		head = this;
		while (head != nullptr)
		{
			s = s + head->data.religion + "|" + to_string(head->data.id) + "\n";
			head = head->next;
		}

		return s;
	}
	string toString()
	{
		string s;
		s = s + this->data.religion + "|" + to_string(this->data.id) + "\n";
		return s;
	}
	void splitString(string stroke)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.religion = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	Religion* readFromFile(string filename)
	{
		Religion* head = new Religion;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke);
		while (getline(file, stroke)) {
			Religion* object = new Religion;
			object->splitString(stroke);
			Add(head, object);
		}
		file.close();
		return head;
	}
};
class Gender : public table<Gender_, Gender>
{
public:

	string toStringAll()
	{
		string s;
		Gender* head;
		head = this;
		while (head != nullptr)
		{
			s = s + head->toString() + "\n";
			head = head->next;
		}

		return s;
	}
	string toString()
	{
		string s;
		s = s + this->data.gender + "|" + to_string(this->data.id) + "\n";
		return s;
	}
	void splitString(string stroke)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.gender = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	Gender* readFromFile(string filename)
	{
		Gender* head = new Gender;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke);
		while (getline(file, stroke)) {
			Gender* object = new Gender;
			object->splitString(stroke);
			Add(head, object);
		}
		file.close();
		return head;
	}
};
class ComfortLevel : public table<ComfortLevel_, ComfortLevel>
{
public:
	string toStringAll()
	{
		string s;
		ComfortLevel* head;
		head = this;
		while (head != nullptr)
		{
			s = s + head->toString() + "\n";
			head = head->next;
		}

		return s;
	}
	string toString()
	{
		string s;
		s = s + this->data.level + "|" + to_string(this->data.id) + "\n";
		return s;
	}
	void splitString(string stroke)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.level = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	ComfortLevel* readFromFile(string filename)
	{
		ComfortLevel* head = new ComfortLevel;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke);
		while (getline(file, stroke)) {
			ComfortLevel* object = new ComfortLevel;
			object->splitString(stroke);
			Add(head, object);
		}
		file.close();
		return head;
	}
};
class WorkType : public table< WorkType_, WorkType>
{
public:
	string toStringAll()
	{
		string s;
		WorkType* head;
			head = this;
		while (head != nullptr)
		{
			s = s + head->toString() + "\n";
			head = head->next;
		}

		return s;
	}
	string toString()
	{
		string s;
		s = s + this->data.type + "|" + to_string(this->data.id) + "\n";
		return s;
	}
	void splitString(string stroke)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.type = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	WorkType* readFromFile(string filename)
	{
		WorkType* head = new WorkType;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke);
		while (getline(file, stroke)) {
			WorkType* object = new WorkType;
			object->splitString(stroke);
			Add(head, object);
		}
		file.close();
		return head;
	}
};



#endif